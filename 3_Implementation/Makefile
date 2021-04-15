
# SRC = unity/unity.c\
# src/AirBooking.c\
# test/AirTesting.c\


# INC = -Iunity\
# -Iinc\
# -Itest

# PROJECT_NAME = abhi.exe

# $(PROJECT_NAME): $(SRC)
# 	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

# run:$(PROJECT_NAME)
# 	./${PROJECT_NAME}
# doc:
# 	make -C documentation

# clean:
# 	rm -rf $(PROJECT_NAME) documentation/html

# coverage:${PROJECT_NAME}
# 	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(PROJECT_NAME)
# 	./${PROJECT_NAME}
# 	gcov -a src/AirBooking.c ProjectMain.c


#The above make file is used to Check the Unit Test case

# Name of the project
PROJECT_NAME = Air_Ticket

# Output directory
BUILD = build

# All source code files
SRC = ProjectMain.c\
src/AirBooking.c

# All test source files
TEST_SRC = src/AirBooking.c\
#test/test_calculator_operations.c\
#unity/unity.c\

# TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out
TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).exe
# All include folders with header files
INC	= -Iinc\
-Iunity\

#Library Inlcudes
#if working with CUnit 
#INCLUDE_LIBS = -lcunit
INCLUDE_LIBS =

# Project Output name
# PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).exe

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).exe

# Call `make run` to run the application
run:$(PROJECT_NAME)

	./$(PROJECT_OUTPUT).exe

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)
#Coverage
coverageCheck:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
