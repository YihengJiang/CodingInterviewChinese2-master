cmake_minimum_required(VERSION 3.10)
project(CodingInterviewChinese2-master)

set(CMAKE_CXX_STANDARD 11)

#set debug/release version, default is debug version
#SET(CMAKE_BUILD_TYPE release)

#Add the source in current directory
#aux_source_directory(. DIRSRCS)

# Add header file include directories, case here has no files
#in current directory, so need not include_directories(./),
#but it will include in general.
include_directories(./ ./Utilities)

# Add block directories, it will
add_subdirectory(Utilities)

#if directory B and C dependent on D; B,C will both add_subdirectory( DRoot D),
#this will throw exception cause by including duplicated,
#so we could modify add_subdirectory as follows:
#if (NOT TARGET D)
#    add_subdirectory( DRoot D)
#endif()

#${DIRSRCS} has no files need to include, so need not add_executable(${DIRSRCS})
add_executable(CodingInterviewChinese2-master 01_AssignmentOperator/AssignmentOperator.cpp)
#use for include sub directories,UtilLib must consistent with sub directory's library name
target_link_libraries(CodingInterviewChinese2-master UtilLib)

#message(INFO something)