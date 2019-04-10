aux_source_directory(. DIR_Utilities_SRCS)
#compile to lib for calling by main directory
add_library(UtilLib ${DIR_Utilities_SRCS})