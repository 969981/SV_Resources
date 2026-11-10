/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018f2d50; name: FUN_018f2d50
 */


undefined8 FUN_018f2d50(void)

{
  int iVar1;
  
  if (((DAT_04802808 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04802808), iVar1 != 0)) {
    __cxa_guard_release(&DAT_04802808);
  }
  FUN_018f2d98();
  return 0;
}


