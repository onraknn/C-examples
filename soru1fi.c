#include<stdio.h>

/*
int main(){

    int i,j,sonuc=0;
    int matris[4][4];

    for(i=0;i<4;i++)
    {
        printf("%d. satir gir:",i+1);

        for(j=0;j<4;j++)
        {
            scanf("%d",&matris[i][j]);

            if(i==j)
            {
                sonuc +=matris[i][j];
            }
        }
        printf("\n");
    }
    printf("%d ",sonuc/4);



    return 0;
}
*/
//------------------------------------------------------
/*
    void ters(int A[12],int boy)
    {
        int i,j;
        int gecici[boy];

        for(i=0;i<boy;i++)
        {
            gecici[i]=A[i];
        }

        for(i=0,j=11;i<boy,j>=0;i++,j--)
        {
            A[i]=gecici[j];
        }

    }

    int main()
    {
        int A[]={1,2,3,4,5,20,6,30,7,40,8,9};
        int boy = 12,i;

        ters(A,boy);

        for(i=0;i<boy;i++)
        {
            printf("%d\n",A[i]);
        }
        return 0;
    }
*/

//------------------------------------------------------

/*
void buyut(char *dizgi){

    int i;

    for(i=0;i<100;i++)
    {
        if(dizgi[i]>='a' && dizgi[i]<='z')
        {
            dizgi[i]= dizgi[i]-32;
        }
    }


}

int main(){


    char *dizgi;
	int i;
	dizgi = (char *)malloc(100*sizeof(char));

	for (i=0; i<10; i++)
    {
		printf("Dizgi gir: ");
		scanf("%s", dizgi);
		buyut(dizgi);
		printf("%s\n", dizgi);
    }

    return 0;
}

*/

//------------------------------------------------------

/*
struct dprizma{
	int uzunluk1,uzunluk2,uzunluk3;
};

typedef struct dprizma prizma;

int dhacim(prizma a){
		return a.uzunluk1 * a.uzunluk2 * a.uzunluk3;
}

int main(){
	prizma n;
	printf("3 adet uzunluk gir:  ");
	scanf("%d%d%d",&n.uzunluk1,&n.uzunluk2,&n.uzunluk3);
	printf("sonuc : %d",dhacim(n));
}
*/






































