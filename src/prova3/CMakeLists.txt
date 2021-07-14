project(Aula22-04-2021)

add_executable(main main.c)

if (NOT WIN32)
	target_link_libraries(main m)
endif()
