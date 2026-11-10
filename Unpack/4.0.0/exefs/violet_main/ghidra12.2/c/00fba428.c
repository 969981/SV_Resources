/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fba428; name: FUN_00fba428
 */


void FUN_00fba428(undefined8 param_1,locale *param_2,undefined8 param_3)

{
  locale alStack_30 [8];
  locale alStack_28 [8];
  
  std::ios_base::getloc();
  std::ios_base::imbue(param_2);
  std::locale::~locale(alStack_28);
  if (*(long *)(param_2 + 0x28) != 0) {
    FUN_01e4071c(alStack_30,*(long *)(param_2 + 0x28),param_3);
    std::locale::~locale(alStack_30);
  }
  return;
}


