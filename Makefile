# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra

# Directories
SRCDIR = .
TESTDIR = ./tests

# Include directories
INCLUDES = -I$(SRCDIR) -I$(TESTDIR)

# Source files for main program
MAIN_SRCS = $(SRCDIR)/main.cpp $(SRCDIR)/Calculator.cpp $(SRCDIR)/Operations.cpp

# Source files for tests
TEST_SRCS = $(TESTDIR)/test_operations.cpp $(SRCDIR)/Operations.cpp $(TESTDIR)/catch_amalgamated.cpp

# Executable names
MAIN_EXE = calculator
TEST_EXE = test_operations

# Default target: build the main program
all: $(MAIN_EXE)

# Build main program
$(MAIN_EXE): $(MAIN_SRCS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(MAIN_SRCS) -o $(MAIN_EXE)

# Build test executable
test: $(TEST_SRCS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(TEST_SRCS) -o $(TEST_EXE)

# Clean up
clean:
	rm -f $(MAIN_EXE) $(TEST_EXE)