#ifndef help_h
#define help_h

char *help[] = {
    "Usage: sumo-router [OPTION]*",
    "Simulation of Urban MObility v0.7 - Routing Module",
    "  http://sumo.sourceforge.net",
    "Examples: ",
    " sumo-router -c routes_munich.cfg",
    " ",
    "Options:",
    " Input files:",
    "  Configuration",
    "   -c, --configuration FILE       FILE will be used as configuration",
    "                                    1. Default: ./sumo-netcovert.cfg",
    "  Network description:",
    "   -n, --net-files FILE           FILE containing the SUMO-net",
    "   -w, --weights FILE             FILE containing the weights of the net",
    "  Route descriptions:",
    "   -s, --sumo-input FILE          FILE containing SUMO-routes",
    "   --cell-input FILE              FILE containing cell routes",
    "   -t, --trip-defs FILE           FILE containing trip definitions",
    "   -a, --alternatives FILE        FILE containing route alternatives",

    "   -n, --node-file FILE           FILE contains node definitions ",
    "   -e, --edge-file FILE           FILE contains edge definitions ",
    "   -t, --type-file FILE           FILE contains type definitions ",
    " ",
    " Output files:",
    "   -o, --output-file FILE         Generated routes will be written to FILE",
    "                                   Additionally, a file with route",
    "                                   alternatives will be generated as",
    "                                   'FILE.alt'",
    " ",
    " Process Options:",
    "   -b, --begin LONG               The begin time of routing",
    "   -e, --end LONG                 The end time of routing",
    "   --gBeta DOUBLE                 Gawron-Beta for DUE",
    "   --gA                           Gawron-A for DUE",
    "   --unsorted                     The routes are assumed to be unsorted",
    "   --save-cell-rindex             The index to cell-routes will be saved",
    "   --intel-cell                   Set, when reading cell-routes computed",
    "                                   on an Intel-machine",
    "   --no-last-cell                 Use best, not the last cell-route",
    " ",
    " Processing Options:",
    "   -C, --no-config                No configuration file is used",
    "   -v, --verbose                  SUMO-Netconvert reports what it does",
    "   -p, --print-options            Prints option values before processing",
    "   --help                         This screen",
    0 };

#endif
