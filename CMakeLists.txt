cmake_minimum_required(VERSION 3.20)

project(OvvraBetSimulator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(Qt6 6.2 REQUIRED COMPONENTS Widgets)

set(CMAKE_AUTOMOC ON) # сигналів/слотів (moc)
set(CMAKE_AUTOUIC ON) # .ui файлів (uic)
set(CMAKE_AUTORCC ON) # .qrc файлів ресурсів (rcc)

#файли UI (з Qt Designer)
set(PROJECT_UI_FILES
        mainwindow.ui
)

#файли заголовків (.h)
set(PROJECT_HEADERS
        mainwindow.h
        IGame.h
        #DiceGame.h
        #SlotsGame.h
        #PistolRouletteGame.h
)

#файли коду (.cpp)
set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        #DiceGame.cpp
        #SlotsGame.cpp
        #PistolRouletteGame.cpp
)

add_executable(${PROJECT_NAME}
        ${PROJECT_UI_FILES}
        ${PROJECT_HEADERS}
        ${PROJECT_SOURCES}
)

target_link_libraries(${PROJECT_NAME} PRIVATE
        Qt6::Widgets
)