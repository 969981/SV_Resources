"""Static guardrails for the experimental .NET 10 upgrade.

This is not a runtime functionality test. Build and real format round-trip tests
remain mandatory before the net10 branch can replace the .NET Framework build.
"""
from pathlib import Path
import xml.etree.ElementTree as ET

ROOT = Path(__file__).resolve().parents[1]
PROJECTS = (
    "Toolbox/Toolbox.csproj",
    "Switch_Toolbox_Library/Toolbox_Library.csproj",
    "File_Format_Library/File_Format_Library.csproj",
    "BrawlboxHelper/BrawlboxHelper.csproj",
    "Updater/Updater.csproj",
)

def main():
    failures = []
    for name in PROJECTS:
        project = ROOT / name
        root = ET.parse(project).getroot()
        framework = root.findtext(".//TargetFramework")
        if framework != "net10.0-windows":
            failures.append(f"{name}: wrong TFM: {framework}")
        sdk = root.attrib.get("Sdk")
        if sdk != "Microsoft.NET.Sdk":
            failures.append(f"{name}: not an SDK-style project")
        refs = list(root.iter("ProjectReference"))
        for ref in refs:
            rel = ref.get("Include", "").replace(chr(92), "/")
            if not (project.parent / rel).is_file():
                failures.append(f"{name}: unresolved ProjectReference: {rel}")
        missing = []
        for ref in root.iter("Reference"):
            hint = ref.findtext("HintPath")
            if not hint:
                continue
            path = project.parent / hint.replace(chr(92), "/")
            if not path.is_file():
                missing.append(hint)
        if missing:
            failures.extend(f"{name}: missing precompiled dependency {x}" for x in missing)
        print(f"{name}: SDK={sdk}, TFM={framework}, projectRefs={len(refs)}, missing DLL hints={len(missing)}")
    if failures:
        print("\n".join(failures))
        raise SystemExit(1)
    print("Static SDK/project reference checks passed (NOT a runtime compatibility certificate).")

if __name__ == "__main__":
    main()
