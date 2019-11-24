To install the plugin to a launcher version of the engine, first try to install the plugin from the marketplace. In the case there are issuses, you can copy the plugins folder and paste the folder in  ... 
<Epic Games Install Directory>/<Engine Version>/Engine 
To install to a source directory, it will be a similar path but the engine folder will be located in the folder you installed the engine source to.
<Where you installed source code>/Engine

Another options is to copy the the plugins folder to a folder where a .uproject is located. This will associate the plugin with a given project and will build the plugin when the project is built rather then when the engine is built. Note! - By doing this, the plugin will only be present for projects that you have copied the plugins folder to. If you want the plugin to always be loaded, install to an engine directory from the first steps. 

In the case you are adding this to a source project and the substance plugin will not load, delete the Substance_UE4_Plugin_4.x.x.x\Plugins\Runtime\Substance\Binaries folder and rebuild the project your plugin is associated with. (If at the project level, rebuild project and if at the engine level, rebuild the engine.)