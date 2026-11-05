# R3 — TRMDL / TRMSH dependency recovery

Original source under [[../../README|SV 4.0.0]]:

Unpack/4.0.0/romfs/arc/data.trpfs/virtual/

## Verified original files

chara/model_pc/p0_bag0000_schoolbackpack/p0_bag0000_00_bag00.trmdl

- TRMDL has three mesh paths: p0_bag0000_00_bag00.trmsh,
  p0_bag0000_00_bag00_lod1.trmsh,
  p0_bag0000_00_bag00_lod2.trmsh.
- Skeleton: p0_bag0000_00_bag00.trskl.
- Material parameters: p0_bag0000_00_bag00.trmtr.
- TRMSH field 2 has an explicit reference to the associated TRMBF
  (three separate vertex/index buffers in this example).
- Other files include .trmmt and BCn .bntx textures; suffix-based or
  prefix-based dependencies are candidates only without native call evidence.

Reference schemas:
- tools/PokeDocs/SV/Flatbuffers/model/trmdl.fbs
- tools/PokeDocs/SV/Flatbuffers/model/trmsh.fbs
- tools/PokeDocs/SV/Flatbuffers/model/trmbf.fbs
- tools/PokeDocs/SV/Flatbuffers/model/trmtr.fbs
- tools/PokeDocs/SV/Flatbuffers/model/trskl.fbs
- tools/PokeDocs/SV/Flatbuffers/animation/tranm.fbs
- tools/PokeDocs/SV/Flatbuffers/animation/tracm.fbs

Code: scripts/resource_pipeline/r3_objects.py.

Source and dependencies are read-only and retained. The parsed object graph
contains exact original paths, confidence (TRMDL/TRMSH or candidates),
whether dependencies are locally available, source fingerprints and an
explicit list of missing required assets.

## Converting the model

The pre-existing tools/gftool/TrinityModelViewer/Export/GltfExporter.cs
implements glTF 2.0 with geometry, materials, textures, skinning and optional
bone animation. R3 adds an independent command-line executable that compiles the upstream\nexporter source unchanged:

    SV.R3.ModelExport.exe input.trmdl output.gltf

Full model extraction is not the same as simply parsing its TRMDL header.
When GLTF has been exported, run the structural verifier to check:
- glTF 2.0 schema's top-level objects, meshes, accessors, buffers, nodes
- material references and UV0 when textures are used
- file presence and declared byte lengths of external images/buffers
- skin node indices and inverse bind matrix accessors
- animation sampler/target integrity and requested animation presence
- expected number of mesh LODs

These checks cannot prove correct shader appearance, normals, weight painting,
animation playback or texture orientation; visual review is separately
required before promotion into resources/geometry/source_verified.

No game species ID is inferred from native resource filename prefixes.
