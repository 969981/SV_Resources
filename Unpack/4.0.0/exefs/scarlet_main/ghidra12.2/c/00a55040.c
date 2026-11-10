/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a55040; name: FUN_00a55040
 */


undefined8 FUN_00a55040(ushort *param_1,ushort *param_2,ushort *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  
  lVar9 = *(long *)(*(long *)*param_4 + 0x64d0);
  if (lVar9 != 0) {
    uVar5 = *param_2;
    lVar1 = *(long *)*param_4 + 0x64d0;
    uVar6 = *param_1;
    lVar13 = lVar1;
    lVar15 = lVar9;
    do {
      if ((int)(uint)uVar5 <= *(int *)(lVar15 + 0x1c)) {
        lVar13 = lVar15;
      }
      lVar15 = *(long *)(lVar15 + (ulong)(*(int *)(lVar15 + 0x1c) < (int)(uint)uVar5) * 8);
    } while (lVar15 != 0);
    uVar7 = (uint)uVar5;
    if ((lVar13 == lVar1) || ((int)uVar7 < *(int *)(lVar13 + 0x1c))) {
      iVar12 = 0x7fffffff;
    }
    else {
      iVar12 = *(int *)(lVar13 + 0x20);
    }
    lVar13 = lVar1;
    lVar15 = lVar9;
    do {
      if ((int)(uint)uVar6 <= *(int *)(lVar15 + 0x1c)) {
        lVar13 = lVar15;
      }
      lVar15 = *(long *)(lVar15 + (ulong)(*(int *)(lVar15 + 0x1c) < (int)(uint)uVar6) * 8);
    } while (lVar15 != 0);
    if ((lVar13 == lVar1) || ((int)(uint)uVar6 < *(int *)(lVar13 + 0x1c))) {
      iVar14 = 0x7fffffff;
    }
    else {
      iVar14 = *(int *)(lVar13 + 0x20);
    }
    uVar5 = *param_3;
    if (iVar12 < iVar14) {
      lVar13 = lVar1;
      lVar15 = lVar9;
      do {
        if ((int)(uint)uVar5 <= *(int *)(lVar15 + 0x1c)) {
          lVar13 = lVar15;
        }
        lVar15 = *(long *)(lVar15 + (ulong)(*(int *)(lVar15 + 0x1c) < (int)(uint)uVar5) * 8);
      } while (lVar15 != 0);
      lVar15 = lVar1;
      if ((lVar13 == lVar1) || ((int)(uint)uVar5 < *(int *)(lVar13 + 0x1c))) {
        iVar12 = 0x7fffffff;
      }
      else {
        iVar12 = *(int *)(lVar13 + 0x20);
      }
      do {
        if ((int)uVar7 <= *(int *)(lVar9 + 0x1c)) {
          lVar15 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x1c) < (int)uVar7) * 8);
      } while (lVar9 != 0);
      if ((lVar15 == lVar1) || ((int)uVar7 < *(int *)(lVar15 + 0x1c))) {
        iVar14 = 0x7fffffff;
      }
      else {
        iVar14 = *(int *)(lVar15 + 0x20);
      }
      if (iVar12 < iVar14) {
        uVar2 = *(undefined8 *)param_1;
        uVar3 = *(undefined8 *)(param_1 + 4);
        uVar10 = *(undefined8 *)(param_1 + 8);
        uVar4 = *(undefined8 *)(param_3 + 8);
        uVar8 = *(undefined8 *)param_3;
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
        *(undefined8 *)(param_1 + 8) = uVar4;
        *(undefined8 *)param_1 = uVar8;
        *(undefined8 *)(param_3 + 4) = uVar3;
        *(undefined8 *)(param_3 + 8) = uVar10;
        *(undefined8 *)param_3 = uVar2;
      }
      else {
        uVar2 = *(undefined8 *)param_1;
        uVar3 = *(undefined8 *)(param_1 + 4);
        uVar10 = *(undefined8 *)(param_1 + 8);
        uVar4 = *(undefined8 *)(param_2 + 8);
        uVar8 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
        *(undefined8 *)(param_1 + 8) = uVar4;
        *(undefined8 *)param_1 = uVar8;
        *(undefined8 *)(param_2 + 4) = uVar3;
        *(undefined8 *)(param_2 + 8) = uVar10;
        *(undefined8 *)param_2 = uVar2;
        lVar9 = *(long *)(*(long *)*param_4 + 0x64d0);
        if (lVar9 != 0) {
          uVar5 = *param_3;
          lVar1 = *(long *)*param_4 + 0x64d0;
          uVar6 = *param_2;
          lVar13 = lVar1;
          lVar15 = lVar9;
          do {
            if ((int)(uint)uVar5 <= *(int *)(lVar15 + 0x1c)) {
              lVar13 = lVar15;
            }
            lVar15 = *(long *)(lVar15 + (ulong)(*(int *)(lVar15 + 0x1c) < (int)(uint)uVar5) * 8);
          } while (lVar15 != 0);
          lVar15 = lVar1;
          if ((lVar13 == lVar1) || ((int)(uint)uVar5 < *(int *)(lVar13 + 0x1c))) {
            iVar12 = 0x7fffffff;
          }
          else {
            iVar12 = *(int *)(lVar13 + 0x20);
          }
          do {
            if ((int)(uint)uVar6 <= *(int *)(lVar9 + 0x1c)) {
              lVar15 = lVar9;
            }
            lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x1c) < (int)(uint)uVar6) * 8);
          } while (lVar9 != 0);
          if ((lVar15 == lVar1) || ((int)(uint)uVar6 < *(int *)(lVar15 + 0x1c))) {
            iVar14 = 0x7fffffff;
          }
          else {
            iVar14 = *(int *)(lVar15 + 0x20);
          }
          if (iVar12 < iVar14) {
            uVar2 = *(undefined8 *)param_2;
            uVar3 = *(undefined8 *)(param_2 + 4);
            uVar10 = *(undefined8 *)(param_2 + 8);
            uVar4 = *(undefined8 *)(param_3 + 8);
            uVar8 = *(undefined8 *)param_3;
            *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
            *(undefined8 *)(param_2 + 8) = uVar4;
            *(undefined8 *)param_2 = uVar8;
            *(undefined8 *)(param_3 + 4) = uVar3;
            *(undefined8 *)(param_3 + 8) = uVar10;
            *(undefined8 *)param_3 = uVar2;
            return 2;
          }
        }
      }
      return 1;
    }
    if (lVar9 != 0) {
      lVar13 = lVar1;
      lVar15 = lVar9;
      do {
        uVar11 = (uint)uVar5;
        if ((int)uVar11 <= *(int *)(lVar15 + 0x1c)) {
          lVar13 = lVar15;
        }
        lVar15 = *(long *)(lVar15 + (ulong)(*(int *)(lVar15 + 0x1c) < (int)uVar11) * 8);
      } while (lVar15 != 0);
      lVar15 = lVar1;
      if ((lVar13 == lVar1) || ((int)uVar11 < *(int *)(lVar13 + 0x1c))) {
        iVar12 = 0x7fffffff;
      }
      else {
        iVar12 = *(int *)(lVar13 + 0x20);
      }
      do {
        if ((int)uVar7 <= *(int *)(lVar9 + 0x1c)) {
          lVar15 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x1c) < (int)uVar7) * 8);
      } while (lVar9 != 0);
      if ((lVar15 == lVar1) || ((int)uVar7 < *(int *)(lVar15 + 0x1c))) {
        iVar14 = 0x7fffffff;
      }
      else {
        iVar14 = *(int *)(lVar15 + 0x20);
      }
      if (iVar12 < iVar14) {
        uVar2 = *(undefined8 *)param_2;
        uVar3 = *(undefined8 *)(param_2 + 4);
        uVar10 = *(undefined8 *)(param_2 + 8);
        uVar4 = *(undefined8 *)(param_3 + 8);
        uVar8 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
        *(undefined8 *)(param_2 + 8) = uVar4;
        *(undefined8 *)param_2 = uVar8;
        *(undefined8 *)(param_3 + 4) = uVar3;
        *(undefined8 *)(param_3 + 8) = uVar10;
        *(undefined8 *)param_3 = uVar2;
        lVar9 = *(long *)(*(long *)*param_4 + 0x64d0);
        if (lVar9 == 0) {
          return 1;
        }
        uVar5 = *param_2;
        lVar1 = *(long *)*param_4 + 0x64d0;
        uVar6 = *param_1;
        lVar13 = lVar1;
        lVar15 = lVar9;
        do {
          if ((int)(uint)uVar5 <= *(int *)(lVar15 + 0x1c)) {
            lVar13 = lVar15;
          }
          lVar15 = *(long *)(lVar15 + (ulong)(*(int *)(lVar15 + 0x1c) < (int)(uint)uVar5) * 8);
        } while (lVar15 != 0);
        lVar15 = lVar1;
        if ((lVar13 == lVar1) || ((int)(uint)uVar5 < *(int *)(lVar13 + 0x1c))) {
          iVar12 = 0x7fffffff;
        }
        else {
          iVar12 = *(int *)(lVar13 + 0x20);
        }
        do {
          if ((int)(uint)uVar6 <= *(int *)(lVar9 + 0x1c)) {
            lVar15 = lVar9;
          }
          lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x1c) < (int)(uint)uVar6) * 8);
        } while (lVar9 != 0);
        if ((lVar15 == lVar1) || ((int)(uint)uVar6 < *(int *)(lVar15 + 0x1c))) {
          iVar14 = 0x7fffffff;
        }
        else {
          iVar14 = *(int *)(lVar15 + 0x20);
        }
        if (iVar12 < iVar14) {
          uVar2 = *(undefined8 *)param_1;
          uVar3 = *(undefined8 *)(param_1 + 4);
          uVar10 = *(undefined8 *)(param_1 + 8);
          uVar4 = *(undefined8 *)(param_2 + 8);
          uVar8 = *(undefined8 *)param_2;
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
          *(undefined8 *)(param_1 + 8) = uVar4;
          *(undefined8 *)param_1 = uVar8;
          *(undefined8 *)(param_2 + 4) = uVar3;
          *(undefined8 *)(param_2 + 8) = uVar10;
          *(undefined8 *)param_2 = uVar2;
          return 2;
        }
        return 1;
      }
    }
  }
  return 0;
}


