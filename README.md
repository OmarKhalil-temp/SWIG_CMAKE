Minimum Requirements: <br>
    1- CMake v3.8 or higher. <br>
    2- SWIG Library v4.1.1. <br>
        Download link: https://swig.org/download.html <br>
        How to install SWIG: https://open-box.readthedocs.io/en/latest/installation/install_swig.html<br><br>
    
How to build the project: <br>
    1- Open Visual Studio.<br>
    2- Click on files -> open -> CMake Project -> Navigate to CMakelists.txt file. <br>
    3- Open go.i file, and edit lines 3 and 4 with absolute paths of for CMake_SWIG.cpp and CMake_SWIG.h on your machine.<br>
    4- Open CMakelists.txt file and hit crtl+s. <br>
    5- Right click on CMakelists.txt in Visual Studio and click build.<br><br>


How to test the project:<br>
1- Open Visual Studio Code or any IDE/text-editor that can run Golang. <br>
2- Run main.go in CMake_SWIG/out/build/x64-Debug <br>
3- to view SWIG files go to CMake_SWIG/out/build/x64-Debug/go_cpp
