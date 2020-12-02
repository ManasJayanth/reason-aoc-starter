let cwd = Sys.getcwd();
let () =
  Library.Util.readLineFromFile(cwd ++ "/src/bin/sample_input")
  |> List.iter(print_endline);

Console.log(Library.Util.stringToCharList("aoc2020"));

CLI.(
  program("aoc")
  |> version("1.0.0")
  |> description("Solve Advent of Code")
  |> argument("input", "Input text file", String)
  |> action(({log, args}) => {
       log.info("Shipping:");
       log.info(args.string("input"));
     })
  |> parseAndRun(Sys.argv)
);
