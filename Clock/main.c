/*
 Author: Carlos Tavares
 Date: 20/03/21
 Purpose: Create a clock in C
 
 .'`~~~~~~~~~~~`'.
 (  .'11 12 1'.  )
 |  :10 \    2:  |
 |  :9   @-> 3:  |
 |  :8       4;  |
 '. '..7 6 5..' .'
  ~-------------~
    
 */


#include <stdio.h>


void testPrint(void);


int main(int argc, char *argv[]){
    
    char clock[7][17] = {
        { .'`~~~~~~~~~~~`'.},
        { (  .'11 12 1'.  )},
        { |  :10 \    2:  |},
        { |  :9   @-> 3:  |},
        { |  :8       4;  |},
        { '. '..7 6 5..' .'},
        {  ~-------------~ },

    };

    
    return 0;
}

void testPrint(){
    printf("\n");
    printf(" .'`~~~~~~~~~~~`'.");
    printf("\n");

    printf(" (  .'11 12 1'.  )");
    printf("\n");

    printf(" |  :10 \\    2:  |");
    printf("\n");

    printf(" |  :9   @-> 3:  |");
    printf("\n");

    printf(" |  :8       4;  |");
    printf("\n");

    printf(" '. '..7 6 5..' .'");
    printf("\n");

    printf("  ~-------------~");
    printf("\n");
}
