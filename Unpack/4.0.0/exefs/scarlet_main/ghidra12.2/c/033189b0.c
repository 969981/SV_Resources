/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033189b0; name: FUN_033189b0
 */


undefined8 FUN_033189b0(void)

{
  undefined8 uVar1;
  
  if (DAT_0488ce80 == (code *)0x0) {
    DAT_0488ce80 = FUN_03318960;
    FUN_03341b00(&DAT_0488ce78);
    uVar1 = 0;
    DAT_0488ce78 = *(ulong *)PTR_DAT_047e61c0 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047e61c0 = &DAT_0488ce78;
  }
  else {
    uVar1 = 0x80040200;
  }
  return uVar1;
}


