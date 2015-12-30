set(SOURCE_FILES ptmud.cpp basic_object.h ptmud.h location.cpp location.h character.cpp character.h basic_item.cpp basic_item.h player.cpp player.h)
add_executable(ptmud ${SOURCE_FILES})
add_subdirectory(net)
target_link_libraries(ptmud net ${Boost_LIBRARIES})
