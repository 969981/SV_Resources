/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03318350; name: FUN_03318350
 */


undefined8 FUN_03318350(void)

{
  undefined8 uVar1;
  
  if (DAT_0488cd18 == (code *)0x0) {
    DAT_0488cd18 = FUN_03318300;
    FUN_03341b00(&DAT_0488cd10);
    uVar1 = 0;
    DAT_0488cd10 = *(ulong *)PTR_DAT_047e61c0 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047e61c0 = &DAT_0488cd10;
  }
  else {
    uVar1 = 0x80040200;
  }
  return uVar1;
}


