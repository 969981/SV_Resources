/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


