; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!
#define MyAppName "DNAssist"

[Setup]
AppName={#MyAppName}
AppVersion=3.11
AppVerName={#MyAppName} 3.11
AppPublisher=Miller Cy Chan
AppPublisherURL=https://github.com/dnassist/DNAssist/
AppSupportURL=https://github.com/dnassist/DNAssist/wiki/
AppUpdatesURL=https://github.com/dnassist/DNAssist/releases/
ArchitecturesInstallIn64BitMode=x64
ArchitecturesAllowed=x64
DefaultDirName={pf}\{#MyAppName}
DefaultGroupName={#MyAppName}
DisableProgramGroupPage=yes
OutputBaseFilename={#MyAppName}3_x64
OutputDir=..\..\Release
SolidCompression=yes
UninstallDisplayIcon={app}\{#MyAppName}.exe
VersionInfoDescription={#MyAppName} Setup
VersionInfoVersion=3.1.1

[Tasks]
Name: "quicklaunchicon"; Description: "{cm:CreateQuickLaunchIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked
Name: associate; Description: "&Associate files"; GroupDescription: "File extensions:"

[Files]
Source: "..\..\x64\Release\{#MyAppName}.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "..\..\{#MyAppName}\res\vcomp140.dll"; DestDir: "{sys}"; Flags: onlyifdoesntexist uninsneveruninstall
Source: "..\..\sqlite3\sqlite3-64.dll"; DestDir: "{app}"; DestName: "sqlite3.dll"; Flags: ignoreversion
Source: "..\..\x64\Release\Transfac.db"; DestDir: "{app}"; Flags: onlyifdoesntexist
Source: "..\..\x64\Release\Codon\*"; DestDir: "{app}\Codon"; Flags: onlyifdoesntexist recursesubdirs
Source: "..\..\x64\Release\Enzymes\*"; DestDir: "{app}\Enzymes"; Flags: onlyifdoesntexist recursesubdirs
Source: "..\..\x64\Release\Help\*"; DestDir: "{app}\Help"; Flags: onlyifdoesntexist recursesubdirs
Source: "..\..\x64\Release\Sequences\*"; DestDir: "{app}\Sequences"; Flags: onlyifdoesntexist recursesubdirs
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
Name: "{group}\{#MyAppName}"; Filename: "{app}\{#MyAppName}.exe"
Name: "{group}\{cm:UninstallProgram,{#MyAppName}}"; Filename: "{uninstallexe}"
Name: "{userappdata}\Microsoft\Internet Explorer\Quick Launch\{#MyAppName}"; Filename: "{app}\{#MyAppName}.exe"; Tasks: quicklaunchicon

[Run]
Filename: "{app}\{#MyAppName}.exe"; Description: "{cm:LaunchProgram,{#MyAppName}}"; Flags: nowait runascurrentuser postinstall skipifsilent

[Registry]
Root: HKCU; Subkey: "Software\{#MyAppName}"; Flags: deletekey
Root: HKCU; Subkey: "Software\{#MyAppName}"; Flags: uninsdeletekey
Root: HKCR; Subkey: ".fas"; ValueType: string; ValueName: ""; ValueData: "{#MyAppName}"; Flags: uninsdeletevalue; Tasks: associate
Root: HKCR; Subkey: ".gbk"; ValueType: string; ValueName: ""; ValueData: "{#MyAppName}"; Flags: uninsdeletevalue; Tasks: associate
Root: HKCR; Subkey: ".gcg"; ValueType: string; ValueName: ""; ValueData: "{#MyAppName}"; Flags: uninsdeletevalue; Tasks: associate
Root: HKCR; Subkey: ".seq"; ValueType: string; ValueName: ""; ValueData: "{#MyAppName}"; Flags: uninsdeletevalue; Tasks: associate
Root: HKCR; Subkey: ".str"; ValueType: string; ValueName: ""; ValueData: "{#MyAppName}"; Flags: uninsdeletevalue; Tasks: associate
Root: HKCR; Subkey: "{#MyAppName}"; ValueType: string; ValueName: ""; ValueData: "{#MyAppName}"; Flags: uninsdeletekey; Tasks: associate
Root: HKCR; Subkey: "{#MyAppName}\DefaultIcon"; ValueType: string; ValueName: ""; ValueData: "{app}\{#MyAppName}.exe"
Root: HKCR; Subkey: "{#MyAppName}\shell\open\command"; ValueType: string; ValueName: ""; ValueData: """{app}\{#MyAppName}.exe"" ""%1"""
