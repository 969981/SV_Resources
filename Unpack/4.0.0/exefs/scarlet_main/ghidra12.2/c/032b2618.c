/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032b2618; name: FUN_032b2618
 */


undefined8 FUN_032b2618(void)

{
  undefined8 uVar1;
  
  if (DAT_0488b048 == (code *)0x0) {
    DAT_0488b048 = FUN_032b25b0;
    FUN_03341b00(&DAT_0488b040);
    uVar1 = 0;
    DAT_0488b040 = *(ulong *)PTR_DAT_047e61c0 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047e61c0 = &DAT_0488b040;
  }
  else {
    uVar1 = 0x80040200;
  }
  return uVar1;
}


