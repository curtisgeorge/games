SUBDIRS = card-games-core

.PHONY: subdirs $(SUBDIRS)

subdirs:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir; \
	done

clean:
	for dir in $(SUBDIRS); do \
    $(MAKE) -C $$dir clean; \
  done
