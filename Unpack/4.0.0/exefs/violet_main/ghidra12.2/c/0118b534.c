/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0118b534; name: FUN_0118b534
 */


void FUN_0118b534(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  char *pcVar4;
  long *local_18;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x428));
  pcVar4 = *(char **)(param_2 + 8);
  if (*pcVar4 == '\0') {
    local_18 = (long *)FUN_00d44228();
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 0x18))(local_18);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar2;
    FUN_00cf9884(&local_18,uVar2,pcVar4);
  }
  plVar3 = *(long **)(param_1 + 0x740);
  *(undefined8 *)(param_1 + 0x740) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(long **)(param_1 + 0x740) = local_18;
  *(undefined1 *)(param_1 + 0x748) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x428));
  return;
}


