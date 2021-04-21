project(Exercicio1)

add_executable(main main.c)

if (NOT WIN32)
	target_link_libraries(main m)
endif()
