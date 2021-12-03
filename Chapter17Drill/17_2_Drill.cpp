
#include "..std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)
{
    cout << "\n";
    for (int i = 0; i < n; i++)
        cout << i << ".value: " << a[i] << "\t Address:" << &a[i] << "\n";
}

int main()
{
    int n = 7;
    int* p1 = &n;
    
    cout << "n: " << n << " p1: " << p1 << "\n";

    int seven[7]{1, 2, 4, 8, 16, 32, 64};
    int* p2 = seven;

    cout << "p2: " << p2 << "\n";
    print_array(cout, p2, 7);

    int* p3 = p2;
    p2 = p1;
    p2 = p3;

    cout << "p1: " << p1 << "\t" << *p1 << "\n";
    print_array(cout, p2, 7);
    
    int ten[10]{1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    p1 = ten;

    int ten2[10]{10,20,40,80,160,320,640,1280,2560,5120};
    p2 = ten2;

    for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];
    
    vector<int> v_ten{1,2,4,8,16,32,64,128,256,512};
	p1 = &v_ten[0];

    vector<int> v_ten2{10,20,40,80,160,320,640,1280,2560,5120};
	p2 = &v_ten2[0];
	for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];

    return 0;
}