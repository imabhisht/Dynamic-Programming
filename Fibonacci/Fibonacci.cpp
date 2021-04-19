#include<iostream>
#include<climits>
using namespace std;

//  Dynamic Programming


//  A Memoized Solution
/*
int Fibonacci(int n ,int memo){
	int result;
	if(memo[n] != 0){
		return memo[n];
	}
	if(n==1 || n==2){
		result = 1;
	}
	else{
		result = Fibonacci(n-1,memo)+Fibonacci(n-2,memo);	
	}
	memo[n] = result;
	return result;
}
*/


// Bottom-Top Approach
unsigned long long int FibonacciBottomTop(int n){
 	unsigned long long int Array[n + 2];
    Array[0] = 0;
    Array[1] = 1;
    for(int i = 2; i <= n; i++){
       Array[i] = Array[i - 1] + Array[i - 2];
    }
    return Array[n];
}

int main(){

	int n; 
	cout<<"Enter the Series Fibonacci Step: ";
	cin>>n;
	// int *memo = new int(n);
	cout<<"Value => "<< FibonacciBottomTop(n)<<endl<<endl;
	// for(int i=0;i<n;i++){
	// 	cout<<memo[i];
	// // }
	// cout<<ULLONG_MAX;
	return 0;

}