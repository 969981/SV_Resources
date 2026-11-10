/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031a1ce4; name: FUN_031a1ce4
 */


void FUN_031a1ce4(long *param_1,long *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  undefined2 *puVar12;
  long lVar13;
  long lVar14;
  undefined2 *puVar15;
  int iVar16;
  long *plVar17;
  uint uVar18;
  long lVar19;
  long *plVar20;
  
  param_1[2] = 1;
  puVar6 = PTR_DAT_047e5890;
  *(undefined1 *)((long)param_1 + 0x15c) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = -0x8000000000000000;
  param_1[0x2a] = -0x8000000000000000;
  param_1[0x28] = -0x8000000000000000;
  param_1[0x29] = 0;
  *(int *)(param_1 + 0x2b) = (int)param_2[0x2b];
  *(int *)(param_1 + 0x23) = (int)param_2[0x23];
  uVar18 = *(uint *)(param_2 + 0x23);
  if (0 < (int)uVar18) {
    if (uVar18 == 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      plVar17 = param_1 + 4;
      plVar20 = param_2 + 4;
      do {
        plVar17[-1] = plVar20[-1];
        uVar11 = uVar11 + 2;
        *plVar17 = *plVar20;
        plVar17 = plVar17 + 2;
        plVar20 = plVar20 + 2;
      } while (((ulong)uVar18 & 0xfffffffe) != uVar11);
    }
    if ((uVar18 & 1) != 0) {
      param_1[uVar11 + 3] = param_2[uVar11 + 3];
    }
  }
  plVar17 = param_1 + 0x29;
  if (param_2 == param_1) {
    uVar18 = *(uint *)(param_1 + 0x2a);
  }
  else {
    uVar18 = *(uint *)(param_2 + 0x28);
    lVar19 = param_2[0x27];
    if ((int)(*(uint *)((long)param_1 + 0x144) & 0x7fffffff) < (int)uVar18) {
      FUN_031a2f9c(param_1 + 0x27,(long)(int)uVar18);
    }
    uVar3 = *(uint *)(param_1 + 0x28);
    lVar14 = param_1[0x27];
    uVar9 = uVar3;
    if ((int)uVar18 <= (int)uVar3) {
      uVar9 = uVar18;
    }
    if ((lVar14 != lVar19) && (0 < (int)uVar9)) {
      if (uVar9 == 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        do {
          puVar1 = (undefined2 *)(lVar19 + uVar11 * 2);
          puVar2 = (undefined2 *)(lVar14 + uVar11 * 2);
          uVar11 = uVar11 + 2;
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
        } while (((ulong)uVar9 & 0xfffffffe) != uVar11);
      }
      if ((uVar9 & 1) != 0) {
        *(undefined2 *)(lVar14 + uVar11 * 2) = *(undefined2 *)(lVar19 + uVar11 * 2);
      }
      lVar14 = param_1[0x27];
    }
    if ((int)uVar3 < (int)uVar18) {
      puVar1 = (undefined2 *)(lVar19 + (long)(int)uVar9 * 2);
      puVar2 = (undefined2 *)(lVar14 + (long)(int)uVar9 * 2);
      uVar3 = uVar18 - uVar9 & 3;
      if (2 < uVar18 + ~uVar9) {
        iVar16 = -(uVar18 - uVar9 & 0xfffffffc);
        puVar12 = puVar1;
        puVar15 = puVar2;
        do {
          *puVar15 = *puVar12;
          puVar15[1] = puVar12[1];
          puVar15[2] = puVar12[2];
          puVar1 = puVar12 + 4;
          puVar2 = puVar15 + 4;
          iVar16 = iVar16 + 4;
          puVar15[3] = puVar12[3];
          puVar12 = puVar1;
          puVar15 = puVar2;
        } while (iVar16 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
    }
    *(uint *)(param_1 + 0x28) = uVar18;
    uVar18 = *(uint *)(param_2 + 0x2a);
    lVar19 = param_2[0x29];
    if ((int)(*(uint *)((long)param_1 + 0x154) & 0x7fffffff) < (int)uVar18) {
      FUN_031a30b0(plVar17,(long)(int)uVar18);
    }
    uVar9 = *(uint *)(param_1 + 0x2a);
    if ((int)uVar18 < (int)uVar9) {
      lVar14 = *plVar17;
      plVar20 = (long *)(lVar14 + (long)(int)uVar9 * 0x18);
      do {
        plVar20 = plVar20 + -3;
        plVar7 = (long *)*plVar20;
        if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
          plVar10 = plVar7 + 2;
          do {
            lVar13 = *plVar10;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))();
          }
        }
      } while (plVar20 != (long *)(lVar14 + (long)(int)uVar18 * 0x18));
      uVar9 = *(uint *)(param_1 + 0x2a);
    }
    lVar14 = *plVar17;
    if ((int)uVar18 <= (int)uVar9) {
      uVar9 = uVar18;
    }
    if ((lVar14 != lVar19) && (0 < (int)uVar9)) {
      uVar11 = 0;
      do {
        plVar7 = (long *)(lVar19 + uVar11 * 0x18);
        plVar10 = (long *)(lVar14 + uVar11 * 0x18);
        plVar8 = (long *)*plVar10;
        plVar20 = (long *)*plVar7;
        if (plVar8 != plVar20) {
          if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
            plVar20 = plVar20 + 2;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar5) {
                *plVar20 = *plVar20 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            plVar8 = (long *)*plVar10;
            plVar20 = (long *)*plVar7;
          }
          *plVar10 = (long)plVar20;
          if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
            plVar20 = plVar8 + 2;
            do {
              lVar13 = *plVar20;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar5) {
                *plVar20 = lVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar13 + -1 == 0) {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
        }
        lVar13 = plVar7[1];
        uVar11 = uVar11 + 1;
        *(char *)(plVar10 + 2) = (char)plVar7[2];
        plVar10[1] = lVar13;
      } while (uVar11 != uVar9);
      lVar14 = *plVar17;
    }
    if (0 < (int)(uVar18 - uVar9)) {
      iVar16 = 0;
      plVar20 = (long *)(lVar14 + (long)(int)uVar9 * 0x18);
      plVar7 = (long *)(lVar19 + (long)(int)uVar9 * 0x18);
      do {
        lVar19 = *plVar7;
        *plVar20 = lVar19;
        if ((lVar19 != 0) && (*(long *)(lVar19 + 8) != 0)) {
          plVar10 = (long *)(lVar19 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = *plVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar19 = plVar7[1];
        iVar16 = iVar16 + 1;
        *(char *)(plVar20 + 2) = (char)plVar7[2];
        plVar20[1] = lVar19;
        plVar20 = plVar20 + 3;
        plVar7 = plVar7 + 3;
      } while (iVar16 != uVar18 - uVar9);
    }
    *(uint *)(param_1 + 0x2a) = uVar18;
  }
  if (0 < (int)uVar18) {
    uVar11 = 0;
    do {
      plVar7 = (long *)(*plVar17 + uVar11 * 0x18);
      plVar20 = (long *)(**(code **)(*(long *)*plVar7 + 0x20))();
      if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
        plVar10 = plVar20 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar10 = (long *)*plVar7;
      *plVar7 = (long)plVar20;
      if (plVar10 != (long *)0x0) {
        if (plVar10[1] != 0) {
          plVar20 = plVar10 + 2;
          do {
            lVar19 = *plVar20;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar5) {
              *plVar20 = lVar19 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar19 + -1 == 0) {
            (**(code **)(*plVar10 + 0x18))(plVar10);
          }
        }
        plVar20 = (long *)*plVar7;
      }
      if (plVar20[1] != 0) {
        plVar7 = plVar20 + 2;
        do {
          lVar19 = *plVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar19 + -1 == 0) {
          (**(code **)(*plVar20 + 0x18))();
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar18);
  }
  iVar16 = (int)param_1[0x23];
  if ((int)(*(uint *)((long)param_1 + 300) & 0x7fffffff) < iVar16) {
    FUN_031a2e00(param_1 + 0x24,(long)iVar16);
  }
  if ((int)param_1[0x25] != iVar16) {
    *(int *)(param_1 + 0x25) = iVar16;
  }
  *(undefined1 *)((long)param_1 + 0x166) = 0;
  return;
}


