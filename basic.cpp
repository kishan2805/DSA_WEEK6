#include<iostream>
#include<vector>
// #include<stdio.h>
// #include<math.h>
using namespace std;

// basic maths gcd 
int gcd(int a,int b){
    if (a==0)
        return b;
    else if (b==0)
        return b;
    else{
        while(a>0 && b>0){
            if(a>b)
                a=a-b;
            else
                b=b-a;
        }
        return a == 0?b:a;
    }
}

int fastExponentiation(int x, int n)
{
    long long int ans = 1;

    while (n > 0)
    {
        if (n & 1)
        {
            // n is odd.
            ans = (ans * x);
        }
        x = (x * x);
        n >>= 1; //n is divided by 2 (either you didvide it by 2 or just do a right shift)
    }
    return ans ;
}
void print_prime(int n);

void seg_sieve(int l,int r){
    int n=r-l;
    vector<bool>prime(n,true);
    vector<int>base(n);
    int ans=0;


}

int main(){

    // gcd of two no
    int a=24;
    int b=8;
    // int c=gcd(a,b);
    // cout<<c<<endl;

    // lcm
    // lcm*hcf=a*b
    // int lcm=(a*b)/c;
    // cout<<lcm<<endl; 

    // int d=fastExponentiation(2,9);
    // cout<<d<<endl;
    print_prime(15);




}

void print_prime(int n){
    vector<bool>prime(n,true);
    prime[0]=prime[1]=false;
    int m=sqrt(n);

    for(int i=2;i*i<=n;i++){
        if(prime[i]==true){

            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    int count;
    // printf("%d",ans);
    for(int i=0;i<n;i++){
        if(prime[i]==true){
            count++;
            cout<<i<<" ";

        }
    }
    cout<<endl<<count<<endl;

}


