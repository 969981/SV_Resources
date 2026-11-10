/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e293c; name: FUN_020e293c
 */


void FUN_020e293c(long param_1)

{
  MutexType *pMVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  pMVar1 = (MutexType *)(param_1 + 0xf0);
  nn::os::LockMutex(pMVar1);
  puVar6 = PTR_DAT_047d8290;
  puVar5 = PTR_DAT_047d8288;
  puVar4 = PTR_DAT_047d8280;
  lVar9 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x18) != lVar9) {
    uVar3 = *(ulong *)(param_1 + 0x48);
    uVar2 = *(long *)(param_1 + 0x50) + uVar3;
    plVar11 = (long *)(lVar9 + (uVar3 >> 6 & 0x3fffffffffffff8));
    lVar9 = *(long *)(lVar9 + (uVar2 >> 6 & 0x3fffffffffffff8));
    puVar13 = (undefined8 *)(*plVar11 + (uVar3 & 0x1ff) * 8);
    while ((undefined8 *)(lVar9 + (uVar2 & 0x1ff) * 8) != puVar13) {
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar4);
      }
      uVar10 = *(undefined8 *)puVar5;
      *(undefined8 *)puVar6 = uVar10;
      puVar12 = puVar13 + 1;
      uVar8 = FUN_00cf8198(*puVar13);
      FUN_020df03c(uVar10,uVar8);
      puVar13 = puVar12;
      if ((long)puVar12 - *plVar11 == 0x1000) {
        plVar11 = plVar11 + 1;
        puVar13 = (undefined8 *)*plVar11;
      }
    }
  }
  lVar9 = *(long *)(param_1 + 0x80);
  if (*(long *)(param_1 + 0x88) != lVar9) {
    uVar3 = *(ulong *)(param_1 + 0xb8);
    uVar2 = *(long *)(param_1 + 0xc0) + uVar3;
    plVar11 = (long *)(lVar9 + (uVar3 >> 6 & 0x3fffffffffffff8));
    lVar9 = *(long *)(lVar9 + (uVar2 >> 6 & 0x3fffffffffffff8));
    puVar13 = (undefined8 *)(*plVar11 + (uVar3 & 0x1ff) * 8);
    while ((undefined8 *)(lVar9 + (uVar2 & 0x1ff) * 8) != puVar13) {
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar4);
      }
      uVar10 = *(undefined8 *)puVar5;
      *(undefined8 *)puVar6 = uVar10;
      uVar8 = FUN_00cf8198(*puVar13);
      FUN_020e2e18(uVar10,uVar8);
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar4);
      }
      uVar10 = *(undefined8 *)puVar5;
      *(undefined8 *)puVar6 = uVar10;
      puVar12 = puVar13 + 1;
      uVar8 = FUN_00cf8198(*puVar13);
      FUN_020df03c(uVar10,uVar8);
      puVar13 = puVar12;
      if ((long)puVar12 - *plVar11 == 0x1000) {
        plVar11 = plVar11 + 1;
        puVar13 = (undefined8 *)*plVar11;
      }
    }
  }
  FUN_020e2ba0(param_1 + 8);
  FUN_020e2ba0(param_1 + 0x78);
  nn::os::UnlockMutex(pMVar1);
  nn::os::FinalizeMutex(pMVar1);
  FUN_020e2d68(param_1 + 0x78);
  FUN_020e2d68(param_1 + 8);
  return;
}


