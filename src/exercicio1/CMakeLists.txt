project(Exercicio1)

add_executable(age age.c)
add_executable(distanceCalc distanceCalc.c)
add_executable(numberOperations numberOperations.c)
add_executable(triangleCheck triangleCheck.c)
add_executable(unitConversion unitConversion.c)

if (NOT WIN32)
	target_link_libraries(distanceCalc m)
	target_link_libraries(numberOperations m)
endif()
