![example workflow](https://github.com/fedi-nabli/PeachCompiler/actions/workflows/c-cpp.yml/badge.svg)

# PeachCompiler

Peach Compiler is a simple C project made for compiling C projects and file into x86 32-bit machine code.
This compiler is made fully in C. It is 32-bit compatible.
<br />
At this stage the compiler performs lexical analysis and created a AST (Abstract Syntax Tree) for some types (still under developemnt).
<br />
For more information about the progress and stages check the 'Overview' section.

## Usage
- To run th project locally, you need `gcc` and `make` installed. It works better on linux. (Disclaimer not tried on arch architecture for new MacBooks).
- Step 1: Clone the repository locally `git clone https://github.com/fedi-nabli/PeachCompiler.git`.
- Step 2: Run `make` or `make clean` then `make` for clean build.
- Step 3: Run `./main` and the output should be `'Everything compiled ok'`.

## Overview
- The compiler is still in the development stage.
- The compiler is divided into 6 parts:
  - Lexer: Done
  - Parser: Done
  - Code generator: In Progress
  - Preprocessor: Not started
  - Macro system: Not started
  - Semantic validator: Not started

## Other
For any information or question contact me.
