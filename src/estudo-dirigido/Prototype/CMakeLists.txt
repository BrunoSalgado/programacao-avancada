cmake_minimum_required(VERSION 3.9)
project(estudo_dirigido)

set(CMAKE_CXX_STANDARD 11)

add_executable(estudo_dirigido main.cpp Pessoa.cpp Pessoa.h Homem.cpp Homem.h Mulher.cpp Mulher.h PessoaFactory.cpp PessoaFactory.h)