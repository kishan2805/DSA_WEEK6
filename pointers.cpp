#include<iostream>
using namespace std;


// int solve(int* p){
//     p+=1;
//     cout<<p<<"  "<<endl;
// }


// int solve (int arr[]){
//     cout<<"the size of the arr inside the function "<<sizeof(arr)<<endl;
    
// }



int main(){
    // int a=7;
    // int *ptr=0;
    // ptr=&a;

    // cout<<*ptr<<endl;
    // cout<<sizeof(a)<<endl;

    // *ptr=*ptr+1;
    // cout<<*ptr<<endl; 
    // cout<<ptr;

    // int arr[3]={1,2,3};
    // int i=2;
    // cout<<arr <<"  "<<&arr<<"  "<<&arr[0]<<endl;
    // cout<<*(arr+1);
    // *(arr+1)=arr[1], *(arr+i)=arr[i]=i[arr]
    // cout<<i[arr];

    // int *p=arr;
    // int *q=arr+1;
    // cout<<arr;
    // cout<<*p<<" "<<*q<<endl;

    // char ch[10]="kishan";
    // char *c=ch;  // char *c=&ch[0]; //is also fine
    // cout<<ch<<" "<<&ch<<" "<<&c<<" "<<*c<<" "<<c<<endl;


// it will work but it will store babbar in a temp storage which can be erased anytime by the system 
// it also gives  a warning 
    // char *ch1="babbar";
    // cout<<ch1;

    // pointers class 2 

    // char a[5]={'a','b','c'};

    // char *cp=&a;
    // here if we try to write like this it will say compiler that  i m going to assing a single pointer pointing to 3 different elements
    //  which is invalid there for e we do it like this 
    // char *cp=a;
    // cout<<*cp<<endl<<cp<<endl;
    // char (*cptr)[5]=&a;  
    /* the size of the pointer should be equal to size of the array */
    // cout<<(*cptr)<<endl; 
    // cout<<cptr;
     /*here we can't give print cptr with the '*' as it will print some other value then the containts of the array but,
    the base address of the array  */
    // if(cptr==&a)
    //     cout<<"base address";
    // else
    //     cout<<"somting else ";

    // cptr[1]=&a[1]; 
    // cout<<*cptr[1];

    // int arr[6]={1,2,3,4,5};
    // cout<<sizeof(arr);

    // pointer to a pointer 
    // int m=5;
    // int* p1=&m;
    // int** p2=&p1;
    // cout<<**p2<<endl;
    // cout<<*p1<<endl;

    // int n=5;
    // int*p=&n;
    // cout<<p<<"  "<<*p<<"  "<<endl;
    // solve(p);
    // cout<<p<<"  "<<*p<<"  "<<endl;


    // int *ptr=0;  //null pointer 
    // *ptr=7; //segmentation fault 
    // *ptr++; //segmentation fault 
    // *ptr=&n; //error 
    // cout<<*ptr<<endl;


    // int a[]={1,21,3};
    // int *p=a;
    // cout<<*a<<" "<<*(a+1);  //we can also write *a in place of *p when printing  as we can derefrence an array using *

    // char a[]="abc";
    // cout<<*a<<"  "<<*a+1<<"  "<<*(a+1);    //int +char give int as output 

    // pointer arithmatic

    // int a[]={1,2,3,4,5};
    // int *p1=&a[0];
    // int *p2=&a[3];
    // cout<<p2-p1;     // output is 3 as whatever the difference between the address's stored in p2 and p1 will be divided by 
    //                 //data type of the pointer , here its int(4) therefor 12/4=3;

    // float ab=12.3;
    // float *p3=&ab;
    // cout<<p3-p1;   // pointer sub between two different data type pointers is not valid 


    


    return 0;   
}