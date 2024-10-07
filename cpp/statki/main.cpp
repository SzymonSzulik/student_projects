#include <iostream>
using namespace std;

int main(){
////////////////////////////////////////////////////////////////////////////////////////////////
while(0==0){
int s[3][3] ={ {0,0,0}, {0,0,0}, {0,0,0} };

cout<<'\n'<<"Ile statkow chcesz postawic?"<<'\n';
int q;
cin>>q;

for(int i=0;i<q;i++){
cout<<'\n'<<"Wybierz gdzie dajesz statek (wspolrzedne moga wynosic od 0-2)"<<'\n';
int x,y;
cout<<"Podaj wspolrzedna x:";
cin>> x;
if(x>2 or x<0){
cout<<"podales niemozliwe pole, podaj jeszcze raz w zakresie 0-2"<<'\n';
cin>>x;
}
cout<<"Podaj wspolrzedna y:";
cin >> y;
s[x][y]=1;
}

for(int v=0;v<q;v++){
cout<<'\n'<<"Wybierz gdzie strzelasz (wspolrzedne moga wynosic od 0-2)"<<'\n';
int z,c;
cout<<"Podaj wspolrzedna x:";
cin>> z;
cout<<"Podaj wspolrzedna y:";
cin >> c;
if(s[z][c] == 1){
cout<<'\n'<<"TRAFIONY!!"<<'\n';
}else{
cout<<'\n'<<"PUDLO :("<<'\n';
}
}
cout<<'\n'<<"KONIEC";
}
	return 0;
}
