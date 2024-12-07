#include <stdio.h>
#define size 5

void main(){
      int OneD_Array[size], i, j, temp;

      printf("Enter the elements of a Array: \n"); 
      for(i=0 ; i<size; i++){
        scanf("%d", &OneD_Array[i]);
      }
    
      printf("Array before sorting: \n");
      for(i=0; i<size; i++){
        printf("%d", OneD_Array[i]);
      }

      for(i=0; i<size-1; i++){
        for(j=0; j<size-1; j++){
            if(OneD_Array[j] > OneD_Array[j+1]){
                temp = OneD_Array[j];
                OneD_Array[j] = OneD_Array[j+1];
                OneD_Array[j+1] = temp;
            }
        }
      }

      printf("\n Array after sorting: \n");
      for(i=0; i<size; i++){
        printf("%d", OneD_Array[i]);
      }
}
