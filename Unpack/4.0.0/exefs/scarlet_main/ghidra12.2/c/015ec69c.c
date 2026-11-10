/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015ec69c; name: FUN_015ec69c
 */


void FUN_015ec69c(void)

{
  int iVar1;
  
  if (((DAT_048396d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048396d0), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1b01c,&DAT_048396c0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048396d0);
  }
  DAT_048396b8 = DAT_048396c0;
  return;
}


