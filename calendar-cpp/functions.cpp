#include "client.h";




calendar::calendar(string month[]){

for (int i=0; i<12; i++)

monthNames[i]=month[i];

}


void calendar::displayCalendar(string x){                   //arxiko typoma hmerologioy

      cout<<setw(15)<<x<<endl;

    cout<<setw(3)<<"S"<<setw(3)<<"M"<<setw(3)<<"T";

  cout<<setw(3)<<"W"<<setw(3)<<"T"<<setw(3)<<"F"<<setw(3)<<"S"<<endl;
}


void calendar::numbers(int x, int &y,int z){
int i,w,day; day=y;

DaysOfMonth(w,z);



    if(y==0){
     cout<<setw(3)<<x;
     firstRow(6,x,day);
        otherRows(x,w,day);
        y=day+1;
                      }

    else
        if(y==1){
                  cout<<setw(6)<<x;
                  firstRow(5,x,day);
                  otherRows(x,w,day);
                  y=day+1;
                    }

        else
            if(y==2){cout<<setw(9)<<x;
                     firstRow(4,x,day);
                     otherRows(x,w,day);
                     y=day+1;

                                      }

            else

                if(y==3){
                        cout<<setw(12)<<x;
                        firstRow(3,x,day);
                        otherRows(x,w,day);
                        y=day+1;


                        }
                else

                    if(y==4){
                            cout<<setw(15)<<x;
                               firstRow(2,x,day);
                               otherRows(x,w,day);
                               y=day+1;


                                 }
                    else

                        if(y==5){
                                cout<<setw(18)<<x;
                                firstRow(1,x,day);
                                 otherRows(x,w,day);
                                 y=day+1;


                                }
                        else

                            if(y==6){
                                  cout<<setw(21)<<x;
                                  otherRows(x,w,day);
                               y=day+1;}










}



void calendar::firstRow(int row,int &x, int &day){          //typomeni thn proti grammi tou hmerologiou
int i;
for(i=0; i<row; i++){
    x++;  day++;

cout<<setw(3)<<x;}



}




void calendar::saveYear(int year){   // apothikeuei ton xrono se private metablith

yearPrivate=year;

}



void calendar::DaysOfMonth(int &w, int z){


if(z==0 || z==2 || z==4 || z==6 || z==7 || z==9 ||z==11)  // mines me 31 meres
    w=31;
else
    if(z==8 || z==3 || z==5 ||z==10)  //mines me 30 meres
    w=30;
    else
        if(z==1 && yearPrivate%4==0) // an einai true simeni exoume disekto mina ara o flevaris tha exei 29 meres
           w=29;
        else
            w=28;   // o flevaris tha exei 28 meres



}


void calendar::otherRows(int x, int w, int &day){    // typoni oles tis ypolipes merew
int i;


for(i=x+1; i<=w; i++){   // to i arxizei apo kyriaki ths deuterhs grammis tou calendar mexri na ftasei ths meres tou mina w

if(day%6==0 && day!=0){
    cout<<endl;
     day=-1;}

cout<<setw(3)<<i;    // typoma arithmoy hmerologiou

    day++;




}

if(day==6)
    day=-1;
}






