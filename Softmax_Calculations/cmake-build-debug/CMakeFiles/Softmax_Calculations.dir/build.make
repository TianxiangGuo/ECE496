# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Andy\OneDrive\2022F\ECE496\Github\ECE496\Softmax_Calculations

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Andy\OneDrive\2022F\ECE496\Github\ECE496\Softmax_Calculations\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Softmax_Calculations.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Softmax_Calculations.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Softmax_Calculations.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Softmax_Calculations.dir/flags.make

CMakeFiles/Softmax_Calculations.dir/main.cpp.obj: CMakeFiles/Softmax_Calculations.dir/flags.make
CMakeFiles/Softmax_Calculations.dir/main.cpp.obj: ../main.cpp
CMakeFiles/Softmax_Calculations.dir/main.cpp.obj: CMakeFiles/Softmax_Calculations.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Andy\OneDrive\2022F\ECE496\Github\ECE496\Softmax_Calculations\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Softmax_Calculations.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Softmax_Calculations.dir/main.cpp.obj -MF CMakeFiles\Softmax_Calculations.dir\main.cpp.obj.d -o CMakeFiles\Softmax_Calculations.dir\main.cpp.obj -c C:\Users\Andy\OneDrive\2022F\ECE496\Github\ECE496\Softmax_Calculations\main.cpp

CMakeFiles/Softmax_Calculations.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Softmax_Calculations.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Andy\OneDrive\2022F\ECE496\Github\ECE496\Softmax_Calculations\main.cpp > CMakeFiles\Softmax_Calculations.dir\main.cpp.i

CMakeFiles/Softmax_Calculations.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Softmax_Calculations.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Andy\OneDrive\2022F\ECE496\Github\ECE496\Softmax_Calculations\main.cpp -o CMakeFiles\Softmax_Calculations.dir\main.cpp.s

# Object files for target Softmax_Calculations
Softmax_Calculations_OBJECTS = \
"CMakeFiles/Softmax_Calculations.dir/main.cpp.obj"

# External object files for target Softmax_Calculations
Softmax_Calculations_EXTERNAL_OBJECTS =

Softmax_Calculations.exe: CMakeFiles/Softmax_Calculations.dir/main.cpp.obj
Softmax_Calculations.exe: CMakeFiles/Softmax_Calculations.dir/build.make
Softmax_Calculations.exe: CMakeFiles/Softmax_Calculations.dir/linklibs.rsp
Softmax_Calculations.exe: CMakeFiles/Softmax_Calculations.dir/objects1.rsp
Softmax_Calculations.exe: CMakeFiles/Softmax_Calculations.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Andy\OneDrive\2022F\ECE496\Github\ECE496\Softmax_Calculations\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Softmax_Calculations.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Softmax_Calculations.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Softmax_Calculations.dir/build: Softmax_Calculations.exe
.PHONY : CMakeFiles/Softmax_Calculations.dir/build

CMakeFiles/Softmax_Calculations.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Softmax_Calculations.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Softmax_Calculations.dir/clean

CMakeFiles/Softmax_Calculations.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Andy\OneDrive\2022F\ECE496\Github\ECE496\Softmax_Calculations C:\Users\Andy\OneDrive\2022F\ECE496\Github\ECE496\Softmax_Calculations C:\Users\Andy\OneDrive\2022F\ECE496\Github\ECE496\Softmax_Calculations\cmake-build-debug C:\Users\Andy\OneDrive\2022F\ECE496\Github\ECE496\Softmax_Calculations\cmake-build-debug C:\Users\Andy\OneDrive\2022F\ECE496\Github\ECE496\Softmax_Calculations\cmake-build-debug\CMakeFiles\Softmax_Calculations.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Softmax_Calculations.dir/depend
