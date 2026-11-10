/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f1c06c; name: FUN_02f1c06c
 */


void FUN_02f1c06c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  MutexType *pMVar10;
  long lVar11;
  
  pMVar10 = (MutexType *)param_1[8];
  *param_1 = (long)(PTR_DAT_047e4700 + 0x10);
  puVar4 = PTR_DAT_047d1a08;
  if (pMVar10 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar10);
    (**(code **)(puVar4 + 8))(0,pMVar10,0);
  }
  iVar8 = (int)param_1[10];
  if (0 < iVar8) {
    lVar11 = 0;
    do {
      lVar6 = param_1[9];
      if (0.0 <= *(float *)(lVar6 + lVar11 * 0x50 + 0x28)) {
        plVar5 = *(long **)(lVar6 + lVar11 * 0x50 + 8);
        if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
          plVar1 = plVar5 + 2;
          do {
            lVar9 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))();
          }
        }
        uVar7 = *(ulong *)(lVar6 + lVar11 * 0x50);
        if ((uVar7 & 1) != 0) {
          (**(code **)(puVar4 + 8))(0,uVar7 - 1,0);
        }
        iVar8 = (int)param_1[10];
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar8);
  }
  if (param_1[0xb] != 0) {
    (**(code **)(puVar4 + 8))(0,param_1[0xb],0);
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[9],(ulong)*(uint *)((long)param_1 + 0x54) * 0x50);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  puVar4 = PTR_DAT_047e3360;
  if (*PTR_DAT_047e3360 != '\0') {
    plVar5 = (long *)(param_1[7] & 0xfffffffffffffffc);
    if (plVar5 != (long *)0x0) {
      if ((param_1[7] & 3U) == 0) {
        param_1[7] = (ulong)plVar5 | 1;
        do {
          lVar11 = *plVar5;
          plVar5 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          (**(code **)(lVar11 + 8))();
        } while (plVar5 != (long *)0x0);
        param_1[7] = 0;
        if (*puVar4 == '\0') goto LAB_02f1c390;
      }
      else {
        do {
          plVar1 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          plVar5[1] = (ulong)plVar1 | 1;
          plVar5 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar5 = (long *)(param_1[6] & 0xfffffffffffffffc);
    if (plVar5 != (long *)0x0) {
      if ((param_1[6] & 3U) == 0) {
        param_1[6] = (ulong)plVar5 | 1;
        do {
          lVar11 = *plVar5;
          plVar5 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          (**(code **)(lVar11 + 8))();
        } while (plVar5 != (long *)0x0);
        param_1[6] = 0;
        if (*puVar4 == '\0') goto LAB_02f1c390;
      }
      else {
        do {
          plVar1 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          plVar5[1] = (ulong)plVar1 | 1;
          plVar5 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar5 = (long *)(param_1[5] & 0xfffffffffffffffc);
    if (plVar5 != (long *)0x0) {
      if ((param_1[5] & 3U) == 0) {
        param_1[5] = (ulong)plVar5 | 1;
        do {
          lVar11 = *plVar5;
          plVar5 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          (**(code **)(lVar11 + 8))();
        } while (plVar5 != (long *)0x0);
        param_1[5] = 0;
        if (*puVar4 == '\0') goto LAB_02f1c390;
      }
      else {
        do {
          plVar1 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          plVar5[1] = (ulong)plVar1 | 1;
          plVar5 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar5 = (long *)(param_1[4] & 0xfffffffffffffffc);
    if (plVar5 != (long *)0x0) {
      if ((param_1[4] & 3U) == 0) {
        param_1[4] = (ulong)plVar5 | 1;
        do {
          lVar11 = *plVar5;
          plVar5 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          (**(code **)(lVar11 + 8))();
        } while (plVar5 != (long *)0x0);
        param_1[4] = 0;
        if (*puVar4 == '\0') goto LAB_02f1c390;
      }
      else {
        do {
          plVar1 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          plVar5[1] = (ulong)plVar1 | 1;
          plVar5 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar5 = (long *)(param_1[3] & 0xfffffffffffffffc);
    if (plVar5 != (long *)0x0) {
      if ((param_1[3] & 3U) == 0) {
        param_1[3] = (ulong)plVar5 | 1;
        do {
          lVar11 = *plVar5;
          plVar5 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          (**(code **)(lVar11 + 8))();
        } while (plVar5 != (long *)0x0);
        param_1[3] = 0;
      }
      else {
        do {
          plVar1 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          plVar5[1] = (ulong)plVar1 | 1;
          plVar5 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
  }
LAB_02f1c390:
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


