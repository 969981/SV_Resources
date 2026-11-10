/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f314bc; name: FUN_00f314bc
 */


undefined8 FUN_00f314bc(long param_1,uint param_2,undefined4 *param_3)

{
  MutexType *pMVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  lVar10 = *(long *)(param_1 + 0xb8);
  if ((lVar10 == 0) || (*(uint *)(lVar10 + 0x20) <= param_2)) {
    uVar11 = 0;
  }
  else {
    puVar3 = (undefined8 *)(*(long *)(lVar10 + 0x18) + (long)(int)param_2 * 0x40);
    uVar15 = puVar3[1];
    uVar14 = *puVar3;
    uVar13 = puVar3[3];
    uVar12 = puVar3[2];
    uVar4 = *(undefined4 *)(puVar3 + 4);
    uVar11 = puVar3[5];
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    lVar10 = *(long *)PTR_DAT_047d8c08;
    *(long *)PTR_DAT_047d8c10 = lVar10;
    pMVar1 = (MutexType *)(*(long *)(lVar10 + 0x70) + 0x120);
    nn::os::LockMutex(pMVar1);
    plVar9 = *(long **)(*(long *)(param_1 + 0xb8) + 0x48);
    lVar10 = (**(code **)(*plVar9 + 0x80))(plVar9,uVar11);
    plVar9 = *(long **)(lVar10 + 0x78);
    uVar7 = *(undefined8 *)(lVar10 + 0x98);
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar2 = plVar9 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    *param_3 = (int)uVar11;
    *(undefined8 *)(param_3 + 0xe) = uVar7;
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar2 = plVar9 + 2;
      do {
        lVar10 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
    nn::os::UnlockMutex(pMVar1);
    uVar11 = 1;
    param_3[0xc] = uVar4;
    *(ulong *)(param_3 + 6) = uVar15 & 0xffffffff;
    *(undefined8 *)(param_3 + 4) = uVar14;
    *(ulong *)(param_3 + 10) = uVar13 & 0xffffffff;
    *(undefined8 *)(param_3 + 8) = uVar12;
  }
  return uVar11;
}


