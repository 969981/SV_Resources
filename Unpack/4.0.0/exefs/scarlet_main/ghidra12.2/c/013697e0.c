/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013697e0; name: FUN_013697e0
 */


void FUN_013697e0(long param_1)

{
  undefined1 auVar1 [12];
  
  auVar1 = FUN_01938a30(param_1 + 0x198);
  if ((auVar1._8_4_ == 0) && ((auVar1._0_8_ >> 0x20 & 0xff) != 0)) {
    FUN_00db2500(param_1 + 0x198);
    return;
  }
  return;
}


