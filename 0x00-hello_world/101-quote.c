#include <stdio.h>
#include <unistd.h>


/**
  *Desription : using the main 
  * this script print " and that piece of art is useful" - Dora Korpar, 2015-10-19"
  */

int main(void)
{
    char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    write(2, message, sizeof(message) - 1);
    return (1);
}
