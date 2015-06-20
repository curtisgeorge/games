SUBDIRS = games-core tic-tac-toe dice-core card-games

.PHONY: subdirs $(SUBDIRS) clean

subdirs:
	@for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir; \
	done

clean:
	@for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done
