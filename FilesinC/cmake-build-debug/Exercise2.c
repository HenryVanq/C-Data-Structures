#include <stdio.h>
#include <io.h>

#define file1 "employee.dbs"
#define file2 "other.dbs"
#define file3 "report.txt"


// tha tis xrisimopoihsoume gia na dimiourgisoume to mh ascii arxeio
FILE *F3;
int fn1,fn2;

struct melos{
    char name[31];
    char address[61];
    char telephone[51];
    int code;
};

struct other{
    char familly[41];
    char money[201];
    char CV[61];
    int adeia[11];
};

// anoigw arxeia
void openfiles()
{
    fn1=open(file1,0);
    fn1=open(file2,0);
    F3=fopen(file3,"w");
}

//kleinw arxeia
void closefiles()
{
    close(fn1);
    close(fn2);
    fclose(F3);
}

// function diakopes
void diakopes()
{
    int k1, k2, position1, position2, g1, g2,i,sum;
    long pos1, pos2;
    struct melos mel;
    struct other oth;

    printf("Give k1 and k2");
    scanf("%d %d ", &k1, &k2);

    while ((k1<=k2) && (!eof(fn1)))
    {
        pos1 = (long) (k1 - 1) * sizeof(struct melos);
        position1=lseek(fn1,pos1,0);
        g1=read(fn1,&mel,sizeof(struct melos));


// metakinoyme to deikti sto deytero arxeio
        pos1 = (long) (mel.code - 1) * sizeof(struct other);
        position2=lseek(fn2, %oth)*sizeof(struct other);
        g2=read(fn2,&oth,sizeof(struct other));
        fprintf(F3,"%s %s", mel.home,mel.telephone);

        int sum=0;

        for (i=0; i<10; i++)
        {
            sum+=oth.adeia[i];
        }

        fprintf(F3,"%d",sum);
        fprint(F3,"\n");
        k2++;
    }

}
int main()
{
    printf("Hello");
    return 0;
}