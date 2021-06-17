#include <iostream>
#include <ctime>

using namespace std;

int xy, b1, b2, b3, b4, b5, b6, b7, b8;
int topleft=0,
bottomleft=0, topright=0, bottomright=0, top=0, bottom=0, leftt=0, rightt=0;
string massiv="0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
string massiv2="****************************************************************************************************";

int rng(){int chislo = rand()%99;
massiv[chislo]++;
   return chislo;};
   //Random Number Generator

   int summa(int a){
       topleft=0;
bottomleft=0; topright=0; bottomright=0; top=0; bottom=0; leftt=0; rightt=0;
   for (int t1=1;a-11*t1>=0;t1++){
        topleft+=massiv[a-11*t1];
        topleft-=48;
        if ((a-11*t1)%10==0){break;};};
        for (int t2=1;a+9*t2<=99;t2++){
        bottomleft+= massiv[a+9*t2];
        bottomleft-=48;
        if ((a+9*t2)%10==9){break;};};
        for (int t3=1;a-9*t3>=0;t3++){
        topright+= massiv[a-9*t3];
        topright-=48;
        if ((a-9*t3)%10==9){break;};};
        for (int t4=1;a+11*t4<=99;t4++){
        bottomright+= massiv[a+11*t4];
        bottomright-=48;
        if ((a+11*t4)%10==0){break;};};
        for (int t5=1;a-10*t5>=0;t5++){
        top+= massiv[a-10*t5];
        top-=48;};
        for (int t6=1;a+10*t6<=99;t6++){
        bottom+= massiv[a+10*t6];
        bottom-=48;};
        for (int t7=1;a-t7>=0;t7++){
        if ((a-t7)%10==9){break;};
        leftt+= massiv[a-t7];
        leftt-=48;
        if ((a-t7)%10==0){break;};};
        for (int t8=1;a+t8<=99;t8++){
        if ((a+t8)%10==0){break;};
        rightt+= massiv[a+t8];
        rightt-=48;
        if ((a+t8)%10==9){break;};};
cout<<"hint: "<<topleft<<" on the topleft, "<<bottomleft<<" on the bottomleft, "<<topright<<" on the topright, "<<bottomright<<" on the bottomright, "<<top<<" at the top, "<<bottom<<" at the bottom, "<<leftt<<" on the left, "<<rightt<<" on the right."<<endl;
return massiv[a]+topleft+bottomleft+topright+bottomright+top+bottom+leftt+rightt-48;
   };
   //summa znachenii pealinga

int pole (){
   cout<<"   0 1 2 3 4 5 6 7 8 9"<<endl;
   cout<<"   _ _ _ _ _ _ _ _ _ _"<<endl;
for(int ii=0;ii<10;ii++)
{
cout<<ii<<'|';
for(int jj=0;jj<10;jj++){
cout<<" "<<massiv2[ii*10+jj];}
cout<<""<<endl;
};
return 0;
};
//prorisovka polya

int ochistka(int b){
if (xy==b){
        massiv[xy]='0';
        massiv2[xy]='+';};
return 0;};
//izmenenie znachenii naidennix lis

   int massochistka(){
       ochistka(b1);
       ochistka(b2);
       ochistka(b3);
       ochistka(b4);
       ochistka(b5);
       ochistka(b6);
       ochistka(b7);
       ochistka(b8);
       return 0;};


int main()
{
srand(time(NULL));
b1=rng();
b2=rng();
b3=rng();
b4=rng();
b5=rng();
b6=rng();
b7=rng();
b8=rng();
int x, y;

while(massiv!="0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"){
pole();
cout<<"Vertical number"<<endl;
cin>>x;
cout<<"Horizontal number"<<endl;
cin>>y;
xy=y*10+x;
cout << summa(xy) << " foxes found at all" << endl;
massochistka(); };
    cout << "Game over" << endl;
    return 0;
}
