cmake_minimum_required(VERSION 3.16)

project(age LANGUAGES C)

add_executable(age main.c)

include(GNUInstallDirs)
install(TARGETS age
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
