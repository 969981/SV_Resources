/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb3dbc; name: FUN_01fb3dbc
 */


void FUN_01fb3dbc(void)

{
  int iVar1;
  
  if (((DAT_0483b190 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483b190), iVar1 != 0)) {
    FUN_00100190(&LAB_02a3f0a4,&DAT_0483b180,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483b190);
  }
  FUN_01803684(&DAT_0483b180,0);
  return;
}


