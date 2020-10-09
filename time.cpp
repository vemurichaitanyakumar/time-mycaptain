#include<iostream>
using namespace std;
class time
{
public:
    int hours,minutes,seconds;
    calculatingtime();

};
time ::calculatingtime()
{
    cout<<"Hours?"<<endl;
    cin>>hours;
    cout<<"Minutes?"<<endl;
    cin>>minutes;
    cout<<"Seconds?"<<endl;
    cin>>seconds;
    int total=hours*60*60+minutes*60+seconds;
    cout<<"the time is="<<0<<hours<<":"<<0<<minutes<<":"<<0<<seconds<<endl;
    cout<<"Time in total seconds:"<<total;
}
main()
{
    time t1;
    t1.calculatingtime();

}

