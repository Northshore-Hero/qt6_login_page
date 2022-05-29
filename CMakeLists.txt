cmake_minimum_required(VERSION 3.22)
project(qt6_loginPage)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/lib/qt6")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(qt6_login_page main.cpp loginpage.cpp loginpage.h loginpage.ui)
target_link_libraries(qt6_login_page
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

install (TARGETS qt6_login_page
        DESTINATION /usr/share/qt6_login_page)

install (FILES logo.svg DESTINATION /usr/share/qt6_login_page)

install (FILES qt6_login_page.desktop DESTINATION /usr/share/applications)