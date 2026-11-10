/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a3c388; name: FUN_02a3c388
 */


void FUN_02a3c388(undefined4 *param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_d0 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  
  puVar4 = PTR_DAT_047d8c10;
  puVar3 = PTR_DAT_047d8c08;
  puVar2 = PTR_DAT_047d8c00;
  if (DAT_0483afb0 == '\0') {
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    lVar7 = *(long *)puVar3;
    *(long *)puVar4 = lVar7;
    lVar7 = *(long *)(lVar7 + 0x70);
    pMVar1 = (MutexType *)(lVar7 + 0x120);
    nn::os::LockMutex(pMVar1);
    uVar8 = *(undefined8 *)(*(long *)(lVar7 + 8) + 0x8b0);
    local_d0[0] = 0;
    FUN_00cb4dc0(0x411cf5c3,local_d0,1);
    FUN_00cb4dc0(0x411cf5c3,local_d0,1);
    local_d0[0] = 1;
    uVar5 = FUN_0133a350(uVar8,local_d0);
    nn::os::UnlockMutex(pMVar1);
    DAT_0483afb2 = uVar5;
    if (DAT_0483afb0 == '\0') {
      DAT_0483afb0 = '\x01';
    }
  }
  else {
  }
  uVar5 = DAT_0483afb2;
  local_d0[0] = 0;
  FUN_00cb4dc0(0x411cf5c3,local_d0,1);
  local_c8 = *param_1;
  uStack_c4 = param_1[1];
  local_c0 = param_1[2];
  uStack_bc = param_1[3];
  local_b8 = param_1[4];
  uStack_b4 = param_1[5];
  local_b0 = param_1[6];
  uStack_ac = param_1[7];
  if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar7 = *(long *)puVar3;
  *(long *)puVar4 = lVar7;
  lVar7 = *(long *)(lVar7 + 0x70);
  pMVar1 = (MutexType *)(lVar7 + 0x120);
  nn::os::LockMutex(pMVar1);
  FUN_02f1e834(*(undefined8 *)(*(long *)(lVar7 + 8) + 0x8b0),uVar5,local_d0);
  nn::os::UnlockMutex(pMVar1);
  return;
}


