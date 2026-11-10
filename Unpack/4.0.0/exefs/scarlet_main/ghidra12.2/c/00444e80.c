/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


