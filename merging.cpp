#include <iostream.h>

int main()
{
    int  i=0,j=0,k=0,m;
    int c[30];
    int a[3]={0,2,4};
    int b[3]={1,3,5,21,4};
    for(m=0;m<8;m++)
    {if(i<3&&j<8)
       {if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
        }}
 else if(i>=3)
 {c[k]=b[j];
 j++;
 k++;}
 else 
 {c[k]=a[i];
 i++;
 k++;}
    }
      for(m=0;m<8;m++)
    {
        cout<<c[m];
    }
    return 0;
}
