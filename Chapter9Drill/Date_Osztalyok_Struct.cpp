
     #include "../std_lib_facilities.h"

struct Date {
     int y, m, d;

};
// Azért van erre szükségünk ,hogy ne tudjunk invalid dolgokat megadni, ez egy fajta ellenőrzés ,hogy helyessek e az adatok
// mivel & van ott ezért a tomorrowot is változtatja ha a datet változtatjuk
void init_date(Date& date,int y,int m, int d){
     if(y > 0) {
date.y = y; 
}
          else{     
               error("invalid year.");

          }
     

     if( m <= 12 && m > 0){
          date.m = m;
     }
     else{
          error("Invalid month");
     }

     if( d <= 31 && d > 0){
          date.d = d;
     }
     else{
          error("Invalid Day");
     }
}

void add_day(Date& date, int n) {
     date.d +=n;
     if(date.d > 31){
          date.m++;
          date.d -=31;
          if(date.m > 12){
               date.y++;
               date.m =-12;
          }
     }
}

int main()

     try{

     
     Date today;
     today.y = 2021; 
     today.m = 10;
     today.d = 23; 

     cout << "Date " << today.y << "." << today.m << "." << today.d << ".\n";     

     today.y = -3; // Ha - akkor nem valid a Date 
     today.m = 20; // Ha nagyobb mint 12 nem valid a Date
     today.d = 0; 

     cout << "Date " << today.y << "." << today.m << "." << today.d << ".\n";   


     Date tomorrow;
     init_date(tomorrow,2021,3,31);
          cout << "Tomoroww " << tomorrow.y << "." << tomorrow.m << "." << tomorrow.d << ".\n";   
         
     add_day(tomorrow,4);
               cout << "Tomoroww " << tomorrow.y << "." << tomorrow.m << "." << tomorrow.d << ".\n";   

          return 0;
}
catch(exception& e){
     cerr << e.what() << '\n';
     return 1;
}

