# Programa de Adinhação

Curso Alura para estudo da linguagem em C/C++, criando um programa de adivinhação de um número.

## Conectando com WSL2

Rode o comando `wsl --list --verbose` ou `wsl -l -v` para visualziar as distribuicoes linux instalada, estado e versao (WLS).

Em seguida selecione a distro padrao: `wsl -s <nome_distro>`. 

Rode o comando no prompt para entrar no linux: `wsl`

## Docker

Será utilizado um docker para compilar o codigo gerado.

`docker run -it --rm -v "/mnt/e/Projetos/Alura/alura_C:/my_app" -w "/my_app" gcc:10.2.0ws bash`

## Compilando

Codigo para compilar. A extenção .exe roda no Windows e a extensao .out roda no linux/mac.

- Linux: `gcc game.c -o out/game.out`
- Windows `gcc game.c -o out/game.exe`

