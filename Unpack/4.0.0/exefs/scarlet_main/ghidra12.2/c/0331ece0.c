/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0331ece0; name: FUN_0331ece0
 */


void FUN_0331ece0(undefined8 *param_1,ulong param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong *puVar10;
  long *plVar11;
  ulong local_30 [2];
  
  puVar6 = (ulong *)param_1[1];
  uVar7 = *puVar6;
  puVar10 = puVar6;
  if ((uVar7 & 1) == 0) {
    puVar9 = puVar6;
    do {
      puVar9 = (ulong *)puVar9[1];
    } while ((*puVar9 & 1) == 0);
    if ((puVar6 != (ulong *)0x0) && ((puVar9[2] & 0x1f) == 2)) {
      if ((uVar7 & 1) == 0) {
        do {
          puVar10 = (ulong *)puVar10[1];
        } while ((*puVar10 & 1) == 0);
      }
      goto LAB_0331ed64;
    }
    if ((uVar7 & 1) == 0) {
      puVar9 = puVar6;
      do {
        puVar9 = (ulong *)puVar9[1];
      } while ((*puVar9 & 1) == 0);
      if (puVar6 == (ulong *)0x0) {
        return;
      }
      if ((puVar9[2] & 0x1f) != 4) {
        return;
      }
      do {
        puVar10 = (ulong *)puVar10[1];
      } while ((*puVar10 & 1) == 0);
      goto LAB_0331edf4;
    }
  }
  else if ((puVar6 != (ulong *)0x0) && ((puVar6[2] & 0x1f) == 2)) {
LAB_0331ed64:
    if ((puVar10[2] & 0x1f) == 2) {
      uVar8 = *param_1;
      uVar7 = param_1[2];
      if ((uVar7 & 1) != 0) {
        piVar1 = (int *)((uVar7 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar7 = param_1[2];
      }
    }
    else {
      uVar7 = 0;
      puVar6 = (ulong *)0x0;
      uVar8 = 0;
    }
    plVar11 = (long *)(uVar7 & 0xfffffffffffffffe);
    (**(code **)(*plVar11 + 0x30))(plVar11,uVar8,puVar6,param_2 & 1);
    if ((uVar7 & 1) != 0) {
      plVar2 = plVar11 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar11 != (long *)0x0) && ((int)lVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0331ee94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar11 + 8))(plVar11);
        return;
      }
    }
    return;
  }
  if (puVar6 == (ulong *)0x0) {
    return;
  }
  if ((puVar6[2] & 0x1f) != 4) {
    return;
  }
LAB_0331edf4:
  if ((puVar10[2] & 0x1f) == 4) {
    uVar8 = *param_1;
    uVar7 = param_1[2];
    if ((uVar7 & 1) != 0) {
      piVar1 = (int *)((uVar7 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar7 = param_1[2];
    }
  }
  else {
    uVar8 = 0;
    puVar6 = (ulong *)0x0;
    uVar7 = 0;
  }
  local_30[0] = param_2 & 1;
  plVar11 = (long *)(uVar7 & 0xfffffffffffffffe);
  local_30[1] = 0;
  (**(code **)(*plVar11 + 0x30))(plVar11,uVar8,puVar6,local_30);
  if ((uVar7 & 1) == 0) {
    return;
  }
  plVar2 = plVar11 + 1;
  do {
    lVar5 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = (int)lVar5 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (plVar11 == (long *)0x0) {
    return;
  }
  if ((int)lVar5 == 1) {
    (**(code **)(*plVar11 + 8))(plVar11);
    return;
  }
  return;
}


