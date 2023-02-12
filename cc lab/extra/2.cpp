#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "LVIII";
    int sum = 0;
    for (int i = 0; s.length() > 0; i++)
    {
        if (s[i] == 'M' && s[i - 1] != 'C')
        {
            s.erase(0, 1);
            sum += 1000;
        }
        else if (s[i] == 'D' && s[i - 1] != 'C')
        {
            s.erase(0, 1);
            sum += 500;
        }
        else if (s[i] == 'C' && s[i - 1] != 'X')
        {
            s.erase(0, 1);
            sum += 100;
        }
        else if (s[i] == 'L' && s[i - 1] != 'X')
        {
            s.erase(0, 1);
            sum += 50;
        }
        else if (s[i] == 'X' && s[i - 1] != 'I')
        {
            s.erase(0, 1);
            sum += 10;
        }
        else if (s[i] == 'V' && s[i - 1] != 'I')
        {
            s.erase(0, 1);
            sum += 5;
        }
        else if (s[i] == 'I')
        {
            s.erase(0, 1);
            sum += 1;
        }
        else if (s[i] == 'M' && s[i - 1] == 'C')
        {
            s.erase(0, 2);
            sum += 900;
        }
        else if (s[i] == 'D' && s[i - 1] == 'C')
        {
            s.erase(0, 2);
            sum += 400;
        }
        else if (s[i] == 'C' && s[i - 1] == 'X')
        {
            s.erase(0, 2);
            sum += 90;
        }
        else if (s[i] == 'L' && s[i - 1] == 'X')
        {
            s.erase(0, 2);
            sum += 40;
        }
        else if (s[i] == 'X' && s[i - 1] == 'I')
        {
            s.erase(0, 2);
            sum += 9;
        }
        else if (s[i] == 'V' && s[i - 1] == 'I')
        {
            s.erase(0, 2);
            sum += 4;
        }
        else
        {
            continue;
        }
        cout << sum << "and" << s << "and" << s.length() << "now\n";
    }
    cout << sum << endl;
    return 0;
}