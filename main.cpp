// Xavier Wyatt J00986564
// program 5-4 page 278

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const string SENTINEL = "-1";

int main()
{
    string name;
    int numOfVolunteers;
    int numOfBoxesSold;
    int totalNumOfBoxesSold;
    double costOfOneBox;

    cout << fixed << showpoint << setprecision(2);

    cout << "Line 25: Enter each volunteer's name and "
         << "the number of boxes " << endl
         << "          sold by each volunteer, ending "
         << "with -1: " << endl;

    totalNumOfBoxesSold = 0;
    numOfVolunteers = 0;

    cin >> name;

    while (name != SENTINEL)
    {
        cin >> numOfBoxesSold;
        totalNumOfBoxesSold = totalNumOfBoxesSold
                              + numOfBoxesSold;
        numOfVolunteers++;
        cin >> name;
    }
    cout << endl;
    cout << "Line 41: The total number of boxes sold; "
         << totalNumOfBoxesSold << endl;
    cout << "Line 43: Enter the cost of one box: ";
    cin >> costOfOneBox;
    cout << endl;
    cout << "Line 46: The total money made by selling "
        << "cookies: $"
        << totalNumOfBoxesSold * costOfOneBox << endl;
    if (numOfVolunteers != 0)
        cout << "Line 50: The average number of "
             << "boxes sold by each volunteer: "
             << totalNumOfBoxesSold / numOfVolunteers
             << endl;
    else
        cout << "Line 55: No input." << endl;

    return 0;
}
