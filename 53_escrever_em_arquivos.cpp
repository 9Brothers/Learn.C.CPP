#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <bits/stdc++.h> 
#include <sys/stat.h> 
// #include <sys/types.h> 

using namespace std;

bool DirectoryExist(const char *pathname);
bool HaveAccessToDirectory(const char *pathname);
bool CreateDiretory(const char *pathname);
void WriteFile(const char *pathname, const char *filename);

int main(int argc, char const *argv[])
{

    auto pathname = "/home/heber/Git/Learn.C.CPP/text";
    
    if(!DirectoryExist(pathname)) 
    {
        CreateDiretory(pathname);
    }

    WriteFile(pathname, "texto.txt");    

    return 0;
}

bool DirectoryExist(const char *pathname) {
    
    struct stat info;
    bool result = false;
    
    if (stat(pathname, &info) != 0)
    {        
        printf( "cannot access %s\n", pathname );        
    }
    else if(info.st_mode & S_IFDIR)
    {
        printf( "%s is a directory\n", pathname );

        result = true;
    }
    else
    {
        printf( "%s is no directory\n", pathname );
    }
    
    return result;
}

bool CreateDiretory(const char *pathname) {

    if (mkdir(pathname, 0777) != -1)
    {
        cout << "Directory created";

        return true;
    }
    
    cerr << "Error :  " << strerror(errno) << endl; 

    return false;
}

void WriteFile(const char *pathname, const char *filename) {
    
    stringstream filepath;
    filepath << pathname << "/" << filename;

    ofstream outFile(filepath.str());
    
    if (outFile)
    {
        // abre o arquivo ou cria caso não exista
        // outFile.open(ios_base::app);
        
        outFile << "Deu certo haha :)";
    }
    else
    {
        cerr << "Não foi possivel abrir o arquivo!" << endl;        
    }

    outFile.close();
}