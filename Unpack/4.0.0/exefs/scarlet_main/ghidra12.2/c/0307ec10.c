/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0307ec10; name: FUN_0307ec10
 */


long * FUN_0307ec10(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  void *__src;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 1);
    lVar19 = *param_2;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < (int)uVar3) {
      FUN_0307ef7c(param_1,PTR_PTR_047d1a50,(long)(int)uVar3);
    }
    uVar11 = *(uint *)(param_1 + 1);
    if ((int)uVar3 < (int)uVar11) {
      lVar13 = *param_1;
      plVar18 = (long *)(lVar13 + (long)(int)uVar11 * 0x18);
      do {
        plVar9 = plVar18 + -3;
        iVar10 = (int)plVar18[-2];
        if (0 < iVar10) {
          lVar16 = 0;
          do {
            if ((0.0 <= *(float *)(*plVar9 + lVar16 * 0x18 + 8)) &&
               (plVar8 = *(long **)(*plVar9 + lVar16 * 0x18), plVar8 != (long *)0x0)) {
              if (plVar8[1] != 0) {
                plVar15 = plVar8 + 2;
                do {
                  lVar14 = *plVar15;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar6) {
                    *plVar15 = lVar14 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar14 + -1 == 0) {
                  (**(code **)(*plVar8 + 0x18))();
                }
              }
              iVar10 = (int)plVar18[-2];
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 < iVar10);
        }
        *(undefined4 *)(plVar18 + -2) = 0;
        if ((-1 < (int)*(uint *)((long)plVar18 + -0xc)) && (*plVar9 != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*plVar9,(ulong)*(uint *)((long)plVar18 + -0xc) * 0x18);
        }
        plVar18[-3] = 0;
        *(undefined4 *)((long)plVar18 + -0xc) = 0x80000000;
        plVar18 = plVar9;
      } while (plVar9 != (long *)(lVar13 + (long)(int)uVar3 * 0x18));
      uVar11 = *(uint *)(param_1 + 1);
    }
    puVar7 = PTR_PTR_047d1a50;
    lVar13 = *param_1;
    if ((int)uVar3 <= (int)uVar11) {
      uVar11 = uVar3;
    }
    if ((lVar13 != lVar19) && (0 < (int)uVar11)) {
      lVar16 = 0;
      do {
        puVar20 = (undefined8 *)(lVar13 + lVar16);
        puVar2 = (undefined8 *)(lVar19 + lVar16);
        iVar10 = *(int *)(puVar2 + 1);
        __src = (void *)*puVar2;
        if ((int)(*(uint *)((long)puVar20 + 0xc) & 0x7fffffff) < iVar10) {
          FUN_03066780(puVar20,puVar7,(long)iVar10);
        }
        memcpy((void *)*puVar20,__src,(long)iVar10 * 0x18);
        *(int *)(puVar20 + 1) = iVar10;
        lVar16 = lVar16 + 0x18;
        puVar20[2] = puVar2[2];
      } while ((ulong)uVar11 * 0x18 != lVar16);
      lVar13 = *param_1;
    }
    if (0 < (int)(uVar3 - uVar11)) {
      iVar10 = 0;
      plVar18 = (long *)(lVar13 + (long)(int)uVar11 * 0x18);
      puVar20 = (undefined8 *)(lVar19 + (long)(int)uVar11 * 0x18);
      do {
        *plVar18 = 0;
        plVar18[1] = -0x8000000000000000;
        uVar4 = *(uint *)(puVar20 + 1);
        if ((int)uVar4 < 1) {
          *plVar18 = 0;
          plVar18[1] = -0x8000000000000000;
        }
        else {
          plVar8 = (long *)*puVar20;
          plVar9 = (long *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                     (PTR_PTR_047d1a50,(ulong)uVar4 * 0x18);
          *plVar18 = (long)plVar9;
          *(uint *)(plVar18 + 1) = uVar4;
          *(uint *)((long)plVar18 + 0xc) = uVar4;
          if (uVar4 != 1) {
            uVar12 = uVar4 & 0xfffffffe;
            plVar15 = plVar9;
            plVar17 = plVar8;
            do {
              lVar19 = *plVar17;
              *plVar15 = lVar19;
              if ((lVar19 != 0) && (*(long *)(lVar19 + 8) != 0)) {
                plVar9 = (long *)(lVar19 + 0x10);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar6) {
                    *plVar9 = *plVar9 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              lVar19 = plVar17[1];
              plVar9 = plVar15 + 6;
              *(int *)(plVar15 + 2) = (int)plVar17[2];
              plVar15[1] = lVar19;
              lVar19 = plVar17[3];
              plVar8 = plVar17 + 6;
              plVar15[3] = lVar19;
              if ((lVar19 != 0) && (*(long *)(lVar19 + 8) != 0)) {
                plVar1 = (long *)(lVar19 + 0x10);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *plVar1 = *plVar1 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              lVar19 = plVar17[4];
              uVar12 = uVar12 - 2;
              *(int *)(plVar15 + 5) = (int)plVar17[5];
              plVar15[4] = lVar19;
              plVar15 = plVar9;
              plVar17 = plVar8;
            } while (uVar12 != 0);
          }
          if ((uVar4 & 1) != 0) {
            lVar19 = *plVar8;
            *plVar9 = lVar19;
            if ((lVar19 != 0) && (*(long *)(lVar19 + 8) != 0)) {
              plVar15 = (long *)(lVar19 + 0x10);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar6) {
                  *plVar15 = *plVar15 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            lVar19 = plVar8[1];
            *(int *)(plVar9 + 2) = (int)plVar8[2];
            plVar9[1] = lVar19;
          }
        }
        iVar10 = iVar10 + 1;
        plVar18[2] = puVar20[2];
        plVar18 = plVar18 + 3;
        puVar20 = puVar20 + 3;
      } while (iVar10 != uVar3 - uVar11);
    }
    *(uint *)(param_1 + 1) = uVar3;
  }
  return param_1;
}


