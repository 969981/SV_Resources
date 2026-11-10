/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e6060; name: FUN_003e6060
 */


undefined8 FUN_003e6060(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0049e510(&DAT_047f1808,0);
  if ((int)uVar2 != 0) {
    iVar1 = FUN_0049e510(&DAT_047f1810,0);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_0049e670(&DAT_047f1808);
    uVar2 = 0;
  }
  return uVar2;
}


