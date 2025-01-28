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

//Do not modify source code above this line 

void showMatrix(const bool A[][N]){

for(int i = 0 ; i<N ; i++){
    for(int j = 0 ; j<N ; j++){
        cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void findLocalMax(const double matrix[][N], bool A[][N]){
    for(int i = 1 ; i<N-1 ; i++){
        for(int j = 1 ; j<N-1 ; j++){
            if(matrix[i][j]>=matrix[i][j-1] and matrix[i][j]>=matrix[i-1][j] and matrix[i][j]>=matrix[i+1][j] and matrix[i][j]>=matrix[i][j+1]){
                A[i][j] = 1;
            }
            else{
                A[i][j] = 0;
            }
        }
    }
}

void inputMatrix(double matrix[][N]){
    for(int i = 0 ; i<N ; i++){
        cout<<"Row "<< i + 1 << ": ";
        for(int j = 0 ; j<N ; j++){
            cin>> matrix[i][j];
        }
    }
}