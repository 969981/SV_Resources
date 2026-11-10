/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030cff68; name: FUN_030cff68
 */


void FUN_030cff68(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  
  uVar21 = *(uint *)(param_1 + 0x28);
  uVar22 = (ulong)uVar21;
  if (0 < (int)uVar21) {
    puVar1 = PTR_DAT_047e5118 + 0x10;
    lVar24 = uVar22 * 0x38 + -0x18;
    lVar25 = 1;
    do {
      lVar13 = *(long *)(param_1 + 0x20) + lVar24;
      if (*(char *)(lVar13 + 0x15) != '\0') {
        (**(code **)(*(long *)(lVar13 + -0x20) + 8))(lVar13 + -0x20);
        iVar16 = *(int *)(param_1 + 0x28);
        iVar19 = iVar16 + -1;
        *(int *)(param_1 + 0x28) = iVar19;
        if (uVar21 + (int)lVar25 + -1 != iVar16) {
          plVar9 = (long *)(*(long *)(param_1 + 0x20) + (long)iVar19 * 0x38);
          plVar10 = (long *)(*(long *)(param_1 + 0x20) + lVar24);
          plVar10[-3] = 0xffffffff;
          plVar10[-2] = 1;
          plVar10[-4] = (long)puVar1;
          plVar10[-1] = plVar9[3];
          plVar9[3] = 0;
          *plVar10 = plVar9[4];
          lVar13 = plVar9[5];
          plVar9[4] = 0;
          *(undefined8 *)((long)plVar10 + 0xe) = *(undefined8 *)((long)plVar9 + 0x2e);
          plVar10[1] = lVar13;
          (**(code **)(*plVar9 + 8))();
        }
      }
      lVar25 = lVar25 + -1;
      lVar24 = lVar24 + -0x38;
    } while (1 < (long)(uVar22 + lVar25));
    uVar22 = (ulong)*(uint *)(param_1 + 0x28);
  }
  if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < (int)param_4[1] + (int)uVar22) {
    FUN_030d23d0(param_4);
    uVar22 = (ulong)*(uint *)(param_1 + 0x28);
  }
  if (0 < (int)uVar22) {
    lVar25 = 0;
    lVar24 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x20) + lVar25 + 0x20) == 0) {
        lVar13 = param_4[1];
        *(int *)(param_4 + 1) = (int)lVar13 + 1;
        plVar10 = (long *)(*param_4 + (long)(int)lVar13 * 0x10);
        *(undefined4 *)(plVar10 + 1) = 0;
        *(undefined4 *)((long)plVar10 + 0xc) =
             *(undefined4 *)(*(long *)(param_1 + 0x20) + lVar25 + 0x30);
        *plVar10 = *(long *)(param_1 + 0x20) + lVar25;
        uVar22 = (ulong)*(uint *)(param_1 + 0x28);
      }
      lVar24 = lVar24 + 1;
      lVar25 = lVar25 + 0x38;
    } while (lVar24 < (int)uVar22);
  }
  uVar21 = *(uint *)(param_1 + 0x38);
  uVar22 = (ulong)uVar21;
  if (0 < (int)uVar21) {
    puVar1 = PTR_DAT_047e5120 + 0x10;
    lVar24 = uVar22 * 0x38 + -0x18;
    lVar25 = 1;
    do {
      lVar13 = *(long *)(param_1 + 0x30) + lVar24;
      if (*(char *)(lVar13 + 0x15) != '\0') {
        (**(code **)(*(long *)(lVar13 + -0x20) + 8))(lVar13 + -0x20);
        iVar16 = *(int *)(param_1 + 0x38);
        iVar19 = iVar16 + -1;
        *(int *)(param_1 + 0x38) = iVar19;
        if (uVar21 + (int)lVar25 + -1 != iVar16) {
          plVar9 = (long *)(*(long *)(param_1 + 0x30) + (long)iVar19 * 0x38);
          plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar24);
          plVar10[-3] = 0xffffffff;
          plVar10[-2] = 1;
          plVar10[-4] = (long)puVar1;
          plVar10[-1] = plVar9[3];
          plVar9[3] = 0;
          *plVar10 = plVar9[4];
          lVar13 = plVar9[5];
          plVar9[4] = 0;
          *(undefined8 *)((long)plVar10 + 0xe) = *(undefined8 *)((long)plVar9 + 0x2e);
          plVar10[1] = lVar13;
          (**(code **)(*plVar9 + 8))();
        }
      }
      lVar25 = lVar25 + -1;
      lVar24 = lVar24 + -0x38;
    } while (1 < (long)(uVar22 + lVar25));
    uVar22 = (ulong)*(uint *)(param_1 + 0x38);
  }
  if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < (int)param_4[1] + (int)uVar22) {
    FUN_030d23d0(param_4);
    uVar22 = (ulong)*(uint *)(param_1 + 0x38);
  }
  if (0 < (int)uVar22) {
    lVar25 = 0;
    lVar24 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x30) + lVar25 + 0x20) == 0) {
        lVar13 = param_4[1];
        *(int *)(param_4 + 1) = (int)lVar13 + 1;
        plVar10 = (long *)(*param_4 + (long)(int)lVar13 * 0x10);
        *(undefined4 *)(plVar10 + 1) = 2;
        *(undefined4 *)((long)plVar10 + 0xc) =
             *(undefined4 *)(*(long *)(param_1 + 0x30) + lVar25 + 0x30);
        *plVar10 = *(long *)(param_1 + 0x30) + lVar25;
        uVar22 = (ulong)*(uint *)(param_1 + 0x38);
      }
      lVar24 = lVar24 + 1;
      lVar25 = lVar25 + 0x38;
    } while (lVar24 < (int)uVar22);
  }
  uVar21 = *(uint *)(param_1 + 0x48);
  uVar22 = (ulong)uVar21;
  if (0 < (int)uVar21) {
    do {
      uVar23 = uVar22 - 1;
      plVar10 = *(long **)(*(long *)(param_1 + 0x40) + uVar23 * 8);
      if ((*(byte *)(plVar10 + 4) & 0xfe) == 2) {
        if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
          plVar9 = plVar10 + 2;
          do {
            lVar24 = *plVar9;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar7) {
              *plVar9 = lVar24 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar24 + -1 == 0) {
            (**(code **)(*plVar10 + 0x18))();
          }
        }
        iVar16 = *(int *)(param_1 + 0x48);
        iVar19 = iVar16 + -1;
        *(int *)(param_1 + 0x48) = iVar19;
        if (iVar16 != (int)uVar22) {
          lVar24 = *(long *)(param_1 + 0x40);
          *(undefined8 *)(lVar24 + uVar23 * 8) = *(undefined8 *)(lVar24 + (long)iVar19 * 8);
          *(undefined8 *)(lVar24 + (long)iVar19 * 8) = 0;
        }
      }
      bVar7 = 1 < (long)uVar22;
      uVar22 = uVar23;
    } while (bVar7);
    uVar21 = *(uint *)(param_1 + 0x48);
  }
  if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < (int)((int)param_4[1] + uVar21)) {
    FUN_030d23d0(param_4);
    uVar21 = *(uint *)(param_1 + 0x48);
  }
  if (uVar21 != 0) {
    plVar10 = *(long **)(param_1 + 0x40);
    lVar24 = (long)(int)uVar21 << 3;
    do {
      lVar25 = *plVar10;
      if (*(char *)(lVar25 + 0x20) == '\0') {
        lVar13 = param_4[1];
        *(int *)(param_4 + 1) = (int)lVar13 + 1;
        plVar9 = (long *)(*param_4 + (long)(int)lVar13 * 0x10);
        *(undefined4 *)(plVar9 + 1) = 1;
        *(undefined4 *)((long)plVar9 + 0xc) = *(undefined4 *)(lVar25 + 0x1c);
        *plVar9 = lVar25;
      }
      plVar10 = plVar10 + 1;
      lVar24 = lVar24 + -8;
    } while (lVar24 != 0);
  }
  uVar21 = *(uint *)(param_1 + 0x58);
  uVar22 = (ulong)uVar21;
  if (0 < (int)uVar21) {
    do {
      uVar23 = uVar22 - 1;
      plVar10 = *(long **)(*(long *)(param_1 + 0x50) + uVar23 * 8);
      if ((*(byte *)(plVar10 + 4) & 0xfe) == 2) {
        if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
          plVar9 = plVar10 + 2;
          do {
            lVar24 = *plVar9;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar7) {
              *plVar9 = lVar24 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar24 + -1 == 0) {
            (**(code **)(*plVar10 + 0x18))();
          }
        }
        iVar16 = *(int *)(param_1 + 0x58);
        iVar19 = iVar16 + -1;
        *(int *)(param_1 + 0x58) = iVar19;
        if (iVar16 != (int)uVar22) {
          lVar24 = *(long *)(param_1 + 0x50);
          *(undefined8 *)(lVar24 + uVar23 * 8) = *(undefined8 *)(lVar24 + (long)iVar19 * 8);
          *(undefined8 *)(lVar24 + (long)iVar19 * 8) = 0;
        }
      }
      bVar7 = 1 < (long)uVar22;
      uVar22 = uVar23;
    } while (bVar7);
    uVar21 = *(uint *)(param_1 + 0x58);
  }
  if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < (int)((int)param_4[1] + uVar21)) {
    FUN_030d23d0(param_4);
    uVar21 = *(uint *)(param_1 + 0x58);
  }
  if (uVar21 != 0) {
    plVar10 = *(long **)(param_1 + 0x50);
    lVar24 = (long)(int)uVar21 << 3;
    do {
      lVar25 = *plVar10;
      if (*(char *)(lVar25 + 0x20) == '\0') {
        lVar13 = param_4[1];
        *(int *)(param_4 + 1) = (int)lVar13 + 1;
        plVar9 = (long *)(*param_4 + (long)(int)lVar13 * 0x10);
        *(undefined4 *)(plVar9 + 1) = 3;
        *(undefined4 *)((long)plVar9 + 0xc) = *(undefined4 *)(lVar25 + 0x1c);
        *plVar9 = lVar25;
      }
      plVar10 = plVar10 + 1;
      lVar24 = lVar24 + -8;
    } while (lVar24 != 0);
  }
  iVar16 = (int)param_4[1];
  if (param_2 < iVar16) {
    if ((0 < param_2) && (1 < iVar16)) {
      lVar24 = *param_4;
      iVar19 = 0;
      iVar16 = iVar16 + -1;
      do {
        iVar14 = iVar16;
        iVar5 = *(int *)(lVar24 + (long)(iVar19 + iVar14 >> 1) * 0x10 + 0xc);
        iVar16 = iVar14;
        iVar20 = iVar19;
        do {
          puVar8 = (undefined8 *)(lVar24 + -0x10 + (long)iVar20 * 0x10);
          do {
            iVar17 = iVar20;
            puVar18 = puVar8;
            puVar8 = puVar18 + 2;
            iVar20 = iVar17 + 1;
          } while (iVar5 < *(int *)((long)puVar18 + 0x1c));
          puVar12 = (undefined8 *)(lVar24 + 0x10 + (long)iVar16 * 0x10);
          iVar16 = iVar16 + 1;
          do {
            iVar15 = iVar16;
            puVar11 = puVar12;
            puVar12 = puVar11 + -2;
            iVar16 = iVar15 + -1;
          } while (*(int *)((long)puVar11 + -4) < iVar5);
          iVar20 = iVar17;
          if (iVar17 <= iVar16) {
            if (iVar17 != iVar16) {
              uVar2 = *puVar12;
              uVar3 = puVar11[-1];
              uVar4 = puVar18[3];
              *puVar12 = *puVar8;
              puVar11[-1] = uVar4;
              *puVar8 = uVar2;
              puVar18[3] = uVar3;
            }
            iVar16 = iVar15 + -2;
            iVar20 = iVar17 + 1;
          }
        } while (iVar20 <= iVar16);
      } while (((iVar19 < iVar16) && (param_2 <= iVar16)) ||
              ((iVar20 < iVar14 && (iVar19 = iVar20, iVar16 = iVar14, iVar20 < param_2))));
    }
    if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < param_2) {
      FUN_030d252c(param_4,PTR_PTR_047d1a50,(long)param_2);
    }
    if (((int)param_4[1] < param_2) || (param_2 < (int)param_4[1])) {
      *(int *)(param_4 + 1) = param_2;
    }
  }
  return;
}


