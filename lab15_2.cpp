#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double A[][N]){
	int Row = 1;
	for(int i = 0; i<N;i++){
		cout << "Row " << Row << ": ";
		for(int j=0;j<N;j++){
			double x;
			cin >> x;
			A[i][j] = x;
		}
		Row++;
	}
}

void findLocalMax(const double A[][N], bool B[][N]){
	for(int i = 0; i<N;i++){
		for(int j=0;j<N;j++){
			if(i>0 and j>0 and i<N-1 and j<N-1){
				if(A[i][j] < A[i-1][j] or A[i][j] < A[i+1][j] or A[i][j] < A[i][j-1] or A[i][j] < A[i][j+1]){
					B[i][j] = false;
				}else{
					B[i][j] = true;
				}
			}else{
				B[i][j] = false;
			}
		}
	}
}

void showMatrix(const bool A[][N]){
	for(int i = 0; i<N;i++){
		for(int j=0;j<N;j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}