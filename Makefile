

ENTRYPOINT=Main.re
PROGRAM=ppx

build:
	ocamlc -pp "refmt --print binary" -o $(PROGRAM) -I +compiler-libs ocamlcommon.cma -impl $(ENTRYPOINT)

clean:
	rm *.cmo *.cmi
