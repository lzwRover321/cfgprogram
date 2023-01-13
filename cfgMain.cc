// main.cpp
#include "Config.h"
int main()
{
    int port;
    std::string ipAddress;
    std::string username;
    std::string password;
    const char ConfigFile[] = "config.cfg";
    Config configSettings(ConfigFile);

    ipAddress = configSettings.Read("ipAddress", ipAddress);
    port = configSettings.Read("port", 0);
    username = configSettings.Read("username", username);
    password = configSettings.Read("password", password);
    std::cout << "ipAddress: " << ipAddress << std::endl;
    std::cout << "port: " << port << std::endl;
    std::cout << "username: " << username << std::endl;
    std::cout << "password: " << password << std::endl;

    return 0;
}

// 编译： g++ -o cfgprogram cfgMain.cc Config.cc  或者执行 make 通过 makefile 编译
// 执行：./cfgprogram