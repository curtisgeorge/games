CC=g++
CPPFLAGS=-std=c++0x -Wall -I../../games-core/src/main/c++
CPPFILES=$(wildcard src/main/c++/*.cpp)
OBJS=$(addprefix target/,$(notdir $(CPPFILES:.cpp=.o)))
TARGETDIR=target
TARGET=$(TARGETDIR)/libcard-core.so

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

src/main/c++/CardPile.o: src/main/c++/CardPile.h src/main/c++/Card.h
src/main/c++/StandardPlayingCard.o: src/main/c++/StandardPlayingCard.h
src/main/c++/StandardPlayingCard.o: src/main/c++/Card.h src/main/c++/Suited.h
src/main/c++/StandardPlayingCard.o: src/main/c++/StandardPlayingCardSuit.h
src/main/c++/StandardPlayingCardDeck.o: src/main/c++/StandardPlayingCardDeck.h
src/main/c++/StandardPlayingCardDeck.o: src/main/c++/CardPile.h
src/main/c++/StandardPlayingCardDeck.o: src/main/c++/Card.h
src/main/c++/StandardPlayingCardDeck.o: src/main/c++/StandardPlayingCard.h
src/main/c++/StandardPlayingCardDeck.o: src/main/c++/Suited.h
src/main/c++/StandardPlayingCardDeck.o: src/main/c++/StandardPlayingCardSuit.h
src/main/c++/War.o: src/main/c++/War.h src/main/c++/CardGame.h
src/main/c++/War.o: ../../games-core/src/main/c++/Game.h
src/main/c++/War.o: src/main/c++/WarPlayer.h
src/main/c++/War.o: src/main/c++/StandardPlayingCard.h src/main/c++/Card.h
src/main/c++/War.o: src/main/c++/Suited.h
src/main/c++/War.o: src/main/c++/StandardPlayingCardSuit.h
src/main/c++/War.o: src/main/c++/CardPile.h
src/main/c++/War.o: src/main/c++/StandardPlayingCardDeck.h
