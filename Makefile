build:
	gcc -Iinclude src/JFFL.c src/chunk.c src/memory.c src/debug.c src/value.c src/vm.c src/compiler.c src/scanner.c src/object.c src/table.c -o JFFL.exe
