/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026d8978; name: FUN_026d8978
 */


void FUN_026d8978(void)

{
  int iVar1;
  
  if (((DAT_04859288 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859288), iVar1 != 0)) {
    FUN_026d8cac();
    DAT_04859280 = &DAT_04859270;
    __cxa_guard_release(&DAT_04859288);
    return;
  }
  return;
}


