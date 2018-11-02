#include <stdio.h>

#define M 5
#define N 5

// prototypa synartisewn 
int find_max(int pinakas[M][N], int n);
int find_min(int pinakas[M][N], int n);
float find_average(int pinakas[M][N], int n);
int max_n_time(int pinakas[M][N], int n);
int number_above(int pinakas[M][N], int n);

int main()
{
	// 1) dilosi array
	int array[M][N]=
	{
		{2,3,56,688,67},{8,9,19,34,147},
		{688,32,12,522,65},{32,56,1,555,99},
		{23,24,688,97,7}
	};
	
	
	int i,j; // dilosi metavlitwn gia ta 2 for tou pinaka
	
	printf("\n\tPinakas : \n");
	printf("\t-------------------------------------------------------------------\n");
	
	// 2) ektyposi pinaka sto xristi
	for (i=0; i<M; i++)
		for (j=0; j<N; j++)
		
		printf("\t%d\t ",array[i][j]);
		printf("\n");
	
	printf("\t-------------------------------------------------------------------\n\n");
	
	//3) Ektiposi synatisewn sth main
	printf("\t1) Maximum number : [%d].\n\n", find_max(array,M*N));
	printf("\t2) Minimum number : [%d].\n\n", find_min(array,M*N));	
	printf("\t3) Average : [%.1f].\n\n",find_average(array,M*N));
	printf("\t4) Maximum number is : [%d] times.\n\n", max_n_time(array, M*N));	
	printf("\t5) There are [%d] numbers above the K.\n\n",number_above(array,M*N));
	
}

// Synartisi me orismata ton pinaka kai enan arithmo n pou tha episterpsei to max
int find_max(int pinakas[M][N], int n)
{
	int max,i,j;// dilosi metavlitwn
	
	max=pinakas[0][0]; // arxikopoihsh max apo th thesi [0][0]
	for (i=0; i<M; i++) 
		for (j=0; j<N; j++)
			if(pinakas[i][j]>max)// an kapoio stoixeio tou pinaka einai megalytero apo ti thesi [0][0] ginetai  max
			{
				max=pinakas[i][j];
					
			}
		return max;
}

// Synartisi me orismata ton pinaka kai enan arithmo n pou tha episterpsei to min
int find_min(int pinakas[M][N], int n)
{
	int min,i,j;// dilosi metavlitwn
	
	min=pinakas[0][0];//// arxikopoihsh min apo th thesi [0][0]
	for (i=0; i<M; i++)
		for (j=0; j<N; j++)
			if(pinakas[i][j]<min)// an kapoio stoixeio tou pinaka einai mikrotero apo th thesi [0][0] ginetai min
			{
				min=pinakas[i][j];		
			}
		return min;
}

//Synartisi me orismata ton pinaka kai enan arithmo n pou tha episterpsei to average
float find_average(int pinakas[M][N], int n)
{
	int sum,i,j;// dilosi metavlitwn 
	float average;
	
	sum=0;//// arxikopoihsh sum 
	for (i=0; i<M; i++)
		for (j=0; j<N; j++)
			{
				sum+=pinakas[i][j];// prosthetei to epomeno stoieio tou pinaka
				average=(sum+pinakas[i][j])/(float)(M*N);	
			}					
		return average;
}

//Synartisi me orismata ton pinaka kai enan arithmo n pou tha episterpsei to plithos emfanisewn tou max
int max_n_time(int pinakas[M][N], int n)
{
	int max,i,j;// dilosi metavlitwn
	int counter;
	
	// dilosi ksana  synartisi max 
	counter=0;
	max=pinakas[0][0];
	for (i=0; i<M; i++)
		for (j=0; j<N; j++)
			if(pinakas[i][j]>max)
			{
				max=pinakas[i][j];
				counter++;
							
			}return counter;
}

//Synartisi me orismata ton pinaka kai enan arithmo n pou tha episterpsei tous arithmous panw apto k
int number_above(int pinakas[M][N], int n)
{
	int i,j;
	int k;// dilosi arithmou k
	int counter;// dilosi metriti gia tin arithmisi stoixeiwn megalyteroy tou k
	
	k=500;
	
	counter=0;// // arxikopoihsh metriti count
	for (i=0; i<M; i++)
		for (j=0; j<N; j++)
		{
			if(pinakas[i][j] > k)// opoio stoixeio einai megalytero to metraei
			{
				counter++;// metritis stoixeiwn megalyterou t
			}
		
		} return counter;
}

