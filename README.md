# Requests Cpp

Um projeto adaptando o [cpr](https://github.com/libcpr/cpr) para se parecer mais com o [requests](https://pypi.org/project/requests/) do Python.

## Usando o código
Basta colocar os arquivos do projeto na sua pasta e compilar e linkar todos com o comando:
```bash
$ g++ -o <nome_do_arquivo> *.cpp -I/usr/local/include -L/usr/local/lib64/ -lcpr
$ ./<nome_do_arquivo>
```
## Funcionalidades

- **get**;
- **post**;
- **patch**;
- **remove (o mesmo que delete)**;
- **to_json**: Tranforma uma string válida em nlohmann::json
## Requisitos

|Nome    |Link                             |
|:-----:|:--------------------------------:|
| cpr   | https://github.com/libcpr/cpr    |
| json  | https://github.com/nlohmann/json |
| CMake | https://cmake.org/download/      |

## Instalação

### cpr
Use os seguintes comandos no terminal
```bash
$ git clone https://github.com/libcpr/cpr.git
$ cd cpr
$ mkldir build && cd build
$ cmake ..
$ make
$ sudo make install
```
### json
Para esse, basta baixar a pasta de include do [json](https://github.com/nlohmann/json) e colar no include do seu sistema.

### Cmake
Cole os seguintes comandos no terminal
```bash
$ sudo apt update
$ sudo snap install cmake --classic
```
## Créditos
| Nome                                         	| Projeto                          	|
|----------------------------------------------	|----------------------------------	|
| [Niels Lohmann](https://github.com/nlohmann) 	| https://github.com/nlohmann/json 	|
| [libcpr](https://github.com/libcpr/cpr)      	| https://github.com/libcpr/cpr    	|
