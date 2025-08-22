# Create a header-only library
add_library(libname INTERFACE)

target_include_directories(libname
        INTERFACE
        ${PROJECT_SOURCE_DIR}/include
)

add_executable(MAIN libname/main.cpp)

target_link_libraries(MAIN PRIVATE libname)
