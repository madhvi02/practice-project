
#include<iostream>
using namsespace std
int OR(int input[],int n)
{
    int result=0;
    for(int i=0;i<n;i++)
    {
        result|=input[i];
    }
    return result;
}
void minsubset(int input[],int sz,int si,int osize,int output[sz],int &max_b,int &ans )
{
    if(sz==si)
    {
        if(osize>0)
        {
            int small=OR(output,osize);
            if(small>=max_b&&osize<=ans)
            {
                ans=osize;
                max_b=small;
            }
            return ;
        }
        else
        {
            return ;
        }
    }
    
    
    minsubset(input,sz,si+1,osize,output,max_b,ans);
    output[osize]=input[si];
    minsubset(input,sz,si+1,osize+1,output,max_b,ans);
    
    
}

int  main
{
    int n=5;
    int input[n]={};
    int output[n];
    int max_b=OR(input,n);
    int ans=n;
    minsubset(input,n,0,0,output,max_b,ans);
    cout<<ans<<endl;
    
}
