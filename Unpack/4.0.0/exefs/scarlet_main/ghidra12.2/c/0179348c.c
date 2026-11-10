/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0179348c; name: FUN_0179348c
 */


void FUN_0179348c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  if ((DAT_0483a128 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0483a128);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b52dc4,&DAT_0483a118,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483a128);
    }
  }
  DAT_0483a110 = DAT_0483a118;
  if ((DAT_0483a118 == 0) && (lVar2 = FUN_0179352c(param_1), lVar2 != 0)) {
    FUN_01793be8();
    return;
  }
  return;
}


