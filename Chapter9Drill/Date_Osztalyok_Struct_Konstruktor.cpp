
     #include "../std_lib_facilities.h"

struct Date {
     int year, month, day;
     Date(int y, int m,int d); // Konstruktor
     void add_day(int n); 
};
// Azért van erre szükségünk ,hogy ne tudjunk invalid dolgokat megadni, ez egy fajta ellenőrzés ,hogy helyessek e az adatok
// mivel & van ott ezért a tomorrowot is változtatja ha a datet változtatjuk


Date::Date(int y,int m, int d){
     if(y > 0) {
          year = y; 
          }

          else{     
               error("invalid year.");

          }
     

     if( m <= 12 && m > 0){
          month = m;
     }
     else{
          error("Invalid month");
     }

     if( d <= 31 && d > 0){
          day = d;
     }
     else{
          error("Invalid Day");
     }
}

void Date::add_day( int n) {
     day +=n;
     if(day > 31){
          month++;
          day -=31;
          if(month > 12){
               year++;
               month =-12;
          }
     }
}

int main()

     try{

          Date today(2021,10,23);  
     cout << "Date " << today.year << "." << today.month << "." << today.day << ".\n";     
     today.add_day(4);
          cout << "Date " << today.year << "." << today.month << "." << today.day << ".\n";     

     today.year = -3; // Ha - akkor nem valid a Date 
     today.month = 20; // Ha nagyobb mint 12 nem valid a Date
     today.day = 0; 

     cout << "Date " << today.year << "." << today.month << "." << today.day << ".\n";   

/*
     Date tomorrow;
     init_date(tomorrow,2021,3,31);
          cout << "Tomoroww " << tomorrow.y << "." << tomorrow.m << "." << tomorrow.d << ".\n";   
         
     add_day(tomorrow,4);
               cout << "Tomoroww " << tomorrow.y << "." << tomorrow.m << "." << tomorrow.d << ".\n";   
*/
          return 0;
}
catch(exception& e){
     cerr << e.what() << '\n';
     return 1;
}

