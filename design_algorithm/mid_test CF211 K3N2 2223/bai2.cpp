#include <bits/stdc++.h>
using namespace std;

double p,q,r,s,t,u;
double f(double x) {
    double f = p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*(x*x)+u;
    return f;
}

int main() {
    while(cin>>p>>q>>r>>s>>t>>u){
        double left = 0;
        double right = 1;
        double mid;
        if(f(right) > 0 || f(left) < 0){
            cout<<"No solution\n";
        }
        else{
            while(abs(right-left)>pow(10,-12)){
                mid = (left+right)/2;
                if (f(mid)>0)       
                    left=mid;
                else
                    right=mid;
            }
            cout<<fixed<<setprecision(4)<<mid<<endl;
        }
    }
    return 0;
}