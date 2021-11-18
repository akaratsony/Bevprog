
     #include "../std_lib_facilities.h"

class Date {
private:
     int year, month, day;
public:
     Date(int y, int m,int d); // Konstruktor
     void add_day(int n); 
     int get_year() { return year;}
     int get_month() { return month;}
     int get_day() { return day;}

     void set_year(int y){
          if( y > 0){
                    year = y;
          } 
          else{
               error("Invalid year in set_year().");
          }
     }
     void set_month(int m){
          if( m> 0 && m <= 12){
                    month = m;
          } 
          else{
               error("Invalid year in set_month().");
          }
     }
     void set_day(int d){
          if( d > 0  && d <=31){
                    day = d;
          } 
          else{
               error("Invalid year in set_day().");
          }
     }


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

        Date today(1978,6,25);  
     cout << "today " << today.get_year() << "." << today.get_month() << "." << today.get_day() << ".\n";     
    Date tomorrow = today;  
     tomorrow.add_day(1);
     cout << "tomorrow " << tomorrow.get_year() << "." << tomorrow.get_month() << "." << tomorrow.get_day() << ".\n";     




    today.set_year(2222);// Ha - akkor nem valid a Date 
     today.set_month(11);// Ha nagyobb mint 12 nem valid a Date
     today.set_day(31);

    // cout << "Date " << today.get_year() << "." << today.get_month() << "." << today.get_day() << ".\n";     

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

