// This program converts seconds to minutes and seconds.
// It uses integer division and the modulus operator.
#include <iostream>
using namespace std;

int main()
{
    int totalSeconds = 500000, // Number of seconds to be converted
        minutes,               // Number of minutes in totalSeconds
        seconds,               // Number of seconds remaining
        days,                  // Number of days remaining
        hours;                 // Number of hours remianing
                               // Calculate the number of days

    int updatedSeconds;

    days = totalSeconds / (24 * 3600);

    // Calculate the number of minutes
    updatedSeconds = totalSeconds % (24 * 3600);
    hours = updatedSeconds / 3600;

    updatedSeconds = totalSeconds % 3600;
    minutes = updatedSeconds / 60;

    // Calculate the remaining seconds
    seconds = totalSeconds % 60;

    // Calculate the number of hours

    // Display the results

    cout << totalSeconds << " seconds is equivalent to ";
    cout << days << " days " << hours << " hours " << minutes << " minutes and " << seconds << " seconds. \n";

    return 0;
}
