/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022014ec; name: FUN_022014ec
 */


undefined8 FUN_022014ec(long param_1,uint param_2,undefined4 *param_3)

{
  MutexType *pMVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  lVar8 = *(long *)(param_1 + 0xc0);
  if ((lVar8 == 0) || (*(uint *)(lVar8 + 0x28) <= param_2)) {
    uVar7 = 0;
  }
  else {
    puVar9 = (undefined8 *)(*(long *)(lVar8 + 0x20) + (long)(int)param_2 * 0x30);
    uVar14 = puVar9[3];
    uVar13 = puVar9[2];
    uVar12 = puVar9[5];
    uVar11 = puVar9[4];
    uVar10 = *puVar9;
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    lVar8 = *(long *)PTR_DAT_047d8c08;
    *(long *)PTR_DAT_047d8c10 = lVar8;
    pMVar1 = (MutexType *)(*(long *)(lVar8 + 0x70) + 0x120);
    nn::os::LockMutex(pMVar1);
    plVar6 = *(long **)(*(long *)(param_1 + 0xb8) + 0x48);
    lVar8 = (**(code **)(*plVar6 + 0x80))(plVar6,uVar10);
    plVar6 = *(long **)(lVar8 + 0x78);
    uVar7 = *(undefined8 *)(lVar8 + 0x98);
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar2 = plVar6 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined8 *)(param_3 + 0xe) = uVar7;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar2 = plVar6 + 2;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    nn::os::UnlockMutex(pMVar1);
    uVar7 = 1;
    *param_3 = (int)uVar10;
    param_3[0xc] = 0;
    *(ulong *)(param_3 + 6) = uVar14 & 0xffffffff;
    *(undefined8 *)(param_3 + 4) = uVar13;
    *(ulong *)(param_3 + 10) = uVar12 & 0xffffffff;
    *(undefined8 *)(param_3 + 8) = uVar11;
  }
  return uVar7;
}


