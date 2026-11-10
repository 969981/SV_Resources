/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03218200; name: FUN_03218200
 */


void FUN_03218200(long param_1,long *param_2,long *param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  
  lVar13 = *param_2;
  lVar2 = param_2[1];
  plVar11 = (long *)param_2[2];
  if (((ulong)plVar11 & 1) != 0) {
    piVar1 = (int *)(((ulong)plVar11 & 0xfffffffffffffffe) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar14 = *param_3;
  lVar3 = param_3[1];
  plVar10 = (long *)param_3[2];
  if (((ulong)plVar10 & 1) == 0) {
    if (0 < param_6) {
LAB_03218290:
      iVar15 = 0;
      do {
        plVar12 = *(long **)(param_1 + 0x290);
        iVar7 = (int)plVar12[1];
        lVar8 = (long)iVar7;
        if ((int)(*(uint *)((long)plVar12 + 0xc) & 0x7fffffff) <= iVar7) {
          FUN_032153fc(plVar12,lVar8 + 1);
          iVar7 = (int)plVar12[1];
        }
        lVar6 = *plVar12;
        plVar9 = (long *)(lVar6 + (long)iVar7 * 0x30);
        *plVar9 = lVar13;
        plVar9[1] = lVar2;
        plVar9[2] = (long)plVar11;
        if (((ulong)plVar11 & 1) != 0) {
          piVar1 = (int *)(((ulong)plVar11 & 0xfffffffffffffffe) + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar6 = lVar6 + (long)iVar7 * 0x30;
        *(long **)(lVar6 + 0x28) = plVar10;
        *(long *)(lVar6 + 0x18) = lVar14;
        *(long *)(lVar6 + 0x20) = lVar3;
        if (((ulong)plVar10 & 1) != 0) {
          piVar1 = (int *)(((ulong)plVar10 & 0xfffffffffffffffe) + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *(int *)(plVar12 + 1) = (int)(lVar8 + 1);
        plVar12 = (long *)((ulong)plVar11 & 0xfffffffffffffffe);
        if (((ulong)plVar11 & 1) != 0) {
          plVar11 = plVar12 + 1;
          do {
            lVar8 = *plVar11;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *(int *)plVar11 = (int)lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((plVar12 != (long *)0x0) && ((int)lVar8 == 1)) {
            (**(code **)(*plVar12 + 8))(plVar12);
          }
        }
        lVar13 = lVar13 + param_4;
        lVar14 = lVar14 + param_5;
        plVar11 = (long *)((ulong)plVar10 & 0xfffffffffffffffe);
        if (((ulong)plVar10 & 1) != 0) {
          plVar10 = plVar11 + 1;
          do {
            lVar8 = *plVar10;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *(int *)plVar10 = (int)lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((plVar11 != (long *)0x0) && ((int)lVar8 == 1)) {
            (**(code **)(*plVar11 + 8))(plVar11);
          }
        }
        iVar15 = iVar15 + 1;
        plVar10 = plVar11;
        plVar11 = plVar12;
      } while (iVar15 != param_6);
      return;
    }
  }
  else {
    plVar9 = (long *)((ulong)plVar10 & 0xfffffffffffffffe);
    plVar12 = plVar9 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (0 < param_6) goto LAB_03218290;
    do {
      lVar13 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = (int)lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar13 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  if (((ulong)plVar11 & 1) != 0) {
    plVar11 = (long *)((ulong)plVar11 & 0xfffffffffffffffe);
    plVar10 = plVar11 + 1;
    do {
      lVar13 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = (int)lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar13 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0321843c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 8))();
      return;
    }
  }
  return;
}


