#include <stdio.h>
#include <stdbool.h>

#define MAX 25

int intArray[MAX] = {64, 25, 12, 22, 11,27,32,54,64,77,90,91,23,26,29,19,11,49,50,55,60,70,75,80,44};

void printline(int count) {
   int i;

   for(i = 0;i < count-1;i++) {
      printf("=");
   }

   printf("=\n");
}

void display() {
   int i;
   printf("[");

   // navigate through all items
   for(i = 0;i < MAX;i++) {
      printf("%d ",intArray[i]);
   }

   printf("]\n");
}

void shellSort() {
   int inner, outer;
   int valueToInsert;
   int interval = 1;
   int elements = MAX;
   int i = 0;

   while(interval <= elements/3) {
      interval = interval*3 +1;
   }

   while(interval > 0) {
      printf("iteration %d#:",i);
      display();

      for(outer = interval; outer < elements; outer++) {
         valueToInsert = intArray[outer];
         inner = outer;

         while(inner > interval -1 && intArray[inner - interval]
            >= valueToInsert) {
            intArray[inner] = intArray[inner - interval];
            inner -=interval;
            printf(" item moved :%d\n",intArray[inner]);
         }

         intArray[inner] = valueToInsert;
         printf(" item inserted :%d, at position :%d\n",valueToInsert,inner);
      }

      interval = (interval -1) /3;
      i++;
   }
}

int main() {
   printf("Input Array: ");
   display();
   printline(50);
   shellSort();
   printf("Output Array: ");
   display();
   printline(50);
   return 1;
}
