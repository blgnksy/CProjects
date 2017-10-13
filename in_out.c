#include <stdio.h>

int main(void) {
unsigned int num_loop,counter;
printf("%s","Enter a number :");
scanf("%d", &num_loop);
for (counter=0;counter<num_loop;counter++){
   printf("For Loop: %d\n",counter);
}

while (num_loop>0){
   printf("While Loop: %d\n",num_loop);
   num_loop--;

}
}

