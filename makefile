start: akinator.cpp akinator.hpp main.cpp BinaryTreeCpp/tree.hpp BinaryTreeCpp/tree.cpp
	g++ akinator.cpp -c
	g++ main.cpp -c
	g++ BinaryTreeCpp/tree.cpp -c
	
	g++ akinator.o tree.o main.o -o start
	
	rm main.o akinator.o tree.o
