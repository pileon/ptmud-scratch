set(SOURCE_FILES ptmud.cpp basic_object.h ptmud.h location.cpp location.h character.cpp character.h basic_item.cpp basic_item.h player.cpp player.h)
add_executable(ptmud ${SOURCE_FILES})
add_subdirectory(net)

set(LIBRARIES net ${Boost_LIBRARIES} pthread)

# if(THREADS_HAVE_PTHREAD_ARG)
#     target_compile_options(PUBLIC ptmud "-pthread")
# endif()
# if(CMAKE_THREAD_LIBS_INIT)
#     set(LIBRARIES ${LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})
# endif()

target_link_libraries(ptmud ${LIBRARIES})
