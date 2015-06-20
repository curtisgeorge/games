CC=g++
CPPFLAGS=-std=c++0x -Wall -I../../games-core/src/main/c++
CPPFILES=$(wildcard src/main/c++/*.cpp)
OBJS=$(addprefix target/,$(notdir $(CPPFILES:.cpp=.o)))
TARGETDIR=target
TARGET=$(TARGETDIR)/libchess.so

all: $(TARGETDIR) $(TARGET)

$(TARGETDIR):
	mkdir -p target

$(TARGET): $(OBJS)
	$(CC) -shared -Wall $(OBJS) -o $(TARGET)

target/%.o: src/main/c++/%.cpp
	$(CC) -c -fPIC $(CPPFLAGS) $< -o $@

.PHONY: clean depend

clean:
	rm -rf target

depend:
	makedepend -- $(CPPFLAGS) -- $(CPPFILES)
# DO NOT DELETE

src/main/c++/ChessPiece.o: src/main/c++/ChessPiece.h
src/main/c++/King.o: src/main/c++/King.h src/main/c++/ChessPiece.h
src/main/c++/Pawn.o: src/main/c++/Pawn.h src/main/c++/ChessPiece.h
