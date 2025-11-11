rock_find_qt4(OPTIONAL)
rock_find_qt5(OPTIONAL)

include(RockQt)

rock_qt_vizkit_plugin(
    TARGETPREFIX envire_maps-viz
    QT4_SUFFIX ""
    MISSINGQTDEPS_NOBUILD
    SOURCES
        PluginLoader.cpp
    MOC
        SpatioTemporalContourMapVisualization.hpp
        SpatioTemporalElevationMapVisualization.hpp
        SpatioTemporalGridMapVisualization.hpp
        SpatioTemporalMLSMapVisualization.hpp
        SpatioTemporalOccupancyGridMapVisualization.hpp
        SpatioTemporalTraversabilityGridVisualization.hpp
        PluginLoader.hpp
    HEADERS
        SpatioTemporalContourMapVisualization.hpp
        SpatioTemporalElevationMapVisualization.hpp
        SpatioTemporalGridMapVisualization.hpp
        SpatioTemporalMLSMapVisualization.hpp
        SpatioTemporalOccupancyGridMapVisualization.hpp
        SpatioTemporalTraversabilityGridVisualization.hpp
    DEPS
        envire_maps
    DEPS_PKGCONFIG_QT
        maps-viz
)
