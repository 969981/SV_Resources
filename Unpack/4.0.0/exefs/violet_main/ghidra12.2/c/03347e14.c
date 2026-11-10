/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03347e14; name: FUN_03347e14
 */


long * FUN_03347e14(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  
  lVar10 = *param_2;
  nn::os::LockMutex((MutexType *)(lVar10 + 0x188));
  if (-1 < (int)param_1[1]) {
    lVar11 = *param_1;
    nn::os::LockMutex((MutexType *)(lVar11 + 0x188));
    *(undefined8 *)(*(long *)(*param_1 + 0x1a8) + (long)(int)param_1[1] * 0x10) = 0;
    plVar7 = (long *)*param_1;
    *param_1 = 0;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar8 = plVar7 + 2;
      do {
        lVar13 = *plVar8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    nn::os::UnlockMutex((MutexType *)(lVar11 + 0x188));
  }
  lVar11 = *param_2;
  puVar1 = (undefined8 *)(*(long *)(lVar11 + 0x1a8) + (long)(int)param_2[1] * 0x10);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  nn::os::LockMutex((MutexType *)(lVar11 + 0x188));
  uVar14 = *(uint *)(lVar11 + 0x1b0);
  if (0 < (int)uVar14) {
    uVar12 = 0;
    lVar13 = 8;
    do {
      lVar2 = *(long *)(lVar11 + 0x1a8) + lVar13;
      if (*(long *)(lVar2 + -8) == 0) {
        *(undefined8 *)(lVar2 + -8) = uVar3;
        uVar14 = (uint)uVar12;
        *(undefined8 *)(*(long *)(lVar11 + 0x1a8) + lVar13) = uVar4;
        if (*(uint *)(lVar11 + 0x1b0) != uVar14) goto LAB_03347f74;
        break;
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x10;
    } while (uVar14 != uVar12);
  }
  uVar9 = uVar14;
  if ((int)(*(uint *)(lVar11 + 0x1b4) & 0x7fffffff) <= (int)uVar14) {
    FUN_0334aad8((long *)(lVar11 + 0x1a8),PTR_PTR_047d1a50,(long)(int)(uVar14 + 1));
    uVar9 = *(uint *)(lVar11 + 0x1b0);
  }
  puVar1 = (undefined8 *)(*(long *)(lVar11 + 0x1a8) + (long)(int)uVar9 * 0x10);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  *(uint *)(lVar11 + 0x1b0) = uVar14 + 1;
LAB_03347f74:
  nn::os::UnlockMutex((MutexType *)(lVar11 + 0x188));
  *(uint *)(param_1 + 1) = uVar14;
  plVar8 = (long *)*param_1;
  plVar7 = (long *)*param_2;
  if (plVar8 != plVar7) {
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar7 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *plVar7 = *plVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar8 = (long *)*param_1;
      plVar7 = (long *)*param_2;
    }
    *param_1 = (long)plVar7;
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar7 = plVar8 + 2;
      do {
        lVar11 = *plVar7;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *plVar7 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(lVar10 + 0x188));
  return param_1;
}


