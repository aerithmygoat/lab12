#include<iostream>
using namespace std;

int fibonacci(long long int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(long  long int x){
    if (x == 0 || x == 1) {
    return x;
    }else if(x > 1){
    int num = fibonacci(x-1) + fibonacci(x-2) ;
    return num;
    }else{
     cout << "input x >= 0";   
    }
}
