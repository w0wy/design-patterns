set(TARGET_NAME ${PROJECT_ID}_Observer)

add_executable(${TARGET_NAME})

target_sources(${TARGET_NAME}
	PUBLIC
		main.cpp
		Subject.cpp
		SomeSubjectImpl.cpp
		SomeObserverImpl.cpp
)

target_include_directories(${TARGET_NAME}
	PRIVATE
		./
)

unset(TARGET_NAME)