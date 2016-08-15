# Makefile

CXX=g++
CXXFLAGS=

.PHONY: all
all: cpp java

omniorb: force
	$(MAKE) -C cpp

java: force
	$(MAKE) -C java1

force:

.PHONY: clean
clean:
	$(MAKE) -C cpp clean
	$(MAKE) -C java clean
	find . -maxdepth 1 -type f -name "*.bak" -exec rm -f {} \;
	find . -maxdepth 1 -type f -name "*.o" -exec rm -f {} \;
	find . -maxdepth 1 -type f -name "*.stackdump" -exec rm -f {} \;
	find . -maxdepth 1 -type f -name "*.exe" -exec rm -f {} \;
	find . -maxdepth 1 -type f -name "*.class" -exec rm -f {} \;

# EOF