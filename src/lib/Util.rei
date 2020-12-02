module Fs: {
  /************************************************************************/
  /* Takes a file path and return lines (contents of the file) as a list  */
  /* Example                                                              */
  /* let () =                                                             */
  /*   readLines(cwd ++ "/src/bin/sample_input")                          */
  /*   |> List.iter(print_endline);                                       */
  /************************************************************************/
  let readLines: string => list(string);
};

let logicalXOR: (bool, bool) => bool;

/* Logical XOR */
let (<<>>): (bool, bool) => bool;
