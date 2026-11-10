/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02efb130; name: FUN_02efb130
 */


void FUN_02efb130(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  
  *param_1 = (long)(PTR_DAT_047e3ff0 + 0x10);
  FUN_02e8304c(param_1 + 0xc,param_1);
  lVar7 = param_1[9];
  if (((lVar7 != 0) && (plVar8 = (long *)(lVar7 + (long)(param_1 + 9)), plVar8 != (long *)0x0)) &&
     (plVar8[1] != 0)) {
    plVar10 = plVar8 + 2;
    do {
      lVar7 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  plVar8 = param_1 + 8;
  lVar7 = *plVar8;
  if ((lVar7 != 0) && (lVar7 != -(long)plVar8)) {
    lVar7 = (**(code **)(*(long *)PTR_DAT_047d19f0 +
                         (ulong)*(byte *)((long)plVar8 + lVar7 + 0x18) * 0x200 + 0x48))();
    if (lVar7 != 0) {
      FUN_02ef2a08(lVar7,param_1,&LAB_02ef29ec,0);
    }
    plVar10 = (long *)0x0;
    if (*plVar8 != 0) {
      plVar10 = (long *)(*plVar8 + (long)plVar8);
    }
    if (plVar10[1] != 0) {
      plVar8 = plVar10 + 2;
      do {
        lVar7 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))();
      }
    }
  }
  puVar6 = PTR_DAT_047e3360;
  if (*PTR_DAT_047e3360 != '\0') {
    plVar8 = (long *)(param_1[0xc] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0xc] & 3U) == 0) {
        param_1[0xc] = (ulong)plVar8 | 1;
        do {
          lVar7 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar7 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0xc] = 0;
        if (*puVar6 == '\0') goto LAB_02efb2ec;
      }
      else {
        do {
          plVar10 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar10 | 1;
          plVar8 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
    plVar8 = (long *)(param_1[0xb] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0xb] & 3U) == 0) {
        param_1[0xb] = (ulong)plVar8 | 1;
        do {
          lVar7 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar7 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0xb] = 0;
      }
      else {
        do {
          plVar10 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar10 | 1;
          plVar8 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_02efb2ec:
  *param_1 = (long)(PTR_DAT_047e3368 + 0x10);
  plVar8 = param_1 + 6;
  uVar3 = *(uint *)(param_1 + 7);
  if (0 < (int)uVar3) {
    lVar7 = 0;
    if (*plVar8 != 0) {
      lVar7 = *plVar8 + (long)plVar8;
    }
    plVar10 = (long *)(lVar7 + (ulong)uVar3 * 8);
    uVar9 = 0;
    do {
      plVar10 = plVar10 + -1;
      if (((*plVar10 != 0) && (plVar2 = (long *)(*plVar10 + (long)plVar10), plVar2 != (long *)0x0))
         && (plVar2[1] != 0)) {
        plVar1 = plVar2 + 2;
        do {
          lVar7 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))();
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar3);
  }
  if (*(int *)((long)param_1 + 0x3c) < 0) {
    lVar7 = 0;
    if (*plVar8 != 0) {
      lVar7 = *plVar8 + (long)plVar8;
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar7,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


