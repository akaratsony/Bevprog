   #include "../std_lib_facilities.h"
 void swap_v(int a, int b) {
 int temp; temp = a, a=b; b=temp; 
 }
 void swap_r(int& a , int& b) {
 int temp; temp = a, a=b; b=temp; 
 }
 
//swap_cr(const int& a, const int& b){
 // int temp; temp = a, a=b; b=temp; 
 // } 
 // Ez azért nem fog müködni mivel változtani szeretnénk a konstans változoink értékét ezt viszont nem lehet mivel a konstansok értékeik nem változtathatóak

int main(){
   
int x = 7;
int y =9;

swap_r(x,y);      // replace ? by v, r, or cr
// Itt a helyek sikeresen felcserélődhetnek hiszen a referencia változonk hivatkozik az X,Y változokra 
// tehát ha a referencia értéke változik annak a változónak is változik az értéke amire hivatkozik.
cout<<"x: "<<x<<"\n";
   cout<<"y: "<<y<<"\n";


 // swap_v(x,y);
//Itt nem fognak felcserélődni a helyek mivel az x és y változok nem referenciák így csak lokálisan változik az értékük. Csak akkor müködne ha returnolnánk valahogyan a két értéket ujra.

// swap_cr(x,y);
// Nem müköik hiszen konstans változót nem modosíthatunk


 // swap_r(7,9); 
// itt nem fog felcserélődni hiszen nincs definiálva a változó amire hivatkozhatna a referencia a swap_r függvényben csak egy értéket adunk át.
   //cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’ 
swap_v(7,9);
// Ez már fel fog cserélődni 


 // swap_cr(7,9);
// nem fog müködni konstans változót nem modosíthatunk 



const int cx = 7;

const int cy = 9;

swap_v(cx,cy);
// nem fog müködni hiszen a konstans változót nem lehet felül definiálni
   cout<<"cx: "<<cx<<"\n";
   cout<<"cy: "<<cy<<"\n";
//swap_r(cx,cy); 
   //error: binding reference of type ‘int&’ to ‘const int’ discards qualifiers

 // swap_cr(cx,cy);
 // nem fog müködni


swap_v(7.7,9.9);
// felfog cserélődni csak mivel int tipusu változókat tud kezelni a függvény így lefogja várni a tizedes jegyet az eredmény 9,7 lesz. 

// swap_r(7.7,9.9);
 // nem fog müködni ugyanis nincs definiálva a változó amit át szeretnénk adni így nemtud mire hivatkozni a referencia
   //cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’ 

double dx = 7.7;

double dy = 9.9;

//swap_r(dx,dy);
// nem fog müködni mert double tipusu a változó amire szeretne hivatkozni az int tipusu referenciánk 
   //cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’ 

swap_v(dx,dy);
 // fel fog cserélődni ugyan ugy csak lefogja csapni a tizedes vonal utani számot hiszen int-et vár viszont double-t adunk át neki 
 cout<<"dx: "<<dx<<"\n";
   cout<<"dy: "<<dy<<"\n"; 


 

 }



