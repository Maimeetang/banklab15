#include <iostream>
using namespace std;

template <typename T>
void show(T d[],int i){
	cout << "Pass " << i << ":";
	for(int x=0;x<10;x++){
		cout << d[x] << " ";
	}
	cout << endl;
}

template <typename T>
void swap(T d[],int i){
	for(int x = i;x>0;x--){
		T temp = d[x];
		if(d[x] > d[x-1]){
			d[x] = d[x-1];
			d[x-1]=temp;
		}
	}
}

template <typename T>
void insertionSort(T d[],int N){
	for(int i=1; i<N; i++){
		swap(d,i);
		show(d,i);
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
