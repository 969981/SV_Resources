/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


