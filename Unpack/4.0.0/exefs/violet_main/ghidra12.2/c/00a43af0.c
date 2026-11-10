/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a43af0; name: FUN_00a43af0
 */


void FUN_00a43af0(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined4 *puVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  int local_a4;
  int iStack_a0;
  int local_9c;
  long local_98;
  long local_90;
  long local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  if ((*(char *)(param_1 + 8) == '\0') || (*(char *)(param_2 + 8) == '\0')) {
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  piVar3 = *(int **)(param_2 + 0x10);
  iVar12 = (int)((ulong)(*(long *)(param_2 + 0x18) - (long)piVar3) >> 2);
  if (iVar12 < 1) {
    iVar22 = 0;
    iVar21 = 0;
  }
  else {
    iVar21 = *piVar3;
    if (iVar12 == 1) {
      iVar22 = 0;
    }
    else {
      iVar22 = piVar3[1];
      if (2 < iVar12) {
        iVar12 = piVar3[2];
        goto LAB_00a43b80;
      }
    }
  }
  iVar12 = 0;
LAB_00a43b80:
  iVar1 = iVar22 + param_3 * 2;
  iVar2 = iVar12 + param_3 * 2;
  local_88 = 0;
  plStack_80 = DAT_04836488;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0x3fffffffffffffff;
  uStack_70 = 0;
  local_68 = 0;
  local_a4 = iVar21;
  iStack_a0 = iVar1;
  local_9c = iVar2;
  FUN_00a416f8(&local_98,0,&local_a4,&local_98);
  FUN_00a42c28(param_1,&local_98,0);
  plVar8 = plStack_80;
  lVar16 = local_98;
  cVar4 = *(char *)(param_1 + 8);
  if (local_98 != 0) {
    local_90 = local_98;
    lVar20 = local_88 - local_98;
    uVar9 = (**(code **)(*plStack_80 + 0xf8))(plStack_80);
    if (((uVar9 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar16,lVar20,4);
    }
    else {
      FUN_00c48fe8(plVar8,lVar16,lVar20,4);
    }
  }
  if ((0 < iVar21) && (cVar4 != '\0')) {
    iVar6 = iVar22 * 2 + -2;
    iVar7 = iVar12 * 2 + -2;
    iVar11 = 0;
    do {
      if (0 < iVar1 && 0 < iVar2) {
        iVar13 = 0;
        do {
          iVar14 = iVar13 - param_3;
          if ((iVar14 < 0) || (iVar22 <= iVar14)) {
            iVar18 = -iVar14;
            if (-1 < iVar14) {
              iVar18 = iVar14;
            }
            iVar14 = 0;
            if (iVar6 != 0) {
              iVar14 = iVar18 / iVar6;
            }
            iVar14 = iVar18 - iVar14 * iVar6;
            if (iVar22 <= iVar14) {
              iVar14 = iVar6 - iVar14;
            }
          }
          lVar16 = *(long *)(param_2 + 0x80);
          if ((int)((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) >> 2) < 2) {
            lVar20 = 0;
          }
          else {
            lVar20 = (long)(**(int **)(param_2 + 0x48) * iVar11 +
                           (*(int **)(param_2 + 0x48))[1] * iVar14);
          }
          if ((int)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 2) < 2) {
            lVar19 = 0;
          }
          else {
            lVar19 = (long)(**(int **)(param_1 + 0x48) * iVar11 +
                           (*(int **)(param_1 + 0x48))[1] * iVar13);
          }
          puVar17 = (undefined4 *)(*(long *)(param_1 + 0x80) + lVar19 * 4);
          iVar15 = param_3;
          iVar18 = -param_3;
          iVar14 = param_3 * -2;
          do {
            if ((iVar18 < 0) || (iVar10 = iVar18, iVar12 <= iVar18)) {
              iVar10 = iVar15;
              if (-1 < iVar18) {
                iVar10 = iVar18;
              }
              iVar5 = 0;
              if (iVar7 != 0) {
                iVar5 = iVar10 / iVar7;
              }
              iVar10 = iVar10 - iVar5 * iVar7;
              if (iVar12 <= iVar10) {
                iVar10 = iVar7 - iVar10;
              }
            }
            iVar14 = iVar14 + 1;
            *puVar17 = *(undefined4 *)(lVar16 + lVar20 * 4 + (long)iVar10 * 4);
            iVar18 = iVar18 + 1;
            iVar15 = iVar15 + -1;
            puVar17 = puVar17 + 1;
          } while (iVar12 != iVar14);
          iVar13 = iVar13 + 1;
        } while (iVar13 != iVar1);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar21);
  }
  return;
}


