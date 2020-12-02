module Fs: {
  /************************************************************************/
  /* Takes a file path and return lines (contents of the file) as a list  */
  /* Example                                                              */
  /* let () =                                                             */
  /*   readLines(cwd ++ "/src/bin/sample_input")                          */
  /*   |> List.iter(print_endline);                                       */
  /************************************************************************/
  let readLines: string => list(string);
} = {
  let readLines = path => Fs.readTextExn(Fp.absoluteExn(path));
};

let stringToCharList = s => {
  let chars = ref([]);
  String.iter(c => chars := List.concat([chars^, [c]]), s);
  chars^;
};

let logicalXOR = (x, y) =>
  switch (x, y) {
  | (true, true) => false
  | (true, false) => true
  | (false, true) => true
  | (false, false) => false
  };

/* Logical XOR */
let (<<>>) = logicalXOR;
