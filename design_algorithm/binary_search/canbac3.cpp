#include <bits/stdc++.h> 
using namespace std;
#define 

double f(double x){
	return x*x*x;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double n; cin>>n;
    double l= 0, r= n;
    double mid= (l+r)/2; // Vi tri o giua
    int count= 0;
    int x;
    while(abs(l-r) > 1e-12){ // l == r 
        count+=1;
        if (f(mid) < n)
            l= mid;
        else
            r= mid;
        cout<<count<<": "<<mid<<" "<<f(mid)<<" "<<"l= "<<l<<" r= "<<r<<endl;
        mid= (l+r)/2;
        // cout<<"Nhap 1 so de tiep tuc: ";
        // cin>>x;
    }
    cout<<"Can bac 3 cua "<<n<<" la "<<mid<<endl;
    return 0;
}