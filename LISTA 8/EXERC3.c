#include <stdio.h>


 int main()
 {

    const TAM = 10;
   int matriz[TAM][TAM], i,j;
   for(i = 0; i < TAM; i++){
    for(j = 0; j < TAM; j++){

  if(i==0){
	matriz[i][j] = 1;
	}else if(j==0){
	matriz[i][j] = 1;
	}else if(i==TAM-1){
	matriz[i][j] = 1;
	}else if(j==TAM-1){
	matriz[i][j] = 1;
	}else{
		matriz[i][j] = 0;
	}
printf("%d ", matriz[i][j]);
    }
printf("\n");
    }

    return 0;

 }
