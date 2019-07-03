#include <cstdlib>
#include <iostream>
#include "pe10.h"
/*
In Chapter 10, the class ClockType was designed to implement
the time of day in a program, Certain applications, in addition to hours,
minutes, and seconds, might require you to store the time zone.

Derive the class ExtClockType from the class ClockType by adding a member
variable to store the time zone. Add the necessary member functions and
constructors to make the class functional. Also, write the definitions of the
member functions and the constructors. Finally, write a
test program to test your class
*/

using namespace std;

class ext_clockType: public ClockType
{
public:
	
	ext_clockType();
	ext_clockType(int, int, int);
	ext_clockType(int, int, int, string);

	void setZone(string);
	string getZone();

private:
	string z;

};

ext_clockType::ext_clockType()
{
	setHours(0);
	setMins(0);
	setSecs(0);	
	setZone("CST");
}

ext_clockType::ext_clockType(int hours, int minutes, int seconds)
{
	setHours(hours);
	setMins(minutes);
	setSecs(seconds);
	setZone("CST");
}
ext_clockType::ext_clockType(int hours, int minutes, int seconds, string zone)
{
	setHours(hours);
	setMins(minutes);
	setSecs(seconds);
	setZone(zone);
}

string ext_clockType::getZone()
{
	return z;	
}

void ext_clockType : setZone(string zone) 
{
	z = zone;
}

int main() {
	ext_clockType myClock;
	ext_clockType *clock1 = new ext_clockType();
	ext_clockType *clock2 = new ext_clockType();
	int hours;
	int minutes;
	int seconds;
	int hours2, minutes2, seconds2;


	cout << "please enter the hours elapsed" << endl;
	cin >> hours;
	cout << "please enter the minutes elapsed" << endl;
	cin >> minutes;
	cout << "please enter the seconds elapsed" << endl;
	cin >> seconds;
	cout << endl;


	myClock.setTime(hours, minutes, seconds);
	myClock.printTime();

	cout << "\ntotal time in seconds: ";

	hours = hours * 3600;
	minutes = minutes * 60;
	int totalSeconds = hours + minutes + seconds;
	cout << totalSeconds << endl;

	cout << "seconds remaining in the day: ";
	int secondsLeft = 86400 - totalSeconds;
	cout << secondsLeft << endl;

	cout << "please enter the time of the first clock in hours, minutes and seconds" << endl;
	cin >> hours >> minutes >> seconds;
	cout << endl;

	clock1->setTime(hours, minutes, seconds);
	clock1->printTime();

	cout << "\nplease enter the time of the second clock in hours, minutes and seconds" << endl;
	cin >> hours2 >> minutes2 >> seconds2;
	cout << endl;


	clock2->setTime(hours2, minutes2, seconds2);
	clock2->printTime();

	cout << "\nthe difference in time is: ";

	int time1 = clock1->findTimeInSeconds();
	int time2 = clock2->findTimeInSeconds();

	int timeDifference = abs(time2 - time1);
	int diffHours = timeDifference / 3600;
	int remainingSeconds = timeDifference % 3600;
	int diffMinutes = remainingSeconds / 60;
	remainingSeconds = remainingSeconds % 60;

	ClockType *finalClock = new ClockType();
	finalClock->setTime(diffHours, diffMinutes, remainingSeconds);
	finalClock->printTime();

	int stay;

	cin >> stay;


	cin.get();

	return 0;


}