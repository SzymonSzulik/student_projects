#include <iostream>

using namespace std;
void Sortowanie(int tab[], int size){
	for(int i=0; i<size - 1;i++){
		for(int j=0;j<size - 1;j++){
			if(tab[j]>tab[j+1])
				swap(tab[j], tab[j+1]);
		}
	}

	for(int y=0;y<4;y++){
		cout<<tab[y]<<'\n';
	}
}
int main(){
int tabl[4] = {3,2,5,4};
int k=tabl[0];
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		if(tabl[j]>tabl[j+1])
		swap(tabl[j], tabl[j+1]);
	}
}
for(int y=0;y<4;y++){
	cout<<tabl[y]<<'\n';
}
	return 0;
}
