# Pokemon resource reconstruction

Native evidence:
- virtual/pokemon/catalog/catalog/poke_resource_table.trpmcatalog
- virtual/pokemon/data/pm0025/pm0025_00_00/
- virtual/avalon/data/personal_array.bin

Relevant pinned schemas:
- tools/PokeDocs/SV/Flatbuffers/resources/trpmcatalog.fbs
- tools/PokeDocs/SV/Flatbuffers/pml/personal.fbs
- tools/PokeDocs/SV/Flatbuffers/model/trmdl.fbs and trmbf.fbs

Target: resources/pokemon/species/<species_id>/forms/<form_id>/ with
icon/model/animation references and provenance. The catalog schema includes
species, form, gender, model_path, animation paths and icon_path; verify
actual file contents and exact associations before publishing game IDs.

R2 is NOT implemented by R0/R1. The files are indexed, not decoded into
fully validated species stats.
