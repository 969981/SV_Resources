# RomFS 4.0.0 processed outputs

Source: `4.0.0/1/` (Violet 4.0.0). Its inventory/transfer manifest is in the repo root. Some original files are represented by `*.7z.001` etc.; restore and SHA-256 verify them to a **temporary outside-repo working directory** before opening them with gftool or other readers.

Follow the original RomFS hierarchy, then use the original complete filename as a child **directory** for its products:

`audio/wwise/bin/Switch/BGM.bnk` => `Unpack/4.0.0/romfs/audio/wwise/bin/Switch/BGM.bnk/`.

Primary focus: `arc/data.trpfd/` and `arc/data.trpfs/`. For extracted virtual entries from data.trpfs, keep their case-sensitive game-relative paths under `virtual/`; nested parsing belongs under `parsed/` with an additional `<filename.ext>/` directory, and conversions under `converted/`.

Do not confuse a file stored in an archive volume with an already extracted result. Do not auto-publish unverified or restricted game-derived assets.

Additional parsed outputs: `event/trevt/bin/event.trevt/` and `system/prefetch/data/global-resident_{0,1}.trpre/`. Their structures, provenance and reproduction commands are documented at [TREVT/TRPRE](../../../../docs/research/trevt-prefetch-format.md).
