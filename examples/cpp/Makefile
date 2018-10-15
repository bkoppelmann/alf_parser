LIB := ../../thirdparty/antlr4/runtime/Cpp/dist/libantlr4-runtime.a
CFLAGS := -I../../thirdparty/antlr4/runtime/Cpp/runtime/src/

main.elf: main.cpp ALFLexer.cpp ALFParser.cpp $(LIB)
	$(CXX) $(CFLAGS) -o $@ $^
