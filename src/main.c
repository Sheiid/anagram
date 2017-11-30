
#include<stdio.h>
#include<stdlib.h>

void anagram(int *,int *,int ,int *);
int main(){
	int i,level=0;
	int arr[3]={1,2,3};
	int sol[3]={0,0,0};
	int mark[3]={0,0,0};

	for(i=0;i<3;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("simple permutation\n");
	anagram( *arr,*sol,0,mark );

return 0;
}

void anagram (int *arr,int *sol,int level,int *mark){
	int i;

	//termination
	if(level>=3){
		for(i=0;i<3;i++){
			printf("%d",sol[i]);
		}
		printf("\n");
		return;
	}else
	{
		for(i=0;i<3;i++){
			if(mark[i]==0){
			mark[i]=1;
			sol[level]=arr[i];
			anagram (arr,sol,level+1,mark);
			mark[i]=0;
			}
		}
	}


}
