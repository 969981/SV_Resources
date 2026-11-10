/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290244c; name: FUN_0290244c
 */


undefined8 * FUN_0290244c(void)

{
  int iVar1;
  
  if (((DAT_0486a1a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486a1a0), iVar1 != 0)) {
    DAT_0486a198 = FUN_029024a0();
    __cxa_guard_release(&DAT_0486a1a0);
  }
  return &DAT_0486a198;
}


