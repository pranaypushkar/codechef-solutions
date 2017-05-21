/* All submissions for this problem are available.
 * Pooja would like to withdraw X $US from an ATM.
 * The cash machine will only accept the transaction if X is a multiple of 5,
 * and Pooja's account balance has enough cash to perform the withdrawal transaction
 * (including bank charges). For each successful withdrawal the bank charges 0.50 $US.
 * Calculate Pooja's account balance after an attempted transaction.
 *
 * Input
 * Positive integer 0 < X <= 2000 - the amount of cash which Pooja wishes to withdraw.
 *
 * Nonnegative number 0<= Y <= 2000 with two digits of precision - Pooja's initial account balance.
 *
 * Output
 * Output the account balance after the attempted transaction, given as a number with two digits of precision. If there is not enough money in the account to complete the transaction, output the current bank balance.
 *
 * Example - Successful Transaction
 * Input:
 * 30 120.00
 *
 * Output:
 * 89.50
 * Example - Incorrect Withdrawal Amount (not multiple of 5)
 * Input:
 * 42 120.00
 *
 * Output:
 * 120.00
 * Example - Insufficient Funds
 * Input:
 * 300 120.00
 *
 * Output:
 * 120.00 */



/*  Author   - PRANAY PUSHKAR
 *  Date     - 21 May 2017
 *  IDE      - Codeblocks
 *  Language - C++
 */

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
