/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03275270; name: FUN_03275270
 */


undefined8 FUN_03275270(void)

{
  undefined8 uVar1;
  
  if (DAT_0488a8f8 == (code *)0x0) {
    DAT_0488a8f8 = FUN_032751c0;
    FUN_03341b00(&DAT_0488a8f0);
    uVar1 = 0;
    DAT_0488a8f0 = *(ulong *)PTR_DAT_047e61c0 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047e61c0 = &DAT_0488a8f0;
  }
  else {
    uVar1 = 0x80040200;
  }
  return uVar1;
}


