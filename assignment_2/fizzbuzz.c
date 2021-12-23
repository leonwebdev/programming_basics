#include <stdio.h>
//start
int main(void) {
    //for loop
        //set i to 1
        //if i less than or equal to 100
        //i++
    for (int i = 1; i <= 100; i++) {
        //if i is multiple both of 3 and 5
        if (i%3==0&&i%5==0) {
            //print i FIZZBUZZ
            printf("%d  FIZZBUZZ\n",i);
        }
        //else if i is multiple of 3
        else if(i%3==0){
            //print i FIZZ
            printf("%d  FIZZ\n",i);
        }
        //else if i is multiple of 5
        else if(i%5==0){
            //print i BUZZ
            printf("%d  BUZZ\n",i);
        }
        //else
        else {
            //print i
            printf("%d  \n",i);
        }
        //end loop 
    }
  //stop
  return 0;
}