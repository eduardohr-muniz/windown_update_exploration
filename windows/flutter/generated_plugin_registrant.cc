//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <auto_update/auto_update_plugin.h>
#include <auto_updater/auto_updater_plugin.h>

void RegisterPlugins(flutter::PluginRegistry* registry) {
  AutoUpdatePluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("AutoUpdatePlugin"));
  AutoUpdaterPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("AutoUpdaterPlugin"));
}
