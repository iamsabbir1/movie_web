@echo off
cd /d C:\Users\iamsabbir\OneDrive\Desktop\OpenGLwithGLEWandGLFW
"C:\Program Files\CodeBlocks\MinGW\bin\gcc.exe" -IC:/Users/iamsabbir/OneDrive/Desktop/OpenGLwithGLEWandGLFW/include -LC:/Users/iamsabbir/OneDrive/Desktop/OpenGLwithGLEWandGLFW/lib src/*.c -lglfw3 -lglew32 -lopengl32 -lgdi32 -lm -o main.exe
main.exe