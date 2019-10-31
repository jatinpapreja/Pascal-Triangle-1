#include<iostream>
using namespace std;
int factorial(int a)
    {
        int i,s=1;
      for(i=2;i<=a;i++)
      {
          s=s*i;
      }
      return s;
    }
int combination(int n,int r)
{int b;
b=factorial(n)/(factorial(r)*factorial(n-r));
return b;
}
int main()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i-1;j++)cout<<" ";
        for(j=0;j<=i;j++)
        {cout<<combination(i,j)<<" ";}
        cout<<endl;
    }
    return 0;
}
