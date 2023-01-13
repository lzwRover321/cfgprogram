cfgprogram: Config.h Config.cc cfgMain.cc 
	g++ -o cfgprogram cfgMain.cc Config.cc 
clean:
	rm cfgprogram