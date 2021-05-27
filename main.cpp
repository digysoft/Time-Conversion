/******************************************************************************

                            DigySoft E.I.R.L
                              C++ Compiler

Program: Time Conversion
Author: Jose Vidal
E-mail: jvidalsm@gmail.com
Date: 27/05/2021
Version: 1.0.0

Description:
Given a time in
-hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

Example
Input: 12:01:00PM
Return '12:01:00'.

Input: 12:01:00AM
Return '00:01:00'.
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    string in_hour;
    char hh[2+1];
    char mm[2+1];
    char ss[2+1];
    char ap[2+1];
    char output[8+1];


    cin >> in_hour;

    hh[0] = in_hour.at(0);
    hh[1] = in_hour.at(1);
    hh[2] = 0;

    mm[0] = in_hour.at(3);
    mm[1] = in_hour.at(4);
    mm[2] = 0;

    ss[0] = in_hour.at(6);
    ss[1] = in_hour.at(7);
    ss[2] = 0;

    ap[0] = in_hour.at(8);
    ap[1] = in_hour.at(9);
    ap[2] = 0;

    int _hour = atoi(hh);
    int _min = atoi(mm);
    int _sec = atoi(ss);

    if (ap[0] == 'P')//PM
    {
        if (_hour == 12) _hour = 12;
        else _hour += 12;
    }
    else//AM
    {
        if (_hour == 12) _hour = 0;
    }

    sprintf(output,"%02d:%02d:%02d",_hour,_min,_sec);

    cout << output<< endl;
    return 0;
}
