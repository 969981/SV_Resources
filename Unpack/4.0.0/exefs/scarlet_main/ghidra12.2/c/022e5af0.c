/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022e5af0; name: FUN_022e5af0
 */


void FUN_022e5af0(void)

{
  int iVar1;
  
  if (((DAT_04844960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04844960), iVar1 != 0)) {
    FUN_022e5c6c();
    DAT_04844958 = &DAT_04844968;
    __cxa_guard_release(&DAT_04844960);
    return;
  }
  return;
}


