print_endline("Running Test Program:");
let cwd = Sys.getcwd();
let () = (Library.Util.readLineFromFile(cwd ++ "/src/bin/sample_input")) |> List.iter(print_endline);

Console.log(Library.Util.stringToCharList("aoc2020"));

let (<<>>) = Library.Util.(<<>>);
Console.log(true <<>> true);
Console.log(true <<>> false);
Console.log(false <<>> true);
Console.log(false <<>> false);