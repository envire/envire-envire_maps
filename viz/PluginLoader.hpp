#ifndef PLUGINLOADER_HPP
#define PLUGINLOADER_HPP

#include <vizkit3d/Vizkit3DPlugin.hpp>

namespace vizkit3d {
    class QtPluginVizkitBase : public vizkit3d::VizkitPluginFactory {
      Q_OBJECT
      Q_PLUGIN_METADATA(IID "rock.vizkit3d.VizkitPluginFactory")
    private:
    public:
      QtPluginVizkitBase();
      virtual QStringList* getAvailablePlugins() const;
      virtual QObject* createPlugin(QString const& pluginName);
    };
}

#endif /*#ifndef PLUGINLOADER_HPP*/
