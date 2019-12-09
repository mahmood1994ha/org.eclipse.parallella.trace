#ifndef TRACE_UTILS_BTF_H_
#define TRACE_UTILS_BTF_H_
#include <string.h>
#include <time.h>
#include <stdio.h>

enum TIME_SCALE{
    PS , // pico seconds
    NS, // nano seconds
    US, // micro seconds
    MS, // milli seconds
    S // seconds
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

/**
 * Structure to hold BTF Header
 */
struct TraceHeader
{
	float version;
	char creator[150];
	char timebuf[150];
	char modelfile[150];
	enum TIME_SCALE timescale;
	enum ENTITY_TYPE entitytype;
};

/**
 * Function to map the selected time scale and to write the same onto the btf file
 */
void write_time_scale_param(FILE *stream, enum TIME_SCALE ts);
/**
 * Function to write BTF header structure onto the btf file
 */
void write_header (FILE *, struct TraceHeader *);


#endif /* TRACE_UTILS_BTF_H_ */