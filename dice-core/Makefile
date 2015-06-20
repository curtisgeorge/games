OS := $(shell uname)
GCCVERSION := $(shell $(CXX) -dumpversion)
CXXFLAGS+=-Wall
ifeq ($(OS), Darwin)
  LIBEXT=dylib
  CXXFLAGS+=-std=c++11
else ifeq ($(OS), Linux)
  LIBEXT=so
  ifeq ($(GCCVERSION), 4.4.7)
    CXXFLAGS+=-std=c++0x
  else ifeq ($(GCCVERSION), 4.6)
    CXXFLAGS+=-std=c++11
  endif
endif
CPPFILES=$(wildcard src/main/cpp/*.cpp)
OBJS=$(addprefix target/,$(notdir $(CPPFILES:.cpp=.o)))
TARGETDIR=target
TARGET=$(TARGETDIR)/libdice-core.$(LIBEXT)

all: $(TARGETDIR) $(TARGET)

$(TARGETDIR):
	mkdir -p target

$(TARGET): $(OBJS)
	$(CXX) -shared $(CXXFLAGS) $(OBJS) -o $(TARGET)

target/%.o: src/main/cpp/%.cpp
	$(CXX) -c -fPIC $(CXXFLAGS) $< -o $@

.PHONY: clean depend

clean:
	rm -rf target

depend:
	makedepend -- $(CXXFLAGS) -- $(CPPFILES)
# DO NOT DELETE
