functionmake: functions.c
	gcc -shared -fPIC -o functionslib.so functions.c