## ReasonML PPX sample

Make sure that OCaml is set to correct fork (only have to `opam switch create` the first time):
```
opam update
opam switch create 4.02.3+buckle-1
opam switch 4.02.3+buckle-1
```

Then, build and install the PPX:
```
make build
yarn link
cd sample_project
yarn install
yarn link "ppx-test"
yarn build
node src/Demo.bs.js
```

### Tools

#### dumpast
```
opam install ocamlfind ppx_tools`

`ocamlfind ppx_tools/dumpast -e "[%addone 1 + 2]"`
