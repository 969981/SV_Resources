/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ee8d2c; name: FUN_02ee8d2c
 */


long * FUN_02ee8d2c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  uint uVar16;
  long local_58;
  
  if (param_2 != param_1) {
    lVar10 = 0;
    if (*param_2 != 0) {
      lVar10 = *param_2 + (long)param_2;
    }
    uVar8 = *(uint *)(param_2 + 1);
    uVar9 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
    lVar12 = *param_1;
    uVar14 = uVar9;
    if ((int)uVar9 <= (int)uVar8) {
      uVar14 = uVar8;
    }
    if (lVar10 == 0 || uVar14 == 0) {
      uVar9 = *(uint *)(param_1 + 1);
      if (0 < (int)uVar9) {
        lVar10 = 0;
        if (lVar12 != 0) {
          lVar10 = lVar12 + (long)param_1;
        }
        plVar15 = (long *)(lVar10 + (ulong)uVar9 * 8);
        uVar14 = 0;
        do {
          plVar15 = plVar15 + -1;
          if (((*plVar15 != 0) &&
              (plVar2 = (long *)(*plVar15 + (long)plVar15), plVar2 != (long *)0x0)) &&
             (plVar2[1] != 0)) {
            plVar1 = plVar2 + 2;
            do {
              lVar10 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar10 + -1 == 0) {
              (**(code **)(*plVar2 + 0x18))();
            }
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar9);
      }
      if (*(int *)((long)param_1 + 0xc) < 0) {
        lVar10 = 0;
        if (*param_1 != 0) {
          lVar10 = *param_1 + (long)param_1;
        }
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar10,0);
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      uVar16 = *(uint *)(param_1 + 1);
      lVar7 = 0;
      if (lVar12 != 0) {
        lVar7 = lVar12 + (long)param_1;
      }
      if (0 < (int)uVar16) {
        plVar15 = (long *)(lVar7 + (ulong)uVar16 * 8);
        uVar9 = 0;
        do {
          plVar15 = plVar15 + -1;
          if (((*plVar15 != 0) &&
              (plVar2 = (long *)(*plVar15 + (long)plVar15), plVar2 != (long *)0x0)) &&
             (plVar2[1] != 0)) {
            plVar1 = plVar2 + 2;
            do {
              lVar12 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar12 + -1 == 0) {
              (**(code **)(*plVar2 + 0x18))();
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar16);
        uVar8 = *(uint *)(param_2 + 1);
        uVar9 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
        uVar16 = *(uint *)(param_1 + 1);
      }
      puVar6 = PTR_DAT_047d1a08;
      if ((int)uVar9 <= (int)uVar8) {
        uVar9 = uVar8;
      }
      uVar3 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if ((int)uVar3 <= (int)uVar16) {
        uVar3 = uVar16;
      }
      if (uVar9 != uVar3) {
        if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
          lVar12 = 0;
          if (*param_1 != 0) {
            lVar12 = *param_1 + (long)param_1;
          }
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar12,0);
        }
        local_58 = (ulong)uVar14 << 3;
        lVar7 = (**(code **)puVar6)(0,&local_58,0);
        uVar8 = *(uint *)(param_2 + 1);
      }
      if (0 < (int)uVar8) {
        uVar11 = 0;
        do {
          plVar15 = (long *)(lVar7 + uVar11 * 8);
          *plVar15 = 0;
          plVar2 = (long *)(lVar10 + uVar11 * 8);
          lVar13 = *plVar2;
          lVar12 = 0;
          if (lVar13 != 0) {
            lVar12 = (long)plVar2 + (lVar13 - (long)plVar15);
          }
          *plVar15 = lVar12;
          lVar13 = lVar12 + (long)plVar15;
          if ((lVar12 != 0 && lVar13 != 0) && (*(long *)(lVar13 + 8) != 0)) {
            plVar15 = (long *)(lVar13 + 0x10);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar5) {
                *plVar15 = *plVar15 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar8);
      }
      lVar10 = 0;
      if (lVar7 != 0) {
        lVar10 = lVar7 - (long)param_1;
      }
      *param_1 = lVar10;
      *(int *)(param_1 + 1) = (int)param_2[1];
      uVar9 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
      if ((int)uVar9 <= (int)*(uint *)(param_2 + 1)) {
        uVar9 = *(uint *)(param_2 + 1);
      }
      *(uint *)((long)param_1 + 0xc) = uVar9 | 0x80000000;
    }
  }
  return param_1;
}


