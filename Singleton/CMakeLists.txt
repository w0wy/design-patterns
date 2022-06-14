set(TARGET_NAME ${PROJECT_ID}_Singleton)

add_executable(${TARGET_NAME})

target_sources(${TARGET_NAME}
	PUBLIC
		main.cpp
)

target_include_directories(${TARGET_NAME}
	PRIVATE
		./
)

unset(TARGET_NAME)