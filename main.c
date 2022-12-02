#include <stdio.h>
#include <stdlib.h>
#include "icmp.h"

int main(int argc, char *argv[]){
    if(argc < 3){
        printf("Usage: %s <address> <count>\n", argv[0]);
        exit(1);
    }
    ping_main(argv[1], atoi(argv[2]));
    return 0;
}