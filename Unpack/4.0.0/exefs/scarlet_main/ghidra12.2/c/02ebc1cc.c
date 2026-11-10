/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ebc1cc; name: FUN_02ebc1cc
 */


void FUN_02ebc1cc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  
  *param_1 = (long)(PTR_DAT_047e34a0 + 0x10);
  lVar6 = param_1[9];
  if (((lVar6 != 0) && (plVar8 = (long *)(lVar6 + (long)(param_1 + 9)), plVar8 != (long *)0x0)) &&
     (plVar8[1] != 0)) {
    plVar10 = plVar8 + 2;
    do {
      lVar6 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  plVar8 = param_1 + 0xe;
  uVar3 = *(uint *)(param_1 + 0xf);
  if (0 < (int)uVar3) {
    lVar6 = 0;
    if (*plVar8 != 0) {
      lVar6 = *plVar8 + (long)plVar8;
    }
    lVar6 = lVar6 + (ulong)uVar3 * 0x40;
    uVar9 = 0;
    do {
      plVar10 = (long *)(lVar6 + -0x10);
      lVar6 = lVar6 + -0x40;
      if ((*plVar10 != 0) && (plVar2 = (long *)(*plVar10 + (long)plVar10), plVar2 != (long *)0x0)) {
        if (plVar2[1] != 0) {
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
        *plVar10 = 0;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar3);
  }
  if (*(int *)((long)param_1 + 0x7c) < 0) {
    lVar6 = 0;
    if (*plVar8 != 0) {
      lVar6 = *plVar8 + (long)plVar8;
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar6,0);
  }
  lVar6 = param_1[10];
  if (*(int *)((long)param_1 + 0x5c) < 0) {
    lVar7 = 0;
    if (lVar6 != 0) {
      lVar7 = lVar6 + (long)(param_1 + 10);
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar7,0);
  }
  *param_1 = (long)(PTR_DAT_047e3368 + 0x10);
  plVar8 = param_1 + 6;
  uVar3 = *(uint *)(param_1 + 7);
  if (0 < (int)uVar3) {
    lVar6 = 0;
    if (*plVar8 != 0) {
      lVar6 = *plVar8 + (long)plVar8;
    }
    plVar10 = (long *)(lVar6 + (ulong)uVar3 * 8);
    uVar9 = 0;
    do {
      plVar10 = plVar10 + -1;
      if (((*plVar10 != 0) && (plVar2 = (long *)(*plVar10 + (long)plVar10), plVar2 != (long *)0x0))
         && (plVar2[1] != 0)) {
        plVar1 = plVar2 + 2;
        do {
          lVar6 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))();
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar3);
  }
  if (*(int *)((long)param_1 + 0x3c) < 0) {
    lVar6 = 0;
    if (*plVar8 != 0) {
      lVar6 = *plVar8 + (long)plVar8;
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar6,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


