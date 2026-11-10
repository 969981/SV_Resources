/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f563c4; name: FUN_02f563c4
 */


void FUN_02f563c4(long *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  undefined4 *puVar22;
  
  puVar4 = PTR_PTR_047d1a50;
  plVar18 = *(long **)(param_1[0x73] + (long)param_2 * 8);
  plVar20 = *(long **)(param_1[0x73] + (long)param_3 * 8);
  if (plVar18 == plVar20) {
    return;
  }
  if (0 < (int)plVar20[3]) {
    lVar21 = 0;
    do {
      puVar22 = *(undefined4 **)(plVar20[2] + lVar21 * 8);
      *puVar22 = (int)plVar18[4];
      puVar22[1] = (int)plVar18[3];
      iVar7 = (int)plVar18[3];
      lVar8 = (long)iVar7;
      if ((int)(*(uint *)((long)plVar18 + 0x1c) & 0x7fffffff) <= iVar7) {
        FUN_02f5ed94(plVar18 + 2,puVar4,lVar8 + 1);
        iVar7 = (int)plVar18[3];
      }
      *(undefined4 **)(plVar18[2] + (long)iVar7 * 8) = puVar22;
      *(int *)(plVar18 + 3) = (int)(lVar8 + 1);
      lVar21 = lVar21 + 1;
    } while (lVar21 < (int)plVar20[3]);
  }
  iVar3 = (int)plVar20[1];
  lVar21 = plVar18[1];
  iVar7 = (int)lVar21 + iVar3;
  puVar22 = (undefined4 *)*plVar20;
  if ((int)(*(uint *)((long)plVar18 + 0xc) & 0x7fffffff) < iVar7) {
    FUN_02e814f8(plVar18,PTR_PTR_047d1a50,(long)iVar7);
  }
  if (iVar3 != 0) {
    uVar17 = (long)iVar3 * 4 - 4;
    uVar1 = ((uint)(uVar17 >> 2) & 0x3fffffff) + 1;
    puVar10 = (undefined4 *)(*plVar18 + (long)(int)lVar21 * 4);
    if ((uVar1 & 3) == 0) {
      puVar15 = puVar22;
    }
    else {
      lVar21 = -((ulong)uVar1 & 3);
      puVar9 = puVar10;
      puVar14 = puVar22;
      do {
        puVar15 = puVar14 + 1;
        bVar5 = lVar21 != -1;
        lVar21 = lVar21 + 1;
        puVar10 = puVar9 + 1;
        *puVar9 = *puVar14;
        puVar9 = puVar10;
        puVar14 = puVar15;
      } while (bVar5);
    }
    if (0xb < uVar17) {
      do {
        *puVar10 = *puVar15;
        puVar10[1] = puVar15[1];
        puVar10[2] = puVar15[2];
        puVar9 = puVar15 + 3;
        puVar15 = puVar15 + 4;
        puVar10[3] = *puVar9;
        puVar10 = puVar10 + 4;
      } while (puVar15 != puVar22 + iVar3);
    }
  }
  *(int *)(plVar18 + 1) = iVar7;
  iVar3 = (int)plVar20[0xc];
  puVar19 = (undefined8 *)plVar20[0xb];
  lVar21 = plVar18[0xc];
  iVar7 = (int)lVar21 + iVar3;
  if ((int)(*(uint *)((long)plVar18 + 100) & 0x7fffffff) < iVar7) {
    FUN_02f5f34c(plVar18 + 0xb,PTR_PTR_047d1a50,(long)iVar7);
  }
  if (iVar3 != 0) {
    uVar17 = (long)iVar3 * 8 - 8;
    uVar1 = ((uint)(uVar17 >> 3) & 0x1fffffff) + 1;
    puVar13 = (undefined8 *)(plVar18[0xb] + (long)(int)lVar21 * 8);
    if ((uVar1 & 3) == 0) {
      puVar12 = puVar19;
    }
    else {
      lVar21 = -((ulong)uVar1 & 3);
      puVar11 = puVar13;
      puVar16 = puVar19;
      do {
        puVar12 = puVar16 + 1;
        bVar5 = lVar21 != -1;
        lVar21 = lVar21 + 1;
        puVar13 = puVar11 + 1;
        *puVar11 = *puVar16;
        puVar11 = puVar13;
        puVar16 = puVar12;
      } while (bVar5);
    }
    if (0x17 < uVar17) {
      do {
        *puVar13 = *puVar12;
        puVar13[1] = puVar12[1];
        puVar13[2] = puVar12[2];
        puVar11 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        puVar13[3] = *puVar11;
        puVar13 = puVar13 + 4;
      } while (puVar12 != puVar19 + iVar3);
    }
  }
  *(int *)(plVar18 + 0xc) = iVar7;
  uVar17 = plVar18[5];
  if ((ulong)plVar20[5] <= (ulong)plVar18[5]) {
    uVar17 = plVar20[5];
  }
  plVar18[5] = uVar17;
  iVar7 = (int)plVar20[1];
  if (0 < iVar7) {
    lVar21 = 0;
    do {
      uVar1 = *(uint *)(*plVar20 + lVar21 * 4);
      uVar17 = (ulong)uVar1 & 0xffffff;
      if (((((uint)uVar17 != 0xffffff) && ((uint)uVar17 < *(uint *)(*param_1 + 0x40))) &&
          (lVar8 = *(long *)(*param_1 + 0x38), (*(byte *)(lVar8 + uVar17 * 0xc0 + 0x54) & 3) != 0))
         && (*(uint *)(lVar8 + uVar17 * 0xc0 + 0x50) == uVar1)) {
        *(int *)(param_1[0x71] + (long)*(int *)(lVar8 + uVar17 * 0xc0 + 0x80) * 0x20 + 0x10) =
             param_2;
        iVar7 = (int)plVar20[1];
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 < iVar7);
  }
  if (*(char *)((long)plVar18 + 0x25) == '\0') {
    bVar6 = 0;
    if (*(char *)((long)plVar20 + 0x25) != '\0') {
      iVar7 = (int)param_1[0x67];
      lVar21 = (long)iVar7;
      if ((int)(*(uint *)((long)param_1 + 0x33c) & 0x7fffffff) <= iVar7) {
        FUN_0133bb88(param_1 + 0x66,PTR_PTR_047d1a50,lVar21 + 1);
        iVar7 = (int)param_1[0x67];
      }
      *(int *)(param_1[0x66] + (long)iVar7 * 4) = param_2;
      *(int *)(param_1 + 0x67) = (int)(lVar21 + 1);
      bVar6 = *(byte *)((long)plVar18 + 0x25);
    }
  }
  else {
    bVar6 = 1;
  }
  *(byte *)((long)plVar18 + 0x25) = *(byte *)((long)plVar20 + 0x25) | bVar6;
  *(byte *)((long)plVar18 + 0x24) =
       *(byte *)((long)plVar18 + 0x24) | *(byte *)((long)plVar20 + 0x24);
  *(undefined4 *)(plVar20 + 3) = 0;
  *(undefined4 *)(plVar20 + 1) = 0;
  *(undefined4 *)(plVar20 + 0xc) = 0;
  if (*(uint *)(plVar18 + 10) < *(uint *)(plVar20 + 10)) {
    *(undefined4 *)(plVar18 + 7) = 0;
    iVar7 = (int)plVar20[7];
    puVar19 = (undefined8 *)plVar20[6];
    if ((int)(*(uint *)((long)plVar18 + 0x3c) & 0x7fffffff) < iVar7) {
      FUN_02f5f45c(plVar18 + 6,(long)iVar7);
    }
    if (iVar7 != 0) {
      puVar12 = (undefined8 *)plVar18[6];
      lVar21 = (long)iVar7 * 0x10 + -0x10;
      puVar13 = puVar19;
      if (((uint)lVar21 >> 4 & 1) == 0) {
        uVar2 = puVar19[1];
        *puVar12 = *puVar19;
        puVar12[1] = uVar2;
        puVar13 = puVar19 + 2;
        puVar12 = puVar12 + 2;
      }
      if (lVar21 != 0) {
        do {
          uVar2 = puVar13[1];
          *puVar12 = *puVar13;
          puVar12[1] = uVar2;
          puVar11 = puVar13 + 2;
          uVar2 = puVar13[3];
          puVar13 = puVar13 + 4;
          puVar12[2] = *puVar11;
          puVar12[3] = uVar2;
          puVar12 = puVar12 + 4;
        } while (puVar13 != puVar19 + (long)iVar7 * 2);
      }
    }
    *(int *)(plVar18 + 7) = iVar7;
    *(int *)(plVar18 + 10) = (int)plVar20[10];
  }
  else {
    if (*(uint *)(plVar18 + 10) != *(uint *)(plVar20 + 10)) goto LAB_02f56844;
    iVar3 = (int)plVar20[7];
    lVar21 = plVar18[7];
    iVar7 = (int)lVar21 + iVar3;
    puVar19 = (undefined8 *)plVar20[6];
    if ((int)(*(uint *)((long)plVar18 + 0x3c) & 0x7fffffff) < iVar7) {
      FUN_02f5f45c(plVar18 + 6,(long)iVar7);
    }
    if (iVar3 != 0) {
      puVar13 = (undefined8 *)(plVar18[6] + (long)(int)lVar21 * 0x10);
      lVar21 = (long)iVar3 * 0x10 + -0x10;
      if (((uint)lVar21 >> 4 & 1) == 0) {
        uVar2 = puVar19[1];
        *puVar13 = *puVar19;
        puVar13[1] = uVar2;
        puVar13 = puVar13 + 2;
        puVar12 = puVar19 + 2;
      }
      else {
        puVar12 = puVar19;
      }
      if (lVar21 != 0) {
        do {
          uVar2 = puVar12[1];
          *puVar13 = *puVar12;
          puVar13[1] = uVar2;
          puVar11 = puVar12 + 2;
          uVar2 = puVar12[3];
          puVar12 = puVar12 + 4;
          puVar13[2] = *puVar11;
          puVar13[3] = uVar2;
          puVar13 = puVar13 + 4;
        } while (puVar12 != puVar19 + (long)iVar3 * 2);
      }
    }
    *(int *)(plVar18 + 7) = iVar7;
  }
  *(undefined4 *)(plVar20 + 7) = 0;
LAB_02f56844:
  iVar7 = (int)param_1[0x69];
  lVar21 = (long)iVar7;
  if ((int)(*(uint *)((long)param_1 + 0x34c) & 0x7fffffff) <= iVar7) {
    FUN_0133bb88(param_1 + 0x68,PTR_PTR_047d1a50,lVar21 + 1);
    iVar7 = (int)param_1[0x69];
  }
  *(int *)(param_1[0x68] + (long)iVar7 * 4) = param_3;
  lVar8 = param_1[0x73];
  *(int *)(param_1 + 0x69) = (int)(lVar21 + 1);
  lVar21 = *(long *)(lVar8 + (long)param_3 * 8);
  if (lVar21 != 0) {
    FUN_02f568d8(lVar21);
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar21,0);
    lVar8 = param_1[0x73];
  }
  *(undefined8 *)(lVar8 + (long)param_3 * 8) = 0;
  return;
}


