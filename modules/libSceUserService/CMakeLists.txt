set(libName libSceUserService)
include(../setupModule.cmake)

project(${libName})

add_library(${libName} SHARED entry.cpp)

add_dependencies(${libName} third_party config_emu)

target_compile_definitions(${libName} PUBLIC BOOST_ALL_NO_LIB)

target_link_libraries(${libName} PUBLIC libboost_thread config_emu.lib)

setupModule(${libName})
