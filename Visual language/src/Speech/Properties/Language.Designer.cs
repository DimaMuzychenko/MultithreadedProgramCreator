//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version:4.0.30319.42000
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace ScratchNet.Properties {
    using System;
    
    
    /// <summary>
    ///   A strongly-typed resource class, for looking up localized strings, etc.
    /// </summary>
    // This class was auto-generated by the StronglyTypedResourceBuilder
    // class via a tool like ResGen or Visual Studio.
    // To add or remove a member, edit your .ResX file then rerun ResGen
    // with the /str option, or rebuild your VS project.
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("System.Resources.Tools.StronglyTypedResourceBuilder", "16.0.0.0")]
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
    [global::System.Runtime.CompilerServices.CompilerGeneratedAttribute()]
    internal class Language {
        
        private static global::System.Resources.ResourceManager resourceMan;
        
        private static global::System.Globalization.CultureInfo resourceCulture;
        
        [global::System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode")]
        internal Language() {
        }
        
        /// <summary>
        ///   Returns the cached ResourceManager instance used by this class.
        /// </summary>
        [global::System.ComponentModel.EditorBrowsableAttribute(global::System.ComponentModel.EditorBrowsableState.Advanced)]
        internal static global::System.Resources.ResourceManager ResourceManager {
            get {
                if (object.ReferenceEquals(resourceMan, null)) {
                    global::System.Resources.ResourceManager temp = new global::System.Resources.ResourceManager("ScratchNet.Properties.Language", typeof(Language).Assembly);
                    resourceMan = temp;
                }
                return resourceMan;
            }
        }
        
        /// <summary>
        ///   Overrides the current thread's CurrentUICulture property for all
        ///   resource lookups using this strongly typed resource class.
        /// </summary>
        [global::System.ComponentModel.EditorBrowsableAttribute(global::System.ComponentModel.EditorBrowsableState.Advanced)]
        internal static global::System.Globalization.CultureInfo Culture {
            get {
                return resourceCulture;
            }
            set {
                resourceCulture = value;
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to Speech synthesis library to generate speech for text.
        /// </summary>
        internal static string Description {
            get {
                return ResourceManager.GetString("Description", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to Value is not number.
        /// </summary>
        internal static string NotNumber {
            get {
                return ResourceManager.GetString("NotNumber", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to get or set speech rate, range -10 - 10.
        /// </summary>
        internal static string RateDescription {
            get {
                return ResourceManager.GetString("RateDescription", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to value was out of range -10 to 10.
        /// </summary>
        internal static string RateOutOfRange {
            get {
                return ResourceManager.GetString("RateOutOfRange", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to select vocice.
        /// </summary>
        internal static string SelectDescription {
            get {
                return ResourceManager.GetString("SelectDescription", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to setting.
        /// </summary>
        internal static string SettingCategory {
            get {
                return ResourceManager.GetString("SettingCategory", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to speark setting.
        /// </summary>
        internal static string SettingCategoryDesc {
            get {
                return ResourceManager.GetString("SettingCategoryDesc", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to speak asychronize.
        /// </summary>
        internal static string SpeakAsyncDescription {
            get {
                return ResourceManager.GetString("SpeakAsyncDescription", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to speak.
        /// </summary>
        internal static string SpeakCategory {
            get {
                return ResourceManager.GetString("SpeakCategory", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to speak text.
        /// </summary>
        internal static string SpeakCategoryDesc {
            get {
                return ResourceManager.GetString("SpeakCategoryDesc", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to speak.
        /// </summary>
        internal static string SpeakDescription {
            get {
                return ResourceManager.GetString("SpeakDescription", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to Speech.
        /// </summary>
        internal static string Title {
            get {
                return ResourceManager.GetString("Title", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to get or set speech volume, range 0 - 100.
        /// </summary>
        internal static string VolumeDescription {
            get {
                return ResourceManager.GetString("VolumeDescription", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to value was out of range 0-100.
        /// </summary>
        internal static string VolumeOutOfRange {
            get {
                return ResourceManager.GetString("VolumeOutOfRange", resourceCulture);
            }
        }
    }
}
