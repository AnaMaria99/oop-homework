cmake_minimum_required(VERSION 3.13)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp Repo.h RepoBilet.cpp RepoBilet.h Zona.cpp Zona.h
        Bilet.h Bus.h Cont.h Ctrl.h RepoBus.cpp RepoBus.h RepoFile.cpp RepoFile.h testRepoFile.cpp testRepoFile.h)