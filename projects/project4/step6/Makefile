# Makefile for the calculator project

CPPFLAGS = -MMD
CXXFLAGS = -O0 -g3 -Wall

SRC =\
  calc_error.cpp\
  gcd.cpp\
  node.cpp\
  node_impl.cpp\
  number.cpp\
  number_impl.cpp\
  parse.cpp\
  variables.cpp
OBJ = $(SRC:.cpp=.o)

TESTSRC=\
  test_main.cpp\
  test_node.cpp\
  test_number.cpp\
  test_parse.cpp
TESTOBJ = $(TESTSRC:.cpp=.o)

all : calc tester
	./tester

calc : calc.o $(OBJ)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $^

tester: $(OBJ) $(TESTOBJ)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $^ -lboost_unit_test_framework

.PHONY: clean
clean:
	$(RM) calc tester *.o *.d

-include *.d
