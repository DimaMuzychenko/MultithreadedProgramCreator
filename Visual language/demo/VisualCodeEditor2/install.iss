; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "Visual Code Editor"
#define MyAppVersion "1.0"
#define MyAppPublisher "北京华瑞奥途科技有限公司"
#define MyAppURL "https://www.huaruirobot.com"
#define MyAppExeName "VisualCodeEditor.exe"

[Setup]
; NOTE: The value of AppId uniquely identifies this application. Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{42C977A0-7829-4A67-992D-AEFA89712874}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={autopf}\Huarui\VisualCodeEditor
DisableProgramGroupPage=yes
; Uncomment the following line to run in non administrative install mode (install for current user only.)
;PrivilegesRequired=lowest
PrivilegesRequiredOverridesAllowed=commandline
OutputDir=C:\Users\weihuajiang\Desktop\VisualCodeEditor\install
OutputBaseFilename=VisualCodeEditor
Compression=lzma
SolidCompression=yes
WizardStyle=modern
ArchitecturesAllowed=x86 x64
ArchitecturesInstallIn64BitMode=x64  
PrivilegesRequired=admin

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"
Name: "chinesesimplified"; MessagesFile: "compiler:Languages\ChineseSimplified.isl"

[Files]    
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\zh-CN\Array.resources.dll"; DestDir: "{app}\zh-CN"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\zh-CN\Canvas.resources.dll"; DestDir: "{app}\zh-CN"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\zh-CN\Collection.resources.dll"; DestDir: "{app}\zh-CN"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\zh-CN\Console.resources.dll"; DestDir: "{app}\zh-CN"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\zh-CN\DataStructure.resources.dll"; DestDir: "{app}\zh-CN"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\zh-CN\EV3.resources.dll"; DestDir: "{app}\zh-CN"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\zh-CN\Math.resources.dll"; DestDir: "{app}\zh-CN"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\zh-CN\ScriptEditor.resources.dll"; DestDir: "{app}\zh-CN"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\zh-CN\ScriptEngine.resources.dll"; DestDir: "{app}\zh-CN"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\zh-CN\Speech.resources.dll"; DestDir: "{app}\zh-CN"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\zh-CN\String.resources.dll"; DestDir: "{app}\zh-CN"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\zh-CN\Thread.resources.dll"; DestDir: "{app}\zh-CN"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\zh-CN\Translation.resources.dll"; DestDir: "{app}\zh-CN"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\zh-CN\VisualCodeEditor.resources.dll"; DestDir: "{app}\zh-CN"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\Array.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\Canvas.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\Collection.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\Console.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\DataStructure.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\EV3.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\FontAwesome.WPF.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\InTheHand.Net.Personal.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\Math.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\Newtonsoft.Json.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\ScriptEditor.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\ScriptEngine.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\Speech.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\String.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\Thread.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\ToastNotifications.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\ToastNotifications.Messages.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\Translation.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\video2.mp4"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\VisualCodeEditor.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\VisualCodeEditor.exe.config"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Workspace\WPF-Blocky\demo\VisualCodeEditor2\bin\Release\WPFToolkit.Extended.dll"; DestDir: "{app}"; Flags: ignoreversion
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
Name: "{autoprograms}\{#MyAppName}"; Filename: "{app}\VisualCodeEditor.exe"
Name: "{autodesktop}\{#MyAppName}"; Filename: "{app}\VisualCodeEditor.exe"; 

[Run]
Filename: "{app}\VisualCodeEditor.exe"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent

[Code]
function Framework472IsNotInstalled(): Boolean;
var
  bSuccess: Boolean;  
  regVersion: Cardinal;
begin
  Result := True;
  bSuccess := RegQueryDWordValue(HKLM, 'Software\Microsoft\NET Framework Setup\NDP\v4\Full', 'Release', regVersion);
  if (bSuccess) and (regVersion >= 461808) then begin
    Result := False;
  end;
end;

function InstallFramework472(): Boolean;
var
  path: String;
  notInstalled: Boolean;
  ResultCode: Integer;
begin
  notInstalled:=Framework472IsNotInstalled();
  path:='DotNetFramework472\NDP472-KB4054530-x86-x64-AllOS-ENU.exe';
  if notInstalled then begin
    ExecAsOriginalUser('certutil.exe','-addstore Root DotNetFramework472\MicrosoftRootCertificateAuthority2011.cer', '', SW_SHOWNORMAL, ewWaitUntilTerminated, ResultCode);
    Exec(path, '/q /norestart', '', SW_SHOWNORMAL, ewWaitUntilTerminated, ResultCode);
  end;
  Result:=True;
end;
function PrepareToInstall(var NeedsRestart: Boolean): String;
begin
  // 'NeedsRestart' only has an effect if we return a non-empty string, thus aborting the installation.
  // If the installers indicate that they want a restart, this should be done at the end of installation.
  // Therefore we set the global 'restartRequired' if a restart is needed, and return this from NeedRestart()

  if Framework472IsNotInstalled() then
  begin
    InstallFramework472();
  end;
end;