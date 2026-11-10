/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e42164; name: FUN_01e42164
 */


void FUN_01e42164(void)

{
  int iVar1;
  
  if (((DAT_048384a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048384a8), iVar1 != 0)) {
    FUN_00100190(&LAB_00aa89a4,&DAT_04838498,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048384a8);
  }
  FUN_0121ae00(&DAT_04838498,0);
  return;
}


