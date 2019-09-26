#include "trace_utils_BTF.h"


void write_version_param(FILE *stream,float version){
    fprintf(stream,"#version %2.1f\n",version);
}


void write_creator_param(FILE *stream,char creator[]){
    fprintf(stream,"#creator %s\n",creator);
}

void write_creation_date_param(FILE *stream,char timebuf[]){
    fprintf(stream,"#creationDate %s\n",timebuf);
}

void write_time_scale_param(FILE *stream, enum TIME_SCALE ts){
    switch (ts)
    {
    case PS:
        fprintf(stream,"#timeScale %s\n","ps");
        //tsbuf = "ps";
        break;
    case NS:
        fprintf(stream,"#timeScale %s\n","ns");
        //tsbuf= "ns";
        break;
    case US:
        fprintf(stream,"#timeScale %s\n","us");
        //tsbuf = "us";
        break;
    case MS:
        fprintf(stream,"#timeScale %s\n","ms");
        //tsbuf = "ms";
        break;
    case S:
        fprintf(stream,"#timeScale %s\n","s");
        //tsbuf = "s";
        break;
    default:
        fprintf(stream,"#timeScale %s\n","ps");
        //tsbuf = "ps";
        break;
    }
}



void write_entity_type(FILE *stream, enum ENTITY_TYPE et, int event_index){

}

void write_entity_table(FILE *stream,char event_name[],int event_index){

}

void write_entity_type_table(FILE *stream, enum ENTITY_TYPE et, char event_name[]){

}

void write_table_header(FILE *stream, enum TABLE_HEADER ent_table){
    
}
