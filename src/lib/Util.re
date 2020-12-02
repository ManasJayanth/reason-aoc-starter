module Fs = {
  let readLines = path => Fs.readTextExn(Fp.absoluteExn(path));
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
