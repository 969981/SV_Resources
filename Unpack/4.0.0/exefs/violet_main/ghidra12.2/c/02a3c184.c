/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a3c184; name: FUN_02a3c184
 */


void FUN_02a3c184(undefined8 *param_1)

{
  MutexType *pMVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 local_d0 [28];
  
  puVar5 = PTR_DAT_047d8c10;
  puVar4 = PTR_DAT_047d8c08;
  puVar3 = PTR_DAT_047d8c00;
  if (DAT_0483afb0 == '\0') {
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    lVar8 = *(long *)puVar4;
    *(long *)puVar5 = lVar8;
    lVar8 = *(long *)(lVar8 + 0x70);
    pMVar1 = (MutexType *)(lVar8 + 0x120);
    nn::os::LockMutex(pMVar1);
    uVar9 = *(undefined8 *)(*(long *)(lVar8 + 8) + 0x8b0);
    local_d0[0] = 0;
    FUN_00cb4dc0(0x411cf5c3,local_d0,1);
    FUN_00cb4dc0(0x411cf5c3,local_d0,1);
    local_d0[0] = 1;
    uVar6 = FUN_0133a350(uVar9,local_d0);
    nn::os::UnlockMutex(pMVar1);
    DAT_0483afb2 = uVar6;
    if (DAT_0483afb0 == '\0') {
      DAT_0483afb0 = '\x01';
    }
  }
  else {
  }
  uVar6 = DAT_0483afb2;
  *param_1 = 0x3f8000003f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3f800000;
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar8 = *(long *)puVar4;
  *(long *)puVar5 = lVar8;
  lVar8 = *(long *)(lVar8 + 0x70);
  pMVar1 = (MutexType *)(lVar8 + 0x120);
  nn::os::LockMutex(pMVar1);
  lVar8 = *(long *)(*(long *)(*(long *)(lVar8 + 8) + 0x8b0) + 0x40);
  nn::os::UnlockMutex(pMVar1);
  lVar8 = lVar8 + (ulong)uVar6 * 0x70;
  uVar2 = *(undefined4 *)(lVar8 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)(lVar8 + 8);
  *(undefined4 *)((long)param_1 + 4) = uVar2;
  uVar2 = *(undefined4 *)(lVar8 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar8 + 0x10);
  *(undefined4 *)((long)param_1 + 0xc) = uVar2;
  uVar2 = *(undefined4 *)(lVar8 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar8 + 0x18);
  *(undefined4 *)((long)param_1 + 0x14) = uVar2;
  uVar2 = *(undefined4 *)(lVar8 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar8 + 0x20);
  *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
  return;
}


