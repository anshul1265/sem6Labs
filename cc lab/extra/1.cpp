#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "LVIII";
    int sum = 0;
    for (int i = 0; s.length() > 0;)
    {
        if (s[i] == 'I' && s[i + 1] == 'V')
        {
            s.erase(0, 2);
            sum += 4;
        }
        else if (s[i] == 'I' && s[i + 1] == 'X')
        {
            s.erase(0, 2);
            sum += 9;
        }
        else if (s[i] == 'X' && s[i + 1] == 'C')
        {
            s.erase(0, 2);
            sum += 90;
        }
        else if (s[i] == 'X' && s[i + 1] == 'L')
        {
            s.erase(0, 2);
            sum += 40;
        }
        else if (s[i] == 'C' && s[i + 1] == 'D')
        {
            s.erase(0, 2);
            sum += 400;
        }
        else if (s[i] == 'C' && s[i + 1] == 'M')
        {
            s.erase(0, 2);
            sum += 900;
        }
        else
        {
            switch (s[i])
            {
            case 'L':
                sum += 50;
                break;
            case 'I':
                sum += 1;
                break;
            case 'V':
                sum += 5;
                break;
            case 'X':
                sum += 10;
                break;
            case 'C':
                sum += 100;
                break;
            case 'D':
                sum += 500;
                break;
            case 'M':
                sum += 1000;
                break;

            default:
                break;
            }
            s.erase(0, 1);
        }
        cout << sum << "and" << s << "and" << s.length() << "now\n";
    }
    cout << sum << endl;
    return 0;
}