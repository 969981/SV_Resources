/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0328ba90; name: FUN_0328ba90
 */


undefined8 FUN_0328ba90(void)

{
  undefined8 uVar1;
  
  if (DAT_0488aca0 == (code *)0x0) {
    DAT_0488aca0 = FUN_0328b7a0;
    FUN_03341b00(&DAT_0488ac98);
    uVar1 = 0;
    DAT_0488ac98 = *(ulong *)PTR_DAT_047e61c0 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047e61c0 = &DAT_0488ac98;
  }
  else {
    uVar1 = 0x80040200;
  }
  return uVar1;
}


