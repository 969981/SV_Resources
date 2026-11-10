/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013143f8; name: FUN_013143f8
 */


void FUN_013143f8(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a8));
  if (*(char *)(param_1 + 800) != '\0') {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar3 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar3;
    plVar2 = *(long **)(*(long *)(lVar3 + 0x200) + 0x60);
    (**(code **)(*plVar2 + 0x68))(plVar2,*(undefined8 *)(param_1 + 0x318));
  }
  *(undefined8 *)(param_1 + 0x318) = param_2;
  *(undefined2 *)(param_1 + 800) = 1;
  *(undefined1 *)(param_1 + 0x322) = 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a8));
  return;
}


