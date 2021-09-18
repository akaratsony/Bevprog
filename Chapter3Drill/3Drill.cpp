#include "../std_lib_facilities.h"

int main(){
	//1
	cout <<"1. Please add your name";
	string first_name; 
	cin >> first_name;
	cout <<"Hello " + first_name + " \n" ;
	cout << "Enter the name of the person you want to write to";
	string tofirst_name;
	cin >> tofirst_name;


	cout <<"Dear " << tofirst_name;

	//2
	cout << " \n How are you? \n I miss you \n I want to meet with you in next friday \n";
	cout << " What did you do in the summer cup?\n Where were you? \n" ;
	//3
	cout << "Please give me a name of another friend";
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " << friend_name  <<" latley? \n";

//4
	char friend_sex = 0;
		cout << "Please add your friend sex \n  if your friend sex is Female enter f  \n if your friend sex is Male enter m \n";

	cin >> friend_sex;

	if(friend_sex ==  'm'){
		cout << " If you see " + friend_name + " please ask him to call me \n"  ;
	}
	else if( friend_sex == 'f' ){
		cout << " If you see  " + friend_name + " please ask her to call me \n"  ; }
	
	else{
				cout << " If you see   " + friend_name + "p lease ask  them  to call me \n"  ;


	}

	
//5
	cout << "Please add your age ";

	int age;
	cin>>age;

	if(age<=0 ||  age >=110){
	simple_error("you're kidding!");
}

else{
	cout<<"I hear you just had a birthday and you are " <<age<< " age years old.\n";
}

//6
if(age < 12 ){
	cout << "Next year you will be" << age+1 << " \n";

}
else if( age == 17){
 cout << "Next year you will be able to vote. \n";
}
else if (age > 70){
cout << "  hope you are enjoying retirement \n";
}



//7

cout << "Your sincerely  \n "<< first_name << "\n";

 
 return 0;
}