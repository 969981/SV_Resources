/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f024fc; name: FUN_00f024fc
 */


void FUN_00f024fc(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar3 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar3;
    nn::os::LockMutex((MutexType *)(lVar3 + 0x150));
    uVar6 = *(undefined8 *)(lVar3 + 0x128);
    uVar5 = *(undefined8 *)(lVar3 + 0x120);
    nn::os::UnlockMutex((MutexType *)(lVar3 + 0x150));
    local_d0 = uVar5;
    uStack_c8 = uVar6;
    FUN_00f026a0(*(undefined8 *)(param_1 + 0x178),&local_d0);
    if (*(char *)(param_1 + 0x1c0) == '\0') {
      local_c0 = &LAB_020de8a8;
      local_b8 = FUN_02acacf4;
      local_b0 = &LAB_02acacf8;
      local_a8 = &LAB_02acad04;
      alStack_a0[0] = param_1;
      FUN_00f02cac(*(undefined8 *)(param_1 + 0x178),&local_c0);
      pcVar1 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = (undefined1 *)0x0;
        local_a8 = (undefined1 *)0x0;
        local_c0 = (undefined1 *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar1)(alStack_a0);
      }
    }
    FUN_00f042b4(param_1,&local_d0);
    nn::os::LockMutex((MutexType *)(param_1 + 0x158));
    for (plVar4 = *(long **)(param_1 + 0x78); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      lVar3 = plVar4[3];
      nn::os::LockMutex((MutexType *)(lVar3 + 0x1310));
      iVar2 = *(int *)(lVar3 + 0x48) + 1;
      *(int *)(lVar3 + 0x48) = iVar2;
      if (*(int *)(lVar3 + 0x44) <= iVar2) {
        FUN_00f027e4(lVar3,&local_d0);
        *(undefined4 *)(lVar3 + 0x48) = 0;
      }
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x1310));
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x158));
  }
  return;
}


