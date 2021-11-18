
     #include "../std_lib_facilities.h"

class Date {
private:
     int year, month, day;
public:
     class Invalid{};

     Date(int y, int m,int d): year(y),month(m),day(d) { if(!is_valid()) throw Invalid{};}  // Konstruktor a : után érték adás van hogyan adjunk értéket ha nem valid az érték aki ki fog dobni egy invalid kivételt
     void add_day(int n);
          bool is_valid(); 
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



bool Date::is_valid(){
     if(month < 1 || month > 12 || year < 0 || day <1 || day > 31 ) return false;
     else{
          return true;
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

  //Date invalid {2004,13,-5};
    //cout<<invalid<<"\n";

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

