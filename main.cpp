#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x;
    float y;

    cin >> x >> y;

    if(0 < x && x <= 2000)
    {
        if(0 <= y && y <= 2000)
        {
            if(x > y ) //Test case passed
            {
                cout << fixed << setprecision(2) << y;
            }
            else if(x%5 == 0 && y > (x+.5)) //Test case passed
            {
                cout << fixed << setprecision(2) << (float)((y-x)-(.5));
            }
            else if (x%5 != 0)
            {
                cout << fixed << setprecision(2) << y; //Test case passed
            }
            else
            {
                cout << fixed << setprecision(2) << y; //Test case passed
            }

        }
    }
    return 0;
}
