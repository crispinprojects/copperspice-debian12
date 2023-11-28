set(CS_VERSION 1.8)

list(APPEND hello_INCLUDES
    ${CMAKE_CURRENT_SOURCE_DIR}/mainwindow.h
)

list(APPEND hello_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/mainwindow.cpp      
    ${CMAKE_CURRENT_SOURCE_DIR}/mainwindow.ui
   #qrc_speak.cpp
)
# use copperspice resource macro generates a call to the appropriate resource compiler
# run rcc to generate qrc output
#COPPERSPICE_RESOURCES(   
   #${CMAKE_CURRENT_SOURCE_DIR}/../speak.qrc
   
#)



# run uic to generate source
COPPERSPICE_RESOURCES(
    ${CMAKE_CURRENT_SOURCE_DIR}/mainwindow.ui  
    
)

add_executable(hello ${hello_SOURCES})

target_include_directories(hello PRIVATE ${CMAKE_SOURCE_DIR}/src)

target_link_libraries(hello
    CopperSpice::CsCore
    CopperSpice::CsGui
    #CopperSpice::CsMultimedia   

)


if(CMAKE_SYSTEM_NAME MATCHES "(Linux|OpenBSD|FreeBSD|NetBSD|DragonFly)")
set_target_properties(hello PROPERTIES OUTPUT_NAME hello)
endif()

install(TARGETS hello DESTINATION .)

# Copy the libraries and plugins necessary for the application to the install path

#these are defined: copperspice/cmake/CopperSpiceDeploy.cmake

# linux only
cs_copy_library(CsCore)
cs_copy_library(CsGui)
#cs_copy_plugins(CsMultimedia)












