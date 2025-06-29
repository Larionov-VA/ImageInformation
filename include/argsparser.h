#include "../include/structures.h"
#include "../include/err.h"
#include "getopt.h"
#include <string.h>
#include <stdio.h>
#define SHORTOPT_INPUT 'i'
#define SHORTOPT_INCORRECT_FLAG '?'
#define ERROR_LOCATION_ARGPARSER "file: get_option.c"

void parse_args(int argc, char* argv[], error_info_t* err, options_t* opt);