# Makefile

JAVA_HOME=/usr/lib/jvm/java-7-openjdk-i386

IDL=$(JAVA_HOME)/bin/idlj
IDLFLAGS=-fall

JAVA=java
JAVAC=javac

IDL_FILE = ../example.idl

.PHONY: all
all: server.class client.class

server.class: \
	server.java \
	MyExampleInterface_impl.java \
	ExampleInterfacePOA.java \
	ExampleInterfaceOperations.java \
	ExampleInterfaceHelper.java \
	ExampleInterface.java \
	_ExampleInterfaceStub.java
	$(JAVAC) $^

client.class: \
	client.java \
	ExampleInterface.java \
	ExampleInterfaceOperations.java \
	ExampleInterfaceHelper.java \
	_ExampleInterfaceStub.java
	$(JAVAC) $^

ExampleInterface.java ExampleInterfaceHelper.java ExampleInterfaceHolder.java ExampleInterfaceOperations.java ExampleInterfacePOA.java _ExampleInterfaceStub.java: $(IDL_FILE)
	$(IDL) $(IDLFLAGS) $<

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -name "*.bak" -exec rm -f {} \;
	find . -maxdepth 1 -type f -name "*.class" -exec rm -f {} \;
	find . -maxdepth 1 -type f -name "ExampleInterface.java" -exec rm -f {} \;
	find . -maxdepth 1 -type f -name "ExampleInterfaceHelper.java" -exec rm -f {} \;
	find . -maxdepth 1 -type f -name "ExampleInterfaceHolder.java" -exec rm -f {} \;
	find . -maxdepth 1 -type f -name "ExampleInterfaceOperations.java" -exec rm -f {} \;
	find . -maxdepth 1 -type f -name "ExampleInterfacePOA.java" -exec rm -f {} \;
	find . -maxdepth 1 -type f -name "_ExampleInterfaceStub.java" -exec rm -f {} \;

# EOF
