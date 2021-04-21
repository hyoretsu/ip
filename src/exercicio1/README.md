# Compilação

### CMake

Caso tenha o [CMake](https://cmake.org/download/) instalado, rode `cmake .` e em seguida `make` (Indisponível para Windows por incompatibilidade com o Visual Studio)

### Manualmente

Rode o comando `clang -lm main.c -o main.exe` ou `gcc -lm main.c -o main.exe`, dependendo de qual estiver instalado.

Obs: você precisa de um compilador, como o [Clang](https://github.com/llvm/llvm-project/releases) ou o [GCC](https://sourceforge.net/projects/mingw). Lembre-se de adicioná-los à PATH. (GCC já incluso em distros do Linux)

# Execução

Após compilar, rode `main.exe` caso esteja usando o cmd, `./main.exe` caso esteja usando o Powershell/Linux ou apenas `./main` caso tenha compilado pelo CMake.
