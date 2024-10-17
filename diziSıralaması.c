#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,n,tut;
    int dizi[10];

    for(i=0;i<10;i++)
    {
        printf("%d. elemani gir : ",i+1);
        scanf("%d",&dizi[i]);
    }

    for(j=0;j<10;j++)
    {
        for(i=0;i<9;i++)
        {
            if(dizi[i+1]>dizi[i])
            {
                tut=dizi[i];
                dizi[i]=dizi[i+1];
                dizi[i+1]=tut;
            }
        }
    }

    for(i=0;i<10;i++)
    {
        printf("%d ",dizi[i]);
    }


/*

    int i,j,tut;
    int sayi[10]={12,213,334,425,563,67,78,839,11,10};

    for(j=1;j<10;j++)
       {
         for (i=0;i<9;i++)
         {
           if (sayi[i]<sayi[i+1])
           {
               tut=sayi[i];
               sayi[i]=sayi[i+1];
               sayi[i+1]=tut;
           }
         }
       }

      for (i=0;i<10;i++)
      {
          printf("%d\t",sayi[i]);
      }

*/





    return 0;
}
