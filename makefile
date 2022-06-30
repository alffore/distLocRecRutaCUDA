CC= nvcc -c

CLINKER= nvcc -o

DIR_SRC=./src/
DIR_OBJ=./obj/
DIR_BIN=./bin/

all: clean main loaders algoritmo salidas 
	$(CLINKER) $(DIR_BIN)distlocrutac.exe $(DIR_OBJ)*.o $(FLAGS)

loaders:
	$(CC) $(DIR_SRC)loaders/*.cu 
	@mv *.o $(DIR_OBJ)

algoritmo:
	$(CC) $(DIR_SRC)algoritmo/*.cu 
	@mv *.o $(DIR_OBJ)

salidas:
	$(CC) $(DIR_SRC)salidas/*.cu 
	@mv *.o $(DIR_OBJ)

main:
	$(CC) $(DIR_SRC)main/*.cu 
	@mv *.o $(DIR_OBJ)


clean:
	@rm -rfv $(DIR_OBJ)*.o
	@rm -rfv $(DIR_BIN)*.exe
