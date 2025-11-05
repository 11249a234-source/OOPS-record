#include<iostream>
using namespace std;
class Time{
    private:
    int hours, minutes, seconds;
    public:
    void input(int h, int m, int s){
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display(){
        cout << "Time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    }
    void add(Time t1, Time t2){
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes + seconds / 60;
        hours = t1.hours + t2.hours + minutes / 60;
        seconds %= 60;
        minutes %= 60;
    }
};
int main(){
    Time t1, t2, t3;
    t1.input(2, 45, 50);
    t2.input(1, 20, 30);
    cout << "First time: ";
    t1.display();
    cout << "Second time: ";
    t2.display();
    t3.add(t1, t2);
    cout << "Sum of times: ";
    t3.display();
    return 0;
}