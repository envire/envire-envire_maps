envire_gis_plugin(envire_maps-gis
    SOURCES
        ElevationRaster.cpp
    HEADERS
        ElevationRaster.hpp
    DEPS_PKGCONFIG envire_gis
    DEPS envire_maps)
