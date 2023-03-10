#include "client.h";
using namespace std;

int main()
{


int year;   int day;
string month[12]={"January","February","March","April","may","June","July","August","September","October","November","December"};
calendar object(month);


cout<<"What year do you want a calendar for?"<<endl;
cin>>year;
object.saveYear(year);
cout<<"What day of the week does January 1 fall on?"<<endl;
cout<<"ENTER 0 for Sunday, 1 for Monday, 2 for Tuesday, 3 for Wednesday, 4 for Thursday, 5 for Friday, 6 for Saturday"<<endl;

cin>>day;

int i,p=1;
cout<<setw(11)<<year<<endl;
for (i=0; i<12; i++){
object.displayCalendar(month[i]);

object.numbers(p,day,i);

cout<<endl<<endl;}











    return 0;
}
