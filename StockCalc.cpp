#include <iostream>
#include <math.h>
using namespace std;

//normal number
double shares, pricePshare;
//percents
double comsFee, avgAnnualReturn;
//no input
double totalPaidNoComs, totalComsFee, totalPaid, totalTenYears;

int main()
{
    cout << "How many shares have been bought: \n";
    cin >> shares;
    cout << "Price per share: \n";
    cin >> pricePshare;
    cout << "Commission fee for each transaction(In percentage): \n";
    cin >> comsFee;
    cout << "Average annual return(In percentage): \n";
    cin >> avgAnnualReturn;

    totalPaidNoComs = shares*pricePshare;
    cout << "The amount you paid for the stock alone (without the commission): " << totalPaidNoComs << "\n";
    totalComsFee = (comsFee/100) * totalPaidNoComs;
    cout << "The amount of the commision fee: " << totalComsFee << "\n";
    totalPaid = totalComsFee + totalPaidNoComs;
    cout << "Total amount you paid(Coms fee incl): " << totalComsFee + totalPaidNoComs << "\n";
    totalTenYears = pricePshare * pow(1 + avgAnnualReturn/100, 10);
    cout << "After 10 years, your shares will worth: " << totalTenYears << " per shares\n";

    return 0;
}