cmake_minimum_required(VERSION 3.27)
project(ILISI_GTK C)

# Find GTK3 package
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

# Include GTK3 headers
include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})

set(CMAKE_C_STANDARD 11)

add_executable(ILISI_GTK main.c

        src/fenetre.c
        lib/fenetre.h
        lib/structure.h
        lib/global.h
        src/app.c
        lib/app.h
        src/zoneTexte.c
        lib/zoneTexte.h
        src/zoneMotPasse.c
        lib/zoneMotPasse.h
        src/box.c
        lib/box.h)


# Link against GTK3 libraries
target_link_libraries(ILISI_GTK ${GTK3_LIBRARIES})