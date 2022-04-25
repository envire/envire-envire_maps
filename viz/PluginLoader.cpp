#include "PluginLoader.hpp"
#include "SpatioTemporalContourMapVisualization.hpp"
#include "SpatioTemporalElevationMapVisualization.hpp"
#include "SpatioTemporalGridMapVisualization.hpp"
#include "SpatioTemporalMLSMapVisualization.hpp"
#include "SpatioTemporalOccupancyGridMapVisualization.hpp"
#include "SpatioTemporalTraversabilityGridVisualization.hpp"

namespace vizkit3d {
        
        QtPluginVizkitBase::QtPluginVizkitBase() {
        }
        
        /**
        * Returns a list of all available visualization plugins.
        * @return list of plugin names
        */
        QStringList* QtPluginVizkitBase::getAvailablePlugins() const
        {
            QStringList *pluginNames = new QStringList();
            pluginNames->push_back("SpatioTemporalContourMapVisualization");
            pluginNames->push_back("SpatioTemporalElevationMapVisualization");
            pluginNames->push_back("SpatioTemporalGridMapVisualization");
            pluginNames->push_back("SpatioTemporalMLSMapVisualization");
            pluginNames->push_back("SpatioTemporalOccupancyGridMapVisualization");
            pluginNames->push_back("SpatioTemporalTraversabilityGridVisualization");
            return pluginNames;
        }
        
        QObject* QtPluginVizkitBase::createPlugin(QString const& pluginName)
        {
            vizkit3d::VizPluginBase* plugin = 0;
            if (pluginName == "SpatioTemporalContourMapVisualization")
            {
                plugin = new vizkit3d::SpatioTemporalContourMapVisualization();
            }
            else if (pluginName == "SpatioTemporalElevationMapVisualization")
            {
                plugin = new vizkit3d::SpatioTemporalElevationMapVisualization();
            }
            else if (pluginName == "SpatioTemporalGridMapVisualization")
            {
                plugin = new vizkit3d::SpatioTemporalGridMapVisualization();
            }
            else if (pluginName == "SpatioTemporalMLSMapVisualization")
            {
                plugin = new vizkit3d::SpatioTemporalMLSMapVisualization();
            }
            else if (pluginName == "SpatioTemporalOccupancyGridMapVisualization")
            {
                plugin = new vizkit3d::SpatioTemporalOccupancyGridMapVisualization();
            }
            else if (pluginName == "SpatioTemporalTraversabilityGridVisualization")
            {
                plugin = new vizkit3d::SpatioTemporalTraversabilityGridVisualization();
            }

            if (plugin) 
            {
                return plugin;
            }
            return NULL;
        }
}
