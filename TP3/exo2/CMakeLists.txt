# CMakeLists.txt dans subdirectory1
set(SOURCES Trajectory.cpp)
# Incluez le chemin relatif vers Point3D.cpp dans exo1
include_directories("../exo1")
# Ajoutez Point3D.cpp du répertoire exo1 aux sources
list(APPEND SOURCES "../exo1/Point3D.cpp")
# Création de l'exécutable pour ce sous-projet
add_executable(exo2 ${SOURCES})