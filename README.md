# V4L2_list-formats
 How get camera's list available capture formats using UVC driver in Linux. In Linux system zero connect camera will have name /dev/video0 and this project works with it. If you want get information from first camera, set another number. Note that some cameras makes two Linux devices per camera. In [this case](https://unix.stackexchange.com/a/539573/481341) you are interesting in number 0, 2, 4, 6, ... More details about code [here](https://stackoverflow.com/questions/22563827/list-available-capture-formats)
 
# Build & Install
I use conan for my project. So, first of all you should install conan itself.
## Install conan

pip install conan --pre --user\
pip install conan --user --upgrade
## Building project
cd V4L2_list-formats\
rm -Rf build\
conan profile detect --force\
conan install . --output-folder=build --build=missing\
cd build\
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release\
cmake --build .\
# How to use?
Run file V4L2_list-formats/build/V4L2_list-formats via console. You can see something like this
![V4L2_list-formats_out_example](https://user-images.githubusercontent.com/27889022/227429029-a48e0d4e-d727-4299-b475-421e6bc441a2.png)
