#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "trace_utils_BTF.h"

void get_time(char buffer[]);


int main (int argc,char* argv[]){
    //initiate file pointer
    FILE *file_pointer;
    char file_name[150];
    strcpy(file_name,argv[1]);
    file_pointer = fopen(file_name,"w");
     if (file_pointer == NULL){
         printf("failed to open file\n");
         return EXIT_FAILURE;
     }

     struct TraceHeader l_traceheader;
     printf("file opened\n");
     //define comments
     float version_num = 1.0;
     char creator[] = "parallella_board_16";
     enum TIME_SCALE ts = US;
     //creation date
     char buffer[256];
     get_time(buffer);

     l_traceheader.version = version_num;
     strcpy(l_traceheader.creator,creator);
     l_traceheader.timescale = ts;
     strcpy(l_traceheader.timebuf,buffer);
     strcpy(l_traceheader.modelfile,argv[2]);
     write_header(file_pointer,&l_traceheader);
     fclose(file_pointer);
}

void get_time(char buffer[]){
    time_t timer;
    struct tm* tm_info;
    time(&timer);
    tm_info = localtime(&timer);
    strftime(buffer, 26, "%Y-%m-%d %H:%M:%SZ", tm_info);
    //puts(buffer);
}