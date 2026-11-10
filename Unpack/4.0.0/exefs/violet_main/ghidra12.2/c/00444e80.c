/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00444e80; name: FUN_00444e80
 */


void FUN_00444e80(void)

{
  int iVar1;
  
  iVar1 = FUN_00446030(0,0);
  if (iVar1 == 0) {
    DAT_047f185c = 0;
    return;
  }
  DAT_047f1860 = FUN_0047e540();
  DAT_047f185c = (uint)(DAT_047f1860 != 0);
  return;
}


