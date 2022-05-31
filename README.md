# **Raylib-Sample-Project**

Raylib Sample Project for Visual Studio Code

# How to compile?

In ../src execute: **mingw32-make**

# **Folders**

../bin - **Binary code of your game (compiler export location)**

../include - **Header Files**

../lib - **Libraries**

../src - **Source code your game**

# **Makefile for Windows** (../src/Makefile)

g++ ../src/main.cpp -o ../bin/game.exe -O2 -Wall -Wno-missing-braces -I ../include/ -L ../lib/ -lraylib -lopengl32 -lgdi32 -lwinmm

**-o** - output

**-I** - Include Folder

**-L** - lib Folder

# Have Fun!
