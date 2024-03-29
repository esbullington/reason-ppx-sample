open Asttypes;
open Parsetree;
open Ast_mapper;

let test_mapper = argv => {
  ...default_mapper, /* we extend the default_mapper */  
  /* And override the 'expr' property */
  expr: (mapper, expr) =>
  /* If the expression is [%test] */
  switch expr {
    | {pexp_desc: Pexp_extension(({txt: "test"}, PStr([])))} => 
     /* Then replace by 42 */
     Ast_helper.Exp.constant(Const_int(42))
    | other => default_mapper.expr(mapper, other)
    }
};

let () = register("ppx_test", test_mapper);

