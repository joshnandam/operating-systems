#include <stdio.h>
int main()
{
	int bt[20], wt[20],tat[20],i,n;
	float wtavg,tatavg;
	printf("Enter the number of processes :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter Burst time for process %d :" ,i);
		scanf("%d",&bt[i]);
	}
	wt[0] = wtavg = 0;
	tat[0]= tatavg = bt[0];
	for(i=1; i<n; i++)
	{
		wt[i] = wt[i-1]+bt[i-1];
		tat[i] = tat[i-1]+bt[i];
		wtavg = wtavg+wt[i];
		tatavg =tatavg+tat[i];
	}
	printf("\n\t process \t burst time \t waiting time \t turnaroundtime\n");
	for (i=0; i<n; i++)
	{
		printf("\n\tp%d\t\t%d\t\t%d\t\t%d" ,i,bt[i],wt[i],tat[i]);
	}
		printf("\n Average waiting time :%f",wtavg );
		printf("\n Avearge turnaround time :%f",tatavg );
	
}



   


