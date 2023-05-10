#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

int hadyn [100];

void* hublo (void* argunmets);

int main(){


pthread_t hagro;

struct xndry {


	int* dumbo;

};


for (int i =0; i<100; i++){

	hadyn[i] = i+1;

}


struct xndry tom ;

//int * dblox = (int *)aryx;


tom.dumbo = &hadyn[0];

//printf("\n%d\n",*tom.dumbo);
	

for(int x =0 ; x <100;x++){

	printf("%d\n",tom.dumbo[x]);


}


void* hublo (void* argunmets){

	//printf("hublo started");
	
	
}


 
pthread_create( &hagro , NULL , hublo , NULL );

pthread_join(hagro, NULL);

return 0 ;
}