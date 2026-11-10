/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c8f04; name: FUN_001c8f04
 */


undefined * FUN_001c8f04(void)

{
  int iVar1;
  
  if ((DAT_047ecd88 & 1) == 0) {
    iVar1 = FUN_001c8880(&DAT_047ecd90,7,PTR_LAB_047cb958,PTR_DAT_047cb960,FUN_001c8f6c);
    if (iVar1 != 0) {
      return (undefined *)0x0;
    }
    DAT_047ecd88 = 1;
  }
  return &DAT_047ecd90;
}


