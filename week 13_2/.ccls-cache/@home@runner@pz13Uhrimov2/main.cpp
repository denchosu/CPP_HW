#include <iostream>

using namespace std;

struct Time {
    int hours;
    int minutes;
};

Time calculateEventDuration(Time startTime, Time endTime) {
    Time duration;
    int totalStartMinutes = startTime.hours * 60 + startTime.minutes;
    int totalEndMinutes = endTime.hours * 60 + endTime.minutes;
    int totalDuration = (totalEndMinutes - totalStartMinutes + 24 * 60) % (24 * 60);
    duration.hours = totalDuration / 60;
    duration.minutes = totalDuration % 60;
    return duration;
}

int main() {
    Time startTime, endTime, eventDuration;
    cout << "Enter the start time (hours): ";
    cin >> startTime.hours;
  
    cout << "Enter the start time (minutes): ";
    cin >> startTime.minutes;
  
    cout << "Enter the end time (hours): ";
    cin >> endTime.hours;
  
    cout << "Enter the end time (minutes): ";
    cin >> endTime.minutes;
  
    eventDuration = calculateEventDuration(startTime, endTime);
    cout << "Event duration: " << eventDuration.hours << " hours and " << eventDuration.minutes << " minutes" << endl;
    return 0;
}
