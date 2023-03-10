#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


class calendar {

public:
        calendar (string []);

      void displayCalendar(string );

      void numbers(int,int &,int);

      void firstRow (int,int&, int &);


      void otherRows(int ,int, int &);

      void saveYear(int);

      void DaysOfMonth (int &,int);

private:

string monthNames[12];
int yearPrivate;
};
