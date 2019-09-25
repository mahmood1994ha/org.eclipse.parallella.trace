#include "trace_utils_BTF.h"


void write_version_param(FILE *stream,float version){
    fprintf(stream,"#version %f\n",version);
}


void write_creator_param(FILE *stream,char creator[]){
    fprintf(stream,"#creator %s\n",creator);
}

void write_creation_date_param(FILE *stream,char timebuf[]){
    fprintf(stream,"#creationDate %s\n",timebuf);
}

void write_time_scale_param(FILE *stream, enum TIME_SCALE ts){
    char tsbuf[4]; 
    switch (ts)
    {
    case PS:
        tsbuf[4] = "ps";
        break;
    case NS:
        tsbuf[4] = "ns";
        break;
    case US:
        tsbuf[4] = "us";
        break;
    case MS:
        tsbuf[4] = "ms";
        break;
    case S:
        tsbuf[4] = "s";
        break;
    default:
        tsbuf[4] = "ps";
        break;
    }
    fprintf(stream,"#timeScale %s\n",tsbuf);
}
