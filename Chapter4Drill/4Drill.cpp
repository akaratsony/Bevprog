#include "../std_lib_facilities.h"

int main(){
double a;
double b;
	
		
	while(cout << "Please give me a two number or |"
   && cin >> a >> b){
		double c;
		double d;
		cout << a << b << "\n";
		cout << " Your number is " << a << " " <<  b << "\n" ; 
		 
		 


		if(a < b) {
			cout << "The smaller number is the " << a << " \n" ; 
			cout << "The larger number is the " << b << " \n" ; 
			c = b;
			d = a;
		

	 }
	 else if (a > b) {
	 	cout << "The smaller number is the " << b <<  "\n";
	 	cout << "The larger number is the " << a <<  "\n";
	 	c = a;
	 	d = b;

	 

	 }



	 else if( a==b){
	 	cout << " The numbers are equal";

	 	



	 }


	  if( c-d < 1 ){
	  	cout << " The numbers are almost equal \n";
	 }





	}
 return 0;

}	