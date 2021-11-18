
     #include "../std_lib_facilities.h"


const vector<string> months = 
{
     "January",
     "February",
     "March",
     "April",
     "May",
     "June",
     "July",
     "August",
     "September",
     "October",
     "November",
     "December"
};

enum class Month {
     jan, feb, mar, apr, may, june, july, aug, sept, oct, nov, dec
};
//++ operator felul definialasa, 

Month operator++(Month& m)
{
          // Ha m ==Month.Dec-el akk m = Januárral  : különben az m-et növeljük eggyel
     m = (m==Month::dec) ? Month::jan : Month(int(m)+1);
     return m;
}
// meg kell csinálni a ki irást mert a < jelt nem értelmezi jelen esetben

ostream& operator<<(ostream& os, Month m)
{
     return os << months[int(m)]; 
}





class Date {
private:
     int year;
     Month month;
      int day;
public:
     class Invalid{};

     Date(int y, Month m,int d): year(y),month(m),day(d) { if(!is_valid()) throw Invalid{};}  // Konstruktor a : után érték adás van hogyan adjunk értéket ha nem valid az érték aki ki fog dobni egy invalid kivételt
     void add_day(int n);
          bool is_valid(); 
     int get_year() { return year;}
     Month get_month() { return month;}
     int get_day() { return day;}


     void set_year(int y){
          if( y > 0){
                    year = y;
          } 
          else{
               error("Invalid year in set_year().");
          }
     }
     void set_month(Month m){
                    month = m;
                   
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



bool Date::is_valid(){
     if(year < 0 || day <1 || day > 31 ) return false;
     else{
          return true;
     }
}

void Date::add_day( int n) {
     day +=n;
     if(day > 31){
          ++month;
          day -=31;
          if(month == Month::jan){
               year++;
          }
     }
}








int main()

     try{

          Date today(1976,Month::june,25);  
     cout << "today " << today.get_year() << "." << today.get_month() << "." << today.get_day() << ".\n";     
      Date tomorrow=today;
     tomorrow.add_day(1);
     cout << "tomorrow " << tomorrow.get_year() << "." << tomorrow.get_month() << "." << tomorrow.get_day() << ".\n";     



          return 0;
}
catch( Date::Invalid){
     cerr<< "Exception : Invalid date" << '\n';
     return 1;
}
catch(exception& e){
     cerr << e.what() << '\n';
     return 2;
}

