SRC_FILES := $(wildcard ../*.cpp)
SRC_FILES := $(filter-out ../main.cpp, $(SRC_FILES))

runTests: compile run

run: 
	output/out

compile:
	g++ *.cpp $(SRC_FILES) -o output/out
