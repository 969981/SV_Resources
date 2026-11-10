/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033035d0; name: FUN_033035d0
 */


undefined8 FUN_033035d0(void)

{
  undefined8 uVar1;
  
  if (DAT_0488c580 == (code *)0x0) {
    DAT_0488c580 = FUN_03303280;
    FUN_03341b00(&DAT_0488c578);
    uVar1 = 0;
    DAT_0488c578 = *(ulong *)PTR_DAT_047e61c0 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047e61c0 = &DAT_0488c578;
  }
  else {
    uVar1 = 0x80040200;
  }
  return uVar1;
}


