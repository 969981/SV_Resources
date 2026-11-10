/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d2994; name: FUN_029d2994
 */


void FUN_029d2994(void)

{
  int iVar1;
  
  if (((DAT_0486af98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486af98), iVar1 != 0)) {
    FUN_029d4800();
    DAT_0486af90 = &DAT_0486af80;
    __cxa_guard_release(&DAT_0486af98);
    return;
  }
  return;
}


