#include <iostream>
#include <vector>
using namespace std;

int main(){
/////////////////////////////////////////////////////////////////////////////////////////////
vector<int> numbers;

cout<<"ile liczb?"<<'\n';

int k=0;

cin>>k;

for(int m=0; m<=k-1;m++){
	cout<<"podaj liczbe"<<'\n';
	int n=0;
	cin>>n;
	numbers.push_back(n);
}

cout<<"Posortowane liczby:"<<'\n';

for(int x=0;x <numbers.size()-1; x++){
	for(int y=0; y<numbers.size()-1;y++){
		if(numbers[y]>numbers[y+1]){
			swap(numbers[y], numbers[y+1]);
		}
	} 
}
for(int v=0;v<numbers.size();v++){
cout<<numbers[v]<<'\n';
}

//int tabl[4] = {3,2,5,4};

// for(int i=0;i<3;i++){
//	for(int j=0;j<3;j++){
//		if(tabl[j]>tabl[j+1])
//		swap(tabl[j], tabl[j+1]);
//	}
//}
//for(int z=0;z<4;z++){
//	cout<<tabl[z]<<'\n';
//}
	return 0;
}
