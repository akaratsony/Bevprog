	#include "../std_lib_facilities.h"

int main(){
	
cout << "Success!\n"; //1
cout << "Success!\n"; //2
cout << "Success!" << "\n"; //3 		  
	cout << "Success!"<< "\n" ; //4
	int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";//5
 v[5] = 7; if (v[5]!=7) cout << "Success!\n";//6
 if (v[5] < 8) cout << "Success!\n"; else cout << "Fail!\n"; //7
 
 return 0;



//8
bool c = true; 
if (c) 
	cout << "8. Success!\n"; 
else 
	cout << "Fail!\n";

//9

string s = "ape"; 
   string f  = "fool";
  bool e = true;
  if(f<s)
  	bool e = true;
  
  else
  	bool e = false;
  
   if (e) cout << "Success!\n"; 
   
//10
   string t = "ape"; 
  if (t!="fool") cout << " 10.Success!\n"; 
//11

  string d = "ape"; if (d=="ape") cout <<"Success! 11\n"; 


}



