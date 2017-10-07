CC = g++
exe_file = poke
$(exe_file): event.o pokemon.o rock.o flying.o psychic.o pokestop.o cave.o location.o driver.o
	$(CC) event.o pokemon.o rock.o flying.o psychic.o pokestop.o cave.o location.o driver.o -o $(exe_file)
event.o: event.cpp
	$(CC) -c event.cpp
pokemon.o: pokemon.cpp
	$(CC) -c pokemon.cpp
rock.o: rock.cpp
	$(CC) -c rock.cpp
flying.o: flying.cpp
	$(CC) -c flying.cpp
psychic.o: psychic.cpp
	$(CC) -c psychic.cpp
pokestop.o: pokestop.cpp
	$(CC) -c pokestop.cpp
cave.o: cave.cpp
	$(CC) -c cave.cpp
location.o: location.cpp
	$(CC) -c location.cpp
driver.o: driver.cpp
	$(CC) -c driver.cpp
driverdebug.o: driver.cpp cave.cpp
	g++ -c driver.cpp cave.cpp -D DEBUG
debug: driverdebug.o event.o pokemon.o rock.o flying.o psychic.o pokestop.o location.o 
	$(CC) driver.o event.o pokemon.o rock.o flying.o psychic.o pokestop.o cave.o location.o -o $(exe_file)
clean:
	rm -f *.out *.o $(exe_file)
