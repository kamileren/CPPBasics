CXX = g++
CXXFLAGS = -Wall -g
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=)
RM = rm -f

all: $(OBJECTS)

%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS)
