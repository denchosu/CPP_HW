#include <iostream>

using namespace std;

struct Time {
  int hours;
  int minutes;
};

Time addMinutesToTime(Time currentTime, int additionalMinutes) {
  currentTime.minutes += additionalMinutes;
  currentTime.hours += currentTime.minutes / 60;
  currentTime.minutes %= 60;
  currentTime.hours %= 24;
  return currentTime;
}

int main() {
  Time startTime;

  cout << "Enter the starting hours: ";
  cin >> startTime.hours;

  cout << "Enter the starting minutes: ";
  cin >> startTime.minutes;

  int additionalMinutes;
  cout << "Enter the additional minutes: ";
  cin >> additionalMinutes;

  Time resultingTime = addMinutesToTime(startTime, additionalMinutes);

  cout << "Resulting time: ";
  if (resultingTime.hours < 10) {
    cout << "0";
  }
  cout << resultingTime.hours << ":";

  if (resultingTime.minutes < 10) {
    cout << "0";
  }
  cout << resultingTime.minutes << endl;

  return 0;
}
