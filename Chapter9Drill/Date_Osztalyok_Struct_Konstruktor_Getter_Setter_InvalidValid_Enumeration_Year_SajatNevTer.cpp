
     #include "../std_lib_facilities.h"
namespace UDChrono {

     //Saját névtér
class Year{
     static constexpr int min = 1800;
     static constexpr int max = 2200;
     public:
          class Invalid{};
          Year(int x): y{x} {if( x < min || x > max) throw Invalid{}; }
          int year() {return y;}
          void increment() { y++;}
     private:
          int y;
};
Year operator++(Year& year){
      year.increment();
       return year;

}
ostream& operator<<(ostream& os, Year year)
{
     return os << year.year();
}

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
     Year year;
     Month month;
      int day;
public:
     class Invalid{};
     Date():year(Year{2001}), month(Month::jan), day(1) {} // Alapértelmezett konstruktor ez lesz az alap beállítása
     Date(Year y, Month m,int d): year(y),month(m),day(d) { if(!is_valid()) throw Invalid{};}  // Konstruktor a : után érték adás van hogyan adjunk értéket ha nem valid az érték aki ki fog dobni egy invalid kivételt
     void add_day(int n);
          bool is_valid(); 
     Year get_year() const { return year;} // A constal jelezzük azt ,hogy nem fogják modositani az objektumunk állapotát!
     Month get_month() const  { return month;}
     int get_day() const { return day;}


     void set_year(Year y){
         year = y;
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
     if(day <1 || day > 31 ) return false;
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
               ++year;
          }
     }
}
// end name space
ostream& operator<<(ostream&os,const UDChrono::Date& d){
     return os << d.get_year() << ". " << d.get_month() << ' ' << d.get_day() << "." <
};

int main()

     try{


          UDChrono::Date today(UDChrono::Year{2021},UDChrono::Month::dec,23);  
          vector<UDChrono::Date> dates = {
               UDChrono::Date{UDChrono::Year{2041},UDChrono::Month::jan,10},
           UDChrono::Date{UDChrono::Year{2021},UDChrono::Month::feb,10},
               UDChrono::Date{UDChrono::Year{2011},UDChrono::Month::jan,10},
               UDChrono::Date{UDChrono::Year{2031},UDChrono::Month::jan,10},

          }
 /*    cout << "Date " << today.get_year() << "." << today.get_month() << "." << today.get_day() << ".\n";     
     today.add_day(4);
     cout << "Date " << today.get_year() << "." << today.get_month() << "." << today.get_day() << ".\n";     


     cout << "Date " << today.get_year() << "." << today.get_month() << "." << today.get_day() << ".\n";     
                    

          int a = 7;
          int b = a;
          UDChrono::Date other_day(today); 
     cout << "Other Date " << other_day.get_year() << "." << other_day.get_month() << "." << other_day.get_day() << ".\n";     
          // Date objektznij vektorba rendezése
            vector<UDChrono::Date> dates(10); //  nem adunk meg értéket csak nagyságot ,magába nem fog menni mert nincs alapértelmezett konstruktorunk !  Adni kell neki valami alap értéket ahhoz hogy müködjön
          for( const auto& date : dates){ // alap értelmezett értékek ki irása [ Mivel jeleztük fent a const getnél hogy nem fogják változtani az értékét igy elé irhatjuk a const-ot]
     cout << "Date " << date.get_year() << "." << date.get_month() << "." << date.get_day() << ".\n";     
          }
*/
          return 0;
}
catch( UDChrono::Year::Invalid){
     cerr<< "Exception : Invalid Year" << '\n';
     return 1;
}
catch( UDChrono::Date::Invalid){
     cerr<< "Exception : Invalid date" << '\n';
     return 2;
}
catch(exception& e){
     cerr << e.what() << '\n';
     return 3;
}
catch(...){
     cerr << "some error" <<"\n";
}
