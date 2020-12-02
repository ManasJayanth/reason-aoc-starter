let readLineFromFile = path => Fs.readTextExn(Fp.absoluteExn(path));

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