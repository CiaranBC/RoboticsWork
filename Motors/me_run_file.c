#include <common.h>
#include <my_wheels.h>

int main(void)
{
  init_my_wheels(); 
  doSquare();
}


void doSquare(void) {
    while(1) {
       goForward();
       delay(1);
       turnLeft(90);
   }
}
