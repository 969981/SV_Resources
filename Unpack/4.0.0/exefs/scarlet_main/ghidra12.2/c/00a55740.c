/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a55740; name: FUN_00a55740
 */


int FUN_00a55740(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
                undefined8 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  
  iVar7 = FUN_00a55460();
  lVar11 = *(long *)(*(long *)*param_6 + 0x64d0);
  iVar8 = iVar7;
  if (lVar11 != 0) {
    uVar5 = *param_5;
    lVar1 = *(long *)*param_6 + 0x64d0;
    uVar6 = *param_4;
    lVar14 = lVar1;
    lVar15 = lVar11;
    do {
      if ((int)(uint)uVar5 <= *(int *)(lVar15 + 0x1c)) {
        lVar14 = lVar15;
      }
      lVar15 = *(long *)(lVar15 + (ulong)(*(int *)(lVar15 + 0x1c) < (int)(uint)uVar5) * 8);
    } while (lVar15 != 0);
    lVar15 = lVar1;
    if ((lVar14 == lVar1) || ((int)(uint)uVar5 < *(int *)(lVar14 + 0x1c))) {
      iVar13 = 0x7fffffff;
    }
    else {
      iVar13 = *(int *)(lVar14 + 0x20);
    }
    do {
      if ((int)(uint)uVar6 <= *(int *)(lVar11 + 0x1c)) {
        lVar15 = lVar11;
      }
      lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x1c) < (int)(uint)uVar6) * 8);
    } while (lVar11 != 0);
    if ((lVar15 == lVar1) || ((int)(uint)uVar6 < *(int *)(lVar15 + 0x1c))) {
      iVar9 = 0x7fffffff;
    }
    else {
      iVar9 = *(int *)(lVar15 + 0x20);
    }
    if (iVar13 < iVar9) {
      uVar2 = *(undefined8 *)param_4;
      uVar3 = *(undefined8 *)(param_4 + 4);
      uVar12 = *(undefined8 *)(param_4 + 8);
      uVar4 = *(undefined8 *)(param_5 + 8);
      uVar10 = *(undefined8 *)param_5;
      *(undefined8 *)(param_4 + 4) = *(undefined8 *)(param_5 + 4);
      *(undefined8 *)(param_4 + 8) = uVar4;
      *(undefined8 *)param_4 = uVar10;
      *(undefined8 *)(param_5 + 4) = uVar3;
      *(undefined8 *)(param_5 + 8) = uVar12;
      *(undefined8 *)param_5 = uVar2;
      lVar11 = *(long *)(*(long *)*param_6 + 0x64d0);
      iVar8 = iVar7 + 1;
      if (lVar11 != 0) {
        uVar5 = *param_4;
        lVar1 = *(long *)*param_6 + 0x64d0;
        uVar6 = *param_3;
        lVar14 = lVar1;
        lVar15 = lVar11;
        do {
          if ((int)(uint)uVar5 <= *(int *)(lVar15 + 0x1c)) {
            lVar14 = lVar15;
          }
          lVar15 = *(long *)(lVar15 + (ulong)(*(int *)(lVar15 + 0x1c) < (int)(uint)uVar5) * 8);
        } while (lVar15 != 0);
        lVar15 = lVar1;
        if ((lVar14 == lVar1) || ((int)(uint)uVar5 < *(int *)(lVar14 + 0x1c))) {
          iVar13 = 0x7fffffff;
        }
        else {
          iVar13 = *(int *)(lVar14 + 0x20);
        }
        do {
          if ((int)(uint)uVar6 <= *(int *)(lVar11 + 0x1c)) {
            lVar15 = lVar11;
          }
          lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x1c) < (int)(uint)uVar6) * 8);
        } while (lVar11 != 0);
        if ((lVar15 == lVar1) || ((int)(uint)uVar6 < *(int *)(lVar15 + 0x1c))) {
          iVar9 = 0x7fffffff;
        }
        else {
          iVar9 = *(int *)(lVar15 + 0x20);
        }
        if (iVar13 < iVar9) {
          uVar2 = *(undefined8 *)param_3;
          uVar3 = *(undefined8 *)(param_3 + 4);
          uVar12 = *(undefined8 *)(param_3 + 8);
          uVar4 = *(undefined8 *)(param_4 + 8);
          uVar10 = *(undefined8 *)param_4;
          *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_4 + 4);
          *(undefined8 *)(param_3 + 8) = uVar4;
          *(undefined8 *)param_3 = uVar10;
          *(undefined8 *)(param_4 + 4) = uVar3;
          *(undefined8 *)(param_4 + 8) = uVar12;
          *(undefined8 *)param_4 = uVar2;
          lVar11 = *(long *)(*(long *)*param_6 + 0x64d0);
          iVar8 = iVar7 + 2;
          if (lVar11 != 0) {
            uVar5 = *param_3;
            lVar1 = *(long *)*param_6 + 0x64d0;
            uVar6 = *param_2;
            lVar14 = lVar1;
            lVar15 = lVar11;
            do {
              if ((int)(uint)uVar5 <= *(int *)(lVar15 + 0x1c)) {
                lVar14 = lVar15;
              }
              lVar15 = *(long *)(lVar15 + (ulong)(*(int *)(lVar15 + 0x1c) < (int)(uint)uVar5) * 8);
            } while (lVar15 != 0);
            lVar15 = lVar1;
            if ((lVar14 == lVar1) || ((int)(uint)uVar5 < *(int *)(lVar14 + 0x1c))) {
              iVar13 = 0x7fffffff;
            }
            else {
              iVar13 = *(int *)(lVar14 + 0x20);
            }
            do {
              if ((int)(uint)uVar6 <= *(int *)(lVar11 + 0x1c)) {
                lVar15 = lVar11;
              }
              lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x1c) < (int)(uint)uVar6) * 8);
            } while (lVar11 != 0);
            if ((lVar15 == lVar1) || ((int)(uint)uVar6 < *(int *)(lVar15 + 0x1c))) {
              iVar9 = 0x7fffffff;
            }
            else {
              iVar9 = *(int *)(lVar15 + 0x20);
            }
            if (iVar13 < iVar9) {
              uVar2 = *(undefined8 *)param_2;
              uVar3 = *(undefined8 *)(param_2 + 4);
              uVar12 = *(undefined8 *)(param_2 + 8);
              uVar4 = *(undefined8 *)(param_3 + 8);
              uVar10 = *(undefined8 *)param_3;
              *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
              *(undefined8 *)(param_2 + 8) = uVar4;
              *(undefined8 *)param_2 = uVar10;
              *(undefined8 *)(param_3 + 4) = uVar3;
              *(undefined8 *)(param_3 + 8) = uVar12;
              *(undefined8 *)param_3 = uVar2;
              lVar11 = *(long *)(*(long *)*param_6 + 0x64d0);
              iVar8 = iVar7 + 3;
              if (lVar11 != 0) {
                uVar5 = *param_2;
                lVar1 = *(long *)*param_6 + 0x64d0;
                uVar6 = *param_1;
                lVar14 = lVar1;
                lVar15 = lVar11;
                do {
                  if ((int)(uint)uVar5 <= *(int *)(lVar15 + 0x1c)) {
                    lVar14 = lVar15;
                  }
                  lVar15 = *(long *)(lVar15 + (ulong)(*(int *)(lVar15 + 0x1c) < (int)(uint)uVar5) *
                                              8);
                } while (lVar15 != 0);
                lVar15 = lVar1;
                if ((lVar14 == lVar1) || ((int)(uint)uVar5 < *(int *)(lVar14 + 0x1c))) {
                  iVar13 = 0x7fffffff;
                }
                else {
                  iVar13 = *(int *)(lVar14 + 0x20);
                }
                do {
                  if ((int)(uint)uVar6 <= *(int *)(lVar11 + 0x1c)) {
                    lVar15 = lVar11;
                  }
                  lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x1c) < (int)(uint)uVar6) *
                                              8);
                } while (lVar11 != 0);
                if ((lVar15 == lVar1) || ((int)(uint)uVar6 < *(int *)(lVar15 + 0x1c))) {
                  iVar9 = 0x7fffffff;
                }
                else {
                  iVar9 = *(int *)(lVar15 + 0x20);
                }
                if (iVar13 < iVar9) {
                  uVar2 = *(undefined8 *)param_1;
                  uVar3 = *(undefined8 *)(param_1 + 4);
                  uVar12 = *(undefined8 *)(param_1 + 8);
                  uVar4 = *(undefined8 *)(param_2 + 8);
                  uVar10 = *(undefined8 *)param_2;
                  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
                  *(undefined8 *)(param_1 + 8) = uVar4;
                  *(undefined8 *)param_1 = uVar10;
                  *(undefined8 *)(param_2 + 4) = uVar3;
                  *(undefined8 *)(param_2 + 8) = uVar12;
                  iVar8 = iVar7 + 4;
                  *(undefined8 *)param_2 = uVar2;
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar8;
}


