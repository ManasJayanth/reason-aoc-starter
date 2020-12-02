# Advent of Code with Reason

Hey!

This is started kit for working Advent of Code puzzle. You can clone it and build it with [`esy`](https://esy.sh)

```sh
git clone https://github.com/ManasJayanth/reason-aoc-starter
cd reason-aoc-starter
esy
```

If you dont have `esy` already installed,

```sh
npm i -g esy
# or
yarn global add esy
```

## Helper libraries available

 - `@reason-native/console` for logging
 - `@reason-native/fs` for file utilities
 - `@reason-native/fp` for type safe path handling
 - `@reason-native/rely` for unit testing the puzzle cases
 - `@opam/angstrom` for parsing the puzzle input
 
## Build tools used

- [Dune](https://dune.readthedocs.io/en/stable/) - to build the project
- [Pesy](https://github.com/esy/pesy) - to provide an alternative convenient JSON syntax for Dune file. Optional. Use `esy pesy eject ./path/to/sub-package` to use the Dune file for that subpackage.


## Documentation for provided helper utils

(TODO)

