
PROGRAM=ppx

build:
	dune build main.exe
	cp _build/default/main.exe $(PROGRAM)

clean:
	rm -rf *.cmo *.cmi ppx _build
