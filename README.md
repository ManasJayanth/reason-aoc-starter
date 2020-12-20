# Advent of Code with Reason

Hey!

This is started kit for working Advent of Code puzzle. You can clone it and build it with [`esy`](https://esy.sh)

```sh
git clone https://github.com/ManasJayanth/reason-aoc-starter
cd reason-aoc-starter
esy
```

To enable Flambda optimisations on your compiled binaries, use `@release`

Examples,
```
esy @release # to just build
esy start:release # to run flambda opt enabled binary
```

If you dont have `esy` already installed,

```sh
npm i -g esy
# or
yarn global add esy
```

## Editor setup

We recommend the following editor plugins

1. [OCaml Platform](https://marketplace.visualstudio.com/items?itemName=ocamllabs.ocaml-platform) for VSCode/VSCodium
2. [reason-mode](https://github.com/reasonml-editor/reason-mode) with [esy-mode](https://github.com/ManasJayanth/esy-mode) for Emacs
3. [vim-reasonml]() for Vim

## Forum discussion

Associated forum post can be found [here](https://reasonml.chat/t/advent-of-code-2020-starter-kit-and-tips/2555). 
If you have any questions, feel free to ask on the there. Tag me on Discord if you are on Reason Servers. I'm `Manas (prometheansacrifice)#0219` there.
Tips and new ideas are welcome too!

## Helper libraries available

 - `@reason-native/console` for logging
 - `@reason-native/fs` for file utilities
 - `@reason-native/fp` for type safe path handling
 - `@reason-native/rely` for unit testing the puzzle cases
 - `@reason-native/cli` for CLI parsing
 - `@opam/container` for an extended standard library
 - `@opam/angstrom` for parsing the puzzle input
 
## Build tools used

- [Dune](https://dune.readthedocs.io/en/stable/) - to build the project
- [Pesy](https://github.com/esy/pesy) - to provide an alternative convenient JSON syntax for Dune file. Optional. Use `esy pesy eject ./path/to/sub-package` to use the Dune file for that subpackage.


## Documentation for provided helper utils

(TODO)


## Documentation (quick primers) for included libraries

### `@reason-native/console` 

Reason is a type safe language and functions have to be intentionally
written in a way accept arguments of any type. Benefits of such strong
typing is seen in large codebases, but for simple printing, one could
need type specific printers like `print_int` etc.

`@reason-native/console` provided a familiar generic `Console.log`
inspired by the browser's `console.log`. See [here](https://reason-native.com/docs/console/)

```reason
Console.log("Some string here");
Console.log(true);
Console.log(Some("hi"));
Console.log(None);
```
