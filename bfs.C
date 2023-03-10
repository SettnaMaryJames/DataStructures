#include<stdio.h>
#include<stdlib.h>


int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;

void bfs(int v)
{
	for(i=1;i<=n;i++)
		if(a[v][i] && !visited[i])
			q[++r]=i;
		if(f<=r)
		{
			visited[q[f]]=1;
			printf("%d\t",q[f]);
			bfs(q[f++]);
		}
}

int main()
{
	int v;
	
	printf("Enter no: of vertices:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		q[i]=0;
		visited[i]=0;
	}
	
	printf("\nEnter graph data in matrix from:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
			
	printf("\nEnter the starting vertex:");
	scanf("%d",&v);
	visited[v]=1;
	printf("%d",v);
	bfs(v);
	
	
}

