#include "trace_utils_BTF.h"

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


void write_header (FILE * stream, struct TraceHeader* l_header)
{
	fprintf(stream,"#version %2.1f\n",l_header->version);
	fflush( stdout );
	fprintf(stream,"#creator %s\n",l_header->creator);
	fflush( stdout );
	fprintf(stream,"#creationDate %s\n",l_header->timebuf);
	fflush( stdout );
	fprintf(stream,"#inputFile %s\n",l_header->modelfile);
	fflush( stdout );
	write_time_scale_param(stream, l_header->timescale);
}