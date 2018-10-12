#include <common.h>
#include <my_wheels.h>

void doSquare(void) {
    while(1) {
       goForward();
       delay(1);
       turnLeft(90);
    }
}

int main(void)
{
  init_my_wheels(); 
  doSquare();
}
