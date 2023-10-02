#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))

int n;

int a[50][50];

int i,j,k;

int main()
{
    scanf("%d",&n);
    
    
    memset(a,0,sizeof(a));
    int h=0,l=n/2;
    a[h][l]=1;
    for ( k = 2; k <= n*n; ++k)
    {
        if(h==0 && l!=n-1)
        {    
            h=n-1;l++;
        }
        else if(h==0 && l==n-1)
            h++;
        else if(l==n-1 && h!=0)
        {
            h--;
            l=0;
        }
        else if(h!=0 && l!=n-1)
        {
            if (a[h-1][l+1]==0)
            {
                h--;
                l++;
            }
            else h++;
        }
        a[h][l]=k;
    }

    
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
        
        
    
    return 0;    
}


