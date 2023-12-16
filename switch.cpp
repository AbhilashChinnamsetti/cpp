#include<iostream>
using namespace std;
int main()
{
    int day;
    cin >>day;
    switch(day)
    {
        case 1:
        cout<<"monday";
        break;
        case 2:
        cout<<"tue";
        break;
        case 3:
        cout<<"wed";
        break;
        case 4:
        cout<<"thurs";
        break;
        default:
        cout<<"no day";
    }
    return 0;
}
