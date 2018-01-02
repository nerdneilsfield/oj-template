out:
	g++ --std=c++14 -Wall -I$CATCHDIR -DLOCAL_DEFINE -o out.run sol.cpp
	./out.run
.PHONY:clean
clean:
	rm -f *.run
.PHONY:format
format:
	clang-format -style=google -i *.cpp
.PHONY:test
test:
	g++ --std=c++14 -Wall -I$CATCHDIR -DLOCAL_DEFINE -o test.run sol_test.cpp
	./test.run
