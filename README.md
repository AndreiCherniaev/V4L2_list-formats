# V4L2_list-formats
 How get camera's list available capture formats using UVC driver in Linux. More details here https://stackoverflow.com/questions/22563827/list-available-capture-formats
 
# Build & Install
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
