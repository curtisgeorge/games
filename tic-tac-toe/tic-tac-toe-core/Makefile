CXXFLAGS+=-std=c++0x -Wall -I../../games-core/src/main/c++
CPPFILES=$(wildcard src/main/cpp/*.cpp)
OBJS=$(addprefix target/,$(notdir $(CPPFILES:.cpp=.o)))
TARGETDIR=target
TARGET=$(TARGETDIR)/libtic-tac-toe-core.so

all: $(TARGETDIR) $(TARGET)
	$(CXX) -o tictactoe $(CXXFLAGS) -Isrc/main/cpp -Ltarget -ltic-tac-toe-core tictactoe.cpp

$(TARGETDIR):
	@mkdir -p target

$(TARGET): $(OBJS)
	$(CXX) -shared $(CXXFLAGS) $(OBJS) -o $(TARGET)

target/%.o: src/main/cpp/%.cpp
	$(CXX) -c -fPIC $(CXXFLAGS) $< -o $@

.PHONY: clean depend

clean:
	@$(RM) -rf target
	@$(RM) tictactoe

depend:
	makedepend -- $(CXXFLAGS) -- $(CPPFILES)
# DO NOT DELETE

src/main/cpp/TicTacToeGame.o: src/main/cpp/TicTacToeGame.h
src/main/cpp/TicTacToeGame.o: ../../games-core/src/main/c++/Game.h
src/main/cpp/TicTacToePlayer.o: src/main/cpp/TicTacToePlayer.h
src/main/cpp/TicTacToePlayer.o: src/main/cpp/TicTacToeMark.h
