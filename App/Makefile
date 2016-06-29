CC = gcc
CFLAGS = -Wall -g
TARGET = BuzzFizz

$(TARGET): main.o unity.o isPrime.o fibonacci.o test_fibonacci.o test_isPrime.o test_getMessage.o  test_isNumber.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o unity.o isPrime.o fibonacci.o test_fibonacci.o test_isPrime.o test_getMessage.o test_isNumber.o

main.o: src/main.c src/main.h src/isPrime.h src/fibonacci.h
	$(CC) $(CFLAGS) -c -DDEBUG_MODE=1 -DUNIT_TEST=1 src/main.c

isPrime.o: src/isPrime.c src/isPrime.h
	$(CC) $(CFLAGS) -c src/isPrime.c

fibonacci.o: src/fibonacci.c src/fibonacci.h
	$(CC) $(CFLAGS) -c src/fibonacci.c

unity.o: vendor/unity/src/unity.c vendor/unity/src/unity_internals.h vendor/unity/src/unity.h src/main.h
	$(CC) $(CFLAGS) -c vendor/unity/src/unity.c

test_fibonacci.o: test/test_fibonacci.c
	$(CC) $(CFLAGS) -c test/test_fibonacci.c

test_isPrime.o: test/test_isPrime.c
	$(CC) $(CFLAGS) -c test/test_isPrime.c

test_getMessage.o: test/test_getMessage.c
	$(CC) $(CFLAGS) -c test/test_getMessage.c

test_isNumber.o: test/test_isNumber.c
	$(CC) $(CFLAGS) -c test/test_isNumber.c

clean:
	$(RM) *.o
	$(RM) $(TARGET)