#include "../std_lib_facilities.h"

int main(){
double numb;
double smallest =  99999;
double largest  = 0;
string unit ="";
constexpr double inch_to_cm = 2.54;
constexpr double m_to_cm = 100;
constexpr double ft_to_inch = 12;
double converted;
bool  success = true;
double  valuesum;
vector<double> values;
	
		
	while(cout << "Please give me a two number  and unit if you want to leave: -> |"
   && cin >> numb >> unit) {
	


		if(unit == "cm"){
			converted = numb / m_to_cm;
			values.push_back(converted);
		}
		 else if(unit == "in"){
		 	converted = numb * inch_to_cm / m_to_cm;
		 				values.push_back(converted);

		}
		else if(unit == "ft"){
			converted = numb * 12 *inch_to_cm / m_to_cm;
						values.push_back(converted);

		}
		else if ( unit == "m"){
			converted = numb;
						values.push_back(converted);


		}
		else {
			success = false;
		}

		if(success){
				if(smallest > converted ){
			cout << "  the  smallest so far is the " << converted << " \n"   ;
			smallest = converted;
		}
		 if (largest < converted){
			cout << " the  largest  so far is the " << converted<< "\n " ;
			largest  = converted;
		}


		}
		else{
			cout << " Unsupported unit \n";
		}
		success = true;

	}

		cout << "The numbers in the vector \n" ;
		int count =0;
		sort(values);
		for( double value : values ){
			cout << value << " \n";
			valuesum+=value;

			++count;
		}

		cout<<"Smallest number: "<< smallest <<" m\n";
	cout<<"Largest number: "<< largest <<" m\n";
	cout<<"Number of values: "<< count <<"\n";
				cout<<"Sum of values: "<< valuesum <<" \n";


 return 0;

}	