#include<iostream>
#include<stdio.h>
using namespace std;
void pattern1(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"* ";    
        }
        cout<<endl;
    }
    
}
void pattern2(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";    
        }
        cout<<endl;
    }
    
}
void pattern3(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;    
        }
        cout<<endl;
    } 
}
void pattern4(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;    
        }
        cout<<endl;
    } 
}
void pattern5(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=5;j>i;j--)
        {
            cout<<"* ";    
        }
        cout<<endl;
    } 
}
void pattern6(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j;    
        }
        cout<<endl;
    } 
}
void pattern7(int n){
    for(int i=0;i<n;i++)
    {
        // space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"_";    
        }
        
        // star
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";    
        }
        
        // space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"_";    
        }
        cout<<endl;
    } 
}
void pattern8(int n){
    for(int i=n;i>0;i--)
    {
        // space
        for(int j=0;j<n-i;j++)
        {
            cout<<"_";    
        }
        
        // star
        for(int j=0;j<2*i-1;j++)
        {
            cout<<"*";    
        }
        
        // space
        for(int j=0;j<n-i;j++)
        {
            cout<<"_";    
        }
        cout<<endl;
    } 
}
void pattern9(int n){
    for(int i=0;i<n;i++)
    {
        // space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"_";    
        }
        
        // star
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";    
        }
        
        // space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"_";    
        }
        cout<<endl;
    } 
    for(int i=n;i>0;i--)
    {
        // space
        for(int j=0;j<n-i;j++)
        {
            cout<<"_";    
        }
        
        // star
        for(int j=0;j<2*i-1;j++)
        {
            cout<<"*";    
        }
        
        // space
        for(int j=0;j<n-i;j++)
        {
            cout<<"_";    
        }
        cout<<endl;
    } 
}
void pattern10(int n){
    for(int i=1;i<=2*n-1;i++)
    {
        int star=i;
        if(i>n) star=2*n-i;
        for(int j=1;j<=star;j++)
        {
            cout<<"* ";    
        }
    
        cout<<endl;
    } 
}
void pattern11(int n){
    for(int i=0;i<n;i++)
    {
        int start;
        if (i % 2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++)
        {
            cout<<start;
            start=1-start;
        }
    
        cout<<endl;
    } 
}
void pattern12(int n){
    int space = 2* (n-1);
    
    for(int i=1;i<=n;i++)
    {
        //number
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        
        //space
        for(int j =1;j<=space;j++)
        {
            cout<<"_";
        }
        space -=2;
        //number
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
    
        cout<<endl;
        
    } 
}
void pattern13(int n){
    int num=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<num; 
            num +=1;
        }
        cout<<endl;
    } 
}
void pattern14(int n){
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+i;ch++)
        {
            cout<<ch;    
        }
        cout<<endl;
    } 
}
void pattern15(int n){
    int t=n-1;
    for(int i=0;i<n;i++)
    {
        
        for(char ch='A';ch<='A'+t;ch++)
        {
            cout<<ch;    
        }
        t=t-1;
        cout<<endl;
    } 
}
void pattern16(int n){
    char ch='A';
    
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<=i;j++)
        {
            cout<<ch;    
            
        }
        ch=ch+1;
        cout<<endl;
    } 
}
void pattern17(int n){
    char ch='A';
    
    for(int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<=n-i-1;j++)
        {
            cout<<"_";    
            
        }
        
        //alpabets
        char ch='A';
        int breakpoint= (2*i+1)/2;
        for(int j=1;j<=2*i+1;j++)
        {
            cout<<ch;
            if(j<=breakpoint)ch++;
            else ch--;
            
        }
        
        //space
        for(int j=0;j<=n-i-1;j++)
        {
            cout<<"_";    
            
        }
    
        cout<<endl;
    } 
}
void pattern18(int n){
    
    for(int i=0;i<n;i++)
    {
        for(char ch='E'-i;ch<='E';ch++)
        {
            cout<<ch;
            
        }
       
        cout<<endl;
    } 
}
void pattern19(int n){
    
    for(int i=0;i<n;i++)
    {
        int spaceup = 2*i;
        //star
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
            
        }
        //spaceup
        for(int j=0; j<spaceup;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
            
        }
       
        cout<<endl;
    } 
    int spacedown=2*(n-1) ;
    for(int i=0;i<n;i++)
    {
        
        //star
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        //spacedown
        for(int j=0;j<spacedown;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        spacedown -=2;
        cout<<endl;
    }
}
void pattern20(int n){
    int spacedown=2*(n-1) ;
    for(int i=0;i<n;i++)
    {
        
        //star
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        //spacedown
        for(int j=0;j<spacedown;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        spacedown -=2;
        cout<<endl;
    }
    int t=n-1;
    
    for(int i=1;i<=n-1;i++)
    {   int space=2*i;
        //star
        for(int j=0;j<t;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=0;j<space;j++)
        {
            cout<<" ";
        }
        
        //star
        for(int j=0;j<t;j++)
        {
            cout<<"*";
        }
        t -=1;
        cout<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    pattern20(t);
}
