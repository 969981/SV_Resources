# Items, ribbons and type icons

Examples:
- virtual/appli/tex/icon_item/item_0001/item_0001.bntx
- virtual/appli/tex/icon_ribbon/icon_ribbon_001/icon_ribbon_001.bntx
- virtual/appli/tex/icon_type/tga_sch/typeIcon_text_00_normal_00/

R1 starts by validating BNTX metadata and accepting independently verified
PNG conversion. The number in item_0001 or icon_ribbon_001 is a native
resource name, NOT automatically a gameplay item/ribbon enum ID.

Target: resources/items/icons, resources/ribbons/icons and indexes linked
to native tables, explicit source paths, language, and evidence status.
Only confirmed semantic links enter application-facing game ID exports.
