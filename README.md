###This is fork of
https://github.com/PacktPublishing/The-Modern-Cpp-Challenge

##how to 

###For win and visual studio 2019
open cmd in a folder with problem \Chapter##\problem_##

mkdir build && cd build

cmake -G "Visual Studio 16 2019" -A x64 .. -DCMAKE_USE_WINSSL=ON -DCURL_WINDOWS_SSPI=ON -DCURL_LIBRARY=libcurl -DCURL_INCLUDE_DIR=..\libs\curl\include -DBUILD_TESTING=OFF -DBUILD_CURL_EXE=OFF -DUSE_MANUAL=OFF

open Chapter##\problem_##\build\problem_##.sln
right-click on project problem## in solution explorer => set as startup project