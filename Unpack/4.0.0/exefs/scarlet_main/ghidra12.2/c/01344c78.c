/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01344c78; name: FUN_01344c78
 */


void FUN_01344c78(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  code *local_a0;
  code *local_98;
  undefined1 auStack_80 [96];
  
  if (((DAT_04840880 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04840880), iVar2 != 0)) {
    FUN_00100190(&LAB_02af6da4,&DAT_04840870,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840880);
  }
  lVar1 = DAT_04840870;
  DAT_04840868 = DAT_04840870;
  if (DAT_04840870 != 0) {
    local_a0 = (code *)0x0;
    local_98 = (code *)0x0;
    if ((code *)param_1[2] != (code *)0x0) {
      (*(code *)param_1[2])(param_1 + 4,auStack_80);
      local_98 = (code *)param_1[1];
      local_a0 = (code *)*param_1;
    }
    nn::os::LockMutex((MutexType *)(lVar1 + 0x28));
    (*local_a0)(auStack_80);
    nn::os::UnlockMutex((MutexType *)(lVar1 + 0x28));
    if (local_98 != (code *)0x0) {
      (*local_98)(auStack_80);
    }
  }
  return;
}


