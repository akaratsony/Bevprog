#include "../std_lib_facilities.h"

struct Point 
{
	int x;
	int y;
};

vector<Point> Bekeres(){

int x;
	int y;

	vector<Point> original_points;
	while(original_points.size ()< 7){
		cout << "Please enter seven X and Y value:" << '\n';
	string ifname;
	if(cin >> x >> y) {
	original_points.push_back(Point{x,y});
}
	else{
		error("You can only add number!");
	}
}


 	return original_points; 
}


bool Outputs (vector<Point> original__points) {
int x;
	int y;

	for(auto elem: original__points){
		cout  << " { " << elem.x << "," << elem.y << " } " << "\n";
	}


	string ofname = "mydata.txt";
	ofstream ofile {ofname};

	if(!ofile) 
		{ 
			error("Cant open ofile" , ofname);
				return false;

		}
		else
			{
				for(const auto& point : original__points){
					ofile << " { " << point.x << " , " << point.y << " }" << '\n';
				}

			}

	ofile.close();
					return true;

}




	
vector<Point> Read(){
	int x;
	int y;
	
	string ifname = "mydata.txt";


	ifstream ifile {ifname};
				cout << " asd " << '\n';
	char a;
	char b;
	char c;
		vector<Point> processed_points;

	if(!ifile){

		error("Cant open ifile",ifname);
	}
	else{

		while(ifile >> a>> x >> b >> y >> c ){
			processed_points.push_back(Point{x,y});

		}
	}
	return processed_points;
}

	

	void Process(vector<Point> processed_points){

	for(const auto& procespoint : processed_points){
		cout << " Processed : { " << procespoint.x << " , " << procespoint.y << " } " << '\n';
	}

	}
	

int main()

try{
		if(Outputs(Bekeres()) == true ){
			Process(Read());
		}
		else{
			cout<< "Something went wrong";
		}



return 0;
}




catch(exception& e)
{
    cerr <<e.what()<<"\n";
    return 1;
}
catch (...) {
    cerr << "Something terrible happened!\n";
    return 2;
}