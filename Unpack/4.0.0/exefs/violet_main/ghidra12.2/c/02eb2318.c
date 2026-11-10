/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eb2318; name: FUN_02eb2318
 */


void FUN_02eb2318(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  
  *param_1 = (long)(PTR_DAT_047e3498 + 0x10);
  FUN_02e8304c(param_1 + 0x17,param_1);
  plVar7 = param_1 + 10;
  if ((*plVar7 != 0) && (plVar10 = (long *)(*plVar7 + (long)plVar7), plVar10 != (long *)0x0)) {
    if (plVar10[1] != 0) {
      plVar2 = plVar10 + 2;
      do {
        lVar8 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))();
      }
    }
    *plVar7 = 0;
  }
  puVar6 = PTR_DAT_047e3360;
  if (*PTR_DAT_047e3360 != '\0') {
    plVar7 = (long *)(param_1[0x17] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0x17] & 3U) == 0) {
        param_1[0x17] = (ulong)plVar7 | 1;
        do {
          lVar8 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar8 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0x17] = 0;
        if (*puVar6 == '\0') goto LAB_02eb244c;
      }
      else {
        do {
          plVar10 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar10 | 1;
          plVar7 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
    plVar7 = (long *)(param_1[0x16] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0x16] & 3U) == 0) {
        param_1[0x16] = (ulong)plVar7 | 1;
        do {
          lVar8 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar8 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0x16] = 0;
      }
      else {
        do {
          plVar10 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar10 | 1;
          plVar7 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_02eb244c:
  plVar7 = (long *)param_1[9];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar10 = plVar7 + 2;
    do {
      lVar8 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_047e3368 + 0x10);
  plVar7 = param_1 + 6;
  uVar3 = *(uint *)(param_1 + 7);
  if (0 < (int)uVar3) {
    lVar8 = 0;
    if (*plVar7 != 0) {
      lVar8 = *plVar7 + (long)plVar7;
    }
    plVar10 = (long *)(lVar8 + (ulong)uVar3 * 8);
    uVar9 = 0;
    do {
      plVar10 = plVar10 + -1;
      if (((*plVar10 != 0) && (plVar2 = (long *)(*plVar10 + (long)plVar10), plVar2 != (long *)0x0))
         && (plVar2[1] != 0)) {
        plVar1 = plVar2 + 2;
        do {
          lVar8 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))();
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar3);
  }
  if (*(int *)((long)param_1 + 0x3c) < 0) {
    lVar8 = 0;
    if (*plVar7 != 0) {
      lVar8 = *plVar7 + (long)plVar7;
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar8,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


