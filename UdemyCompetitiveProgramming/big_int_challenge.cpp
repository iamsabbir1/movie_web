#include <iostream>
#include <algorithm>

using namespace std;
string subtraction(string a, string b)
{
    string result = "";
    if (a.length() > b.length())
        swap(a, b);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int carry = 0;
    int subtraction;
    for (int i = 0; i < a.length(); i++)
    {
        if (a.length() < i)
            a[i] = (a[i] - '0') + carry + '0';
        if ((b[i] - '0') < (a[i] - '0'))
        {
            b[i] = (b[i] - '0') + 10 + '0';
            subtraction = (b[i] - '0') - (a[i] - '0');
            carry = 1;
        }
        else
        {
            subtraction = (b[i] - '0') - (a[i] - '0');
            carry = 0;
        }
        result += (subtraction + '0');
    }
    for (int i = a.length(); i < b.length(); i++)
    {
        if (carry == 0)
            result += b[i];
        else
        {
            if (b[i] == '0')
            {
                subtraction += '9';
                result += subtraction;
                carry = 1;
            }
            else
            {
                subtraction = (b[i] - '0' - 1) + '0';
                if (i == b.length() - 1 && subtraction == '0')
                    break;
                result += subtraction;
                carry = 0;
            }
        }
    }
    reverse(result.begin(), result.end());
    cout << result << endl;
    return result;
}
void challenge()
{
    string total, n_more;
    cin >> total >> n_more;

    string sub = subtraction(total, n_more);
}
int main()
{

    for (int i = 1; i <= 10; i++)
        challenge();
}