#include "include/html_delta_converter/html_delta_converter_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "html_delta_converter_plugin.h"

void HtmlDeltaConverterPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  html_delta_converter::HtmlDeltaConverterPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
