#include<iostream>
#include<vector>
#include<algorithm>
#include<matploti>

using namespace std;

bool swap_max(double a, double b) {
    double a0 = abs(a);
    double b0 = abs(b);
    return a0 < b0;
}
int main() {
    double x[] = {1, 2, 3, 4, 5};
    double y[] = {2, 4, 6, 8, 10};

    vector<double> error;
    double err;
    double b0 = 0;
    double b1 = 0;
    double alpha = 0.1;

    for(int i = 0; i < 640; i++) {
        int idx = i % 5;
        double p = b1 * x[idx] + b0;  
        err = p - y[idx];             
        b0 = b0 - alpha * err;         
        b1 = b1 - alpha * err * x[idx];
        cout<<"B0="<<b0<<" "<<"B1="<<b1<<" "<<"error="<<err<<endl;
        error.push_back(err);
    }

    sort(error.begin(),error.end(),swap_max);
    cout<<"Final Values are: "<<"B0="<<b0<<" "<<"B1="<<b1<<" "<<"error="<<error[0]<<endl;

    cout<<"Enter a test x value";
    double test;
    cin>>test;
    double pred=b0+b1*test;
    cout<<endl;
    cout<<"The value predicted by the model= "<<pred;
}
