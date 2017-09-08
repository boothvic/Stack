OBJ = stack.o stacker.o
stacker: $(OBJ)
	g++ $^ -o $@
%.o: %.cpp
	g++ -c $< -o $@ 
clean:
	rm -f *.o stacker
