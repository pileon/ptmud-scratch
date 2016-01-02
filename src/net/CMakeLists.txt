set(SOURCE_FILES net.cpp basic_connection.cpp basic_connection.h basic_server.cpp basic_server.h)
add_library(net
        STATIC
        ${SOURCE_FILES})
