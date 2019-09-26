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

enum ENTITY_TYPE{
    STI,    //stimulus event (release of task/runnable)
    T,      //task event
    ISR,    //event of entering an ISR
    R,      //runnable event
    P,      //processor running a task/runnable
    C,      //core running a task/runnable
};

enum TABLE_HEADER{
    ENTITY_TYPE,
    ENTITY_TABLE,
    ENTITY_TYPE_TABLE
};


void write_version_param(FILE *stream,float version);

void write_creator_param(FILE *stream,char creator[]);

void write_creation_date_param(FILE *stream,char timebuf[]);

void write_time_scale_param(FILE *stream, enum TIME_SCALE ts);

void write_table_header(FILE *stream, enum TABLE_HEADER ent_table);

void write_entity_type(FILE *stream, enum ENTITY_TYPE et, int event_index);

void write_entity_table(FILE *stream,char event_name[],int event_index);

void write_entity_type_table(FILE *stream, enum ENTITY_TYPE et, char event_name[]);

