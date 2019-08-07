#include "functions.h"
#include "stdio.h"





int main(int argc, char* argv[])
{
if( argc==1  ) {
      printf("The path to a wave file was not specified\n");
      return 1;
   }
   else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
      return 1;
   }
   
   waveloader waveloader1(argv[0]);
   R128(waveloader1&);
   
return 0;
}
