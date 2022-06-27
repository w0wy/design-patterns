cmake_minimum_required (VERSION 3.20)

set (PROJECT_NAME "Design Patterns")
string (MAKE_C_IDENTIFIER "${PROJECT_NAME}" PROJECT_ID)
string (TOLOWER ${PROJECT_ID} PROJECT_ID)

project(${PROJECT_NAME})

add_library (${PROJECT_ID}_options INTERFACE)
add_library (${PROJECT_ID}::Options ALIAS ${PROJECT_ID}_options)

target_compile_features(${PROJECT_ID}_options
	INTERFACE
		cxx_std_20
)

target_compile_options(${PROJECT_ID}_options
	INTERFACE
		-O3
)

add_subdirectory(Singleton)
add_subdirectory(Observer)
