############################################################
Cada um dos arquivos da aula deve ser compilado separadamente.

Por exemplo: 

$ g++ ex0_hello_world.cpp -o ex0_hello_world

Compilado o código, o arquivo gerado pode ser executado.

$ ./ex0_hello_world

############################################################
É possível compilar sem fornecer o nome do executável. Nesse caso, o
arquivo gerado terá nome "a.out".

Por exemplo: 

$ g++ ex0_hello_world.cpp

Compilado o código, o arquivo gerado pode ser executado.

$ ./a.out

############################################################
É possivel compilar mais de um arquivo .cpp de uma vez, sem
precisar ficar colocando os nomes deles.
Para isso os arquivo precisa esta na mesma pasta:

$ g++ *.cpp -o nome_do_arquivo

ou

$ g++ *.cpp
		(para ser criado o arquivo a,out)
