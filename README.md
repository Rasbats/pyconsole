# pyconsole

Apart from consulting the Python docs few examples were found for embedding Python in C++. 

This is a console application to play a py script, taking a single variable from the command line of pyconsole (argument). The variable passed is the name of a text data file and also passed is the number of arguments. The data file contains raw information on ships' course, speed, lat, lon etc

The  data file is processed and outputs corresponding AIS NMEA sentences. These can be fed locally to OpenCPN, which displays the other ships and their movements.

More information on using the output can be gained by consulting the script 'AISplayer.py'#. This script is based on AISconverter.py by TDan.

The raw data file, 'ais_simulator.txt'# is based on 'ais_simul.txt' provided by Håkan.

Thanks to both TDan and Håkan (http://www.cruisersforum.com/forums/f134) for making the application possible.

#With the release
