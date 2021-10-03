	#include "../std_lib_facilities.h"

int main(){
	

   
   //10
   string t = "ape"; 
  if (t!="fool") cout << " 10.Success!\n"; 
//11

  string d = "ape"; if (d=="ape") cout <<"Success! 11\n"; 
//12

  string s = "ape"; if (s!="fool") cout << "Success! 12\n";
//13

vector<char> v(5);
 for (int i=0; i<v.size(); ++i) ; 
 	cout << "Success! 13\n";
//14

vector<char> vect(5); 
for (int i=0; i<=vect.size(); ++i) ; 
	cout << "Success! 14\n";
//15
string e = "Success!15 \n "; 
for (int i=0; i<1; ++i) {;
	cout << e;
}
//16
if (true)
  cout << "Success! 16 \n"; 

else 
	cout << "Fail!\n";



//17

int x = 2000; 
int c = x; 
if (c==2000)
 cout << "Success!17 \n"; 


//18
string l = "Success! 18\n"; 
for (int i=0; i<1; ++i) 
	cout << l;

//19
vector<int>  vas(5); 
for (int i=0; i<=vas.size(); ++i) ;
 cout << "Success 1i!\n";

//20
int i=0; 
int j = 9; 
while (i<10) 
{	
	++i;
	if (j<i) cout << "Success!20\n";
	//21. 
int y = 2; 
double z = 4.5/(y-1); 
if (z==2*y+0.5) 
	cout << "21. Success!\n";

//22. 
string strin = "22. Success!\n"; 
for (int i=0; i<13; ++i) 
	cout << strin[i];
//23.
int szam=0;
int szam2 = 5; 
while (szam<10) ++szam; 
if (szam2<szam) 
	cout << "23. Success!\n";

//24
double x = 4; 
double dou = 5/(x-2); 
if (dou==2*x-5.5) 
	cout << "24. Success!\n";

//25
string valami;
cout<<"write Success!:";
cin>>valami;
cout<<"25. "<<valami<<"\n";

return 0;
}
catch (exception& e) {
cerr << "error: " << e.what() << '\n';
return 1;
}
catch (...) {
cerr << "Oops: unknown exception!\n";
return 2;

}
