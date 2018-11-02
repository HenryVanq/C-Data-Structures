#include <stdio.h>
#include <io.h>
#include <ftsiface.h>


#define File1"base.dbs"
#define File2"Report.txt"

FILE *F2;                     //na grapsoume sto ascii arxeio
int fn1;                        // na kanoume open to ascii arxeio gia diaxeirisi

struct base{                       // gia na dimiourghuei to binary arxeio
    char name [51];
    char address[61];
    char telephone[31];
    int spoudes;
    int kids;
};

//Creation of void function

void openfile()
{
    fn1=open(file1,0);             //arnitiko den anoikse thetiko anagnosi
    F2=fopen(file2,"w");             //append
}

void closefile()
{
    close(fn1);
    fclose(F2);

}
//Creation of employee function
void employee()
{
    int k1,k2;
    long pos1, position1;
    base basi;

    printf("Give k1 and k2");
    scanf("%d %d", &k1,&k2);

    //1) poy tha metakinithei to arxeio (deiktis)
        //2) Metakinsi toy deikti
            // Diabazw ti sygkekrimeni epafi

    while(!eof(fn1) && (k1<=k2))
        pos1=(long)(k1-1)* sizeof(base);                                    //thesi-1 epi to megethos toy arxeioy
        position1=lseek(fn1,pos1,0);                                            // se poio arxeio tha metakinithei
        g1=read(fn1,&basi, sizeof(base));                                           // poy tha paei ti tha metrisoume

        if((basi.spoudes==3) && (basi.kids==4))                                //diavasma gia mi ascii arxeio
        {
            fprintf(F2,"\n%s%s%d", basi.name,basi.address,basi.kids)

        }
        k1++;
}


int main() {

    return 0;
}