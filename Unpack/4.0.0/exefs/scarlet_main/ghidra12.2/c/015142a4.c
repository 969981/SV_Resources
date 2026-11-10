/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015142a4; name: FUN_015142a4
 */


void FUN_015142a4(void)

{
  int iVar1;
  
  if (((DAT_0486ade0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486ade0), iVar1 != 0)) {
    FUN_029b1bb0();
    DAT_0486add8 = &DAT_0486ada8;
    __cxa_guard_release(&DAT_0486ade0);
    return;
  }
  return;
}


