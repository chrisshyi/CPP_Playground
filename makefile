prac: prac.cpp
	clang++ -glldb -std=c++17 -pthread -Wall -stdlib=libc++ -o prac prac.cpp
str: str.cpp
	clang++ -ggdb3 -glldb -std=c++17 -stdlib=libc++ -o str str.cpp
