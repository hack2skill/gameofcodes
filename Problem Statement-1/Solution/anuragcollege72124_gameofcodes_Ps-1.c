#include <stdio.h>
#include <stdlib.h>

int main(){
    int tests, *ptr, total_solved;
    scanf("%d", &tests);
    for(int test=0; test<tests; test++){
        total_solved =0;

        ptr = (int*)malloc(4*sizeof(int));
        for(int i=0; i<4; i++) scanf("%d", ptr+i);
        
	for(int i=1; i<=ptr[0]; i++){

            if((i%ptr[i]==0) && (i%ptr[2]==0)){
                continue;
            }

            if((i%ptr[1]==0) || (i%ptr[2]==0)){
                total_solved++;
            }
        }
        if(total_solved>=ptr[3]){
            printf("Win\n");
        }else{
            printf("Lose\n");
        }
        free(ptr);
    }
}
