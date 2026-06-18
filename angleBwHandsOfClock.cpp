//Given two numbers, hour and minutes, return the smaller angle (in degrees) formed between the hour and the minute hand.
//Answers within 10-5 of the actual value will be accepted as correct.
//Input: hour = 12, minutes = 30 --> Output: 165

#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    double angleClock(int hour, int minutes) {
        double x = hour + minutes / 60.0;
        double diff = fmod(11.0 * x, 12.0);
        return min(diff, 12.0 - diff) * 30.0;
    }
};

int main (){
    int hour = 12;
    int minutes = 30;

    Solution obj;
    double res = obj.angleClock(hour, minutes);
    cout << "result : " << res << endl;

    return 0;
}