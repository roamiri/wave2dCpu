set(PROJECTNAME "wave2dcpu")
project(${PROJECTNAME})
cmake_minimum_required(VERSION 2.8)
# set(CMAKE_VERBOSE_MAKEFILE OFF)

option( USE_PRECISION "DOUBLE_PRECISION" ON)
if(USE_PRECISION)
    message(STATUS "========USING DOUBLE PRECISION=======")
endif(USE_PRECISION)

set(srcs
	main.c
)

set(hdrs
	utils.h 
	wave2dFunc.h
	)
	
add_executable(${PROJECTNAME} ${srcs} ${hdrs})

target_link_libraries(${PROJECTNAME} -lm)

install(TARGETS ${PROJECTNAME} RUNTIME DESTINATION bin)
