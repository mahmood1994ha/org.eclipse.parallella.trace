#include <string.h>
#include <time.h>
#include <stdio.h>



enum TIME_SCALE{
    PS ,
    NS,
    US,
    MS,
    S
};


void write_version_param(FILE *stream,float version);

void write_creator_param(FILE *stream,char creator[]);


