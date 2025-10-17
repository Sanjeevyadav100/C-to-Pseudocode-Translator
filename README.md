# C to Pseudocode (Lex & Yacc)

This repository contains a small compiler front-end implemented with Lex (flex) and Yacc (bison). The lexical rules are in `program.l` and the parser is in `program.y`. The generated C files and artifacts include `lex.yy.c`, `y.tab.c`, `y.tab.h` and a `program` executable produced by the supplied `Makefile`.

## Prerequisites

You will need the following tools installed on your system:

- Git — to clone the repository.
- Flex — Lex-compatible lexical analyzer generator. (flex)
- Bison — GNU parser generator (Yacc-compatible). (bison)
- A C compiler — e.g., `gcc` (on Windows use MinGW-w64 or WSL; macOS and Linux typically have `gcc`/`clang`).
- Make — to run the included `Makefile` (or you can run the commands manually).

Install notes by platform:

### Linux (Debian/Ubuntu)

```pwsh
# Using apt (run as root or with sudo)
sudo apt update
sudo apt install -y git build-essential flex bison make
```

### macOS (Homebrew)

```pwsh
# If you don't have Homebrew, see https://brew.sh
brew install git flex bison make
# macOS ships with clang; gcc is available via Homebrew if needed
```

### Windows

Two common approaches:

1) Using Chocolatey (native Windows):

```pwsh
# Open an elevated PowerShell (Run as Administrator)
choco install -y git make mingw flex bison
# Ensure the installed Mingw/bin (or msys) and tools are on your PATH
```

2) Using WSL (recommended for Unix-like tooling):

```pwsh
# Install WSL and a Linux distro, then inside the distro:
sudo apt update
sudo apt install -y build-essential flex bison make git
```

Note: Flex and Bison packages may have different names in some package managers; `flex` and `bison` are the common names.

## Project structure

- `program.l` — Lex rules
- `program.y` — Yacc grammar
- `lex.yy.c`, `y.tab.c`, `y.tab.h` — generated sources
- `Makefile` — build targets
- `input.txt` — sample input (if present)

## Build (recommended)

From the project root run:

```pwsh
make
```

This Makefile is expected to run `flex` and `bison` (or `yacc`) to produce `lex.yy.c` and `y.tab.c`, then compile them into the `program` executable.

If you don't want to use `make`, you can run the commands manually:

```pwsh
# Generate lexer
flex program.l
# Generate parser (this will create y.tab.c and y.tab.h)
bison -d program.y
# Compile (example with gcc)
gcc -o program y.tab.c lex.yy.c -lfl
```

Notes:
- On some systems the flex runtime is `-lfl`; on others it's included in the standard C library. If linking fails, try `-lfl` or remove it.
- If using Bison, the `-d` flag writes the header `y.tab.h` (or `program.tab.h` depending on bison version and options).

## Run

Run the built program and provide input either interactively or via a file. Examples:

```pwsh
# Run interactively
./program

# Or feed input from a file
./program < input.txt
```

On Windows PowerShell, prefix `.
` when executing in the current directory:

```pwsh
.\program.exe < input.txt
```

## Regenerating from sources

If you change `program.l` or `program.y`, regenerate the C sources and recompile:

```pwsh
flex program.l
bison -d program.y
gcc -o program y.tab.c lex.yy.c -lfl
```

Or simply run `make clean && make` if the `Makefile` provides `clean` and `all` targets.

## Troubleshooting

- "flex: command not found" or "bison: command not found": install the appropriate package for your OS (see Prerequisites).
- Linker errors about `-lfl` or undefined references: try removing `-lfl` or installing the `libfl`/`libfl-dev` development package for your distro.
- On Windows, if `gcc` is not found, ensure MinGW-w64 or a compatible toolchain is installed and added to PATH. Using WSL avoids many Windows-specific toolchain issues.
- If `bison` generates files named `program.tab.c`/`program.tab.h` instead of `y.tab.c`/`y.tab.h`, update the compile commands accordingly (replace `y.tab.c` with `program.tab.c`, etc.).

## Contributing

If you'd like to contribute, please:

1. Fork the repository and create a feature branch.
2. Make changes to `program.l` and/or `program.y`.
3. Regenerate and verify the build locally.
4. Open a pull request with a description of your changes.

## License

This project does not include a license file.

## Contact

If you need help running the project locally, open an issue with details about your OS and the exact error output.
