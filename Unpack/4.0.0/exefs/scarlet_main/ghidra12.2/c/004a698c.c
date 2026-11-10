/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a698c; name: FUN_004a698c
 */


void FUN_004a698c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  byte *pbVar10;
  undefined *puVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  undefined8 *local_68;
  undefined *local_60;
  undefined8 **ppuStack_58;
  undefined **local_48;
  
  uVar9 = *param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  puVar7 = PTR_DAT_047cba80;
  puVar8 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar8 = (ulong *)*puVar8;
  }
  puVar11 = *(undefined **)(param_2 + 0xb0);
  if (puVar11 == PTR_DAT_047cba80) {
    FUN_001fcdc8((undefined8 *)(param_2 + 0xb0),puVar8);
    pbVar10 = (byte *)param_1[1];
    bVar5 = *pbVar10;
    if ((bVar5 & 1) == 0) goto LAB_004a69f8;
LAB_004a6a14:
    if (*(long *)(pbVar10 + 8) != 0) {
LAB_004a6a1c:
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
      plVar1 = (long *)(param_2 + 0xb8);
      puVar8 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_2 + 8) & 1) == 0) {
        puVar11 = (undefined *)*plVar1;
      }
      else {
        puVar8 = (ulong *)*puVar8;
        puVar11 = (undefined *)*plVar1;
      }
      if (puVar11 == puVar7) {
        FUN_001fcdc8(plVar1,puVar8);
        iVar14 = *(int *)((long)param_1 + 0x3c);
        goto joined_r0x004a6f34;
      }
      FUN_001fcec0(puVar11,pbVar10);
    }
  }
  else {
    FUN_001fcec0(puVar11,uVar9);
    pbVar10 = (byte *)param_1[1];
    bVar5 = *pbVar10;
    if ((bVar5 & 1) != 0) goto LAB_004a6a14;
LAB_004a69f8:
    if (bVar5 >> 1 != 0) goto LAB_004a6a1c;
  }
  iVar14 = *(int *)((long)param_1 + 0x3c);
joined_r0x004a6f34:
  if (iVar14 == 3) {
    FUN_004a6f44(param_2,"proto3");
  }
  puVar7 = PTR_FUN_047cd758;
  if (0 < *(int *)(param_1 + 4)) {
    lVar15 = 0;
    do {
      puVar8 = (ulong *)param_1[3];
      if ((puVar8 != (ulong *)0x0) && (local_68 = param_1, *puVar8 != 0xffffffffffffffff)) {
        local_60 = puVar7;
        ppuStack_58 = &local_68;
        local_48 = &local_60;
        std::__call_once(puVar8,&local_48,(_func_void_void_ptr *)&LAB_004c9510);
      }
      FUN_004a7070(param_2,**(undefined8 **)(param_1[9] + lVar15 * 8));
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(param_1 + 4));
  }
  if (0 < *(int *)((long)param_1 + 0x24)) {
    uVar3 = *(uint *)(param_2 + 0x90);
    lVar15 = 0;
    do {
      uVar2 = (ulong)uVar3 + lVar15;
      uVar4 = *(undefined4 *)(param_1[0xb] + lVar15 * 4);
      if ((int)uVar2 == *(int *)(param_2 + 0x94)) {
        FUN_00531134((uint *)(param_2 + 0x90),uVar2 + 1 & 0xffffffff);
      }
      *(undefined4 *)(*(long *)(param_2 + 0x98) + (uVar2 & 0xffffffff) * 4) = uVar4;
      *(int *)(param_2 + 0x90) = (int)(uVar2 + 1);
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)((long)param_1 + 0x24));
  }
  if (0 < *(int *)(param_1 + 5)) {
    uVar3 = *(uint *)(param_2 + 0xa0);
    lVar15 = 0;
    do {
      uVar2 = (ulong)uVar3 + lVar15;
      uVar4 = *(undefined4 *)(param_1[0xc] + lVar15 * 4);
      if ((int)uVar2 == *(int *)(param_2 + 0xa4)) {
        FUN_00531134((uint *)(param_2 + 0xa0),uVar2 + 1 & 0xffffffff);
      }
      *(undefined4 *)(*(long *)(param_2 + 0xa8) + (uVar2 & 0xffffffff) * 4) = uVar4;
      *(int *)(param_2 + 0xa0) = (int)(uVar2 + 1);
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(param_1 + 5));
  }
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar16 = 0;
    lVar15 = 0;
    do {
      lVar12 = param_1[0xd];
      piVar13 = *(int **)(param_2 + 0x40);
      if (piVar13 == (int *)0x0) {
        iVar14 = *(int *)(param_2 + 0x3c);
LAB_004a6c30:
        FUN_00532334(param_2 + 0x30,iVar14 + 1);
        piVar13 = *(int **)(param_2 + 0x40);
        iVar14 = *piVar13;
LAB_004a6c44:
        *piVar13 = iVar14 + 1;
        uVar9 = FUN_004e64b4(*(undefined8 *)(param_2 + 0x30));
        iVar14 = *(int *)(param_2 + 0x38);
        *(int *)(param_2 + 0x38) = iVar14 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x40) + (long)iVar14 * 8 + 8) = uVar9;
      }
      else {
        iVar6 = *(int *)(param_2 + 0x38);
        iVar14 = *piVar13;
        if (iVar14 <= iVar6) {
          if (iVar14 == *(int *)(param_2 + 0x3c)) goto LAB_004a6c30;
          goto LAB_004a6c44;
        }
        *(int *)(param_2 + 0x38) = iVar6 + 1;
        uVar9 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
      }
      FUN_004a716c(lVar12 + lVar16,uVar9);
      lVar15 = lVar15 + 1;
      lVar16 = lVar16 + 0x90;
    } while (lVar15 < *(int *)((long)param_1 + 0x2c));
  }
  if (0 < *(int *)(param_1 + 6)) {
    lVar16 = 0;
    lVar15 = 0;
    do {
      lVar12 = param_1[0xe];
      piVar13 = *(int **)(param_2 + 0x58);
      if (piVar13 == (int *)0x0) {
        iVar14 = *(int *)(param_2 + 0x54);
LAB_004a6cf0:
        FUN_00532334(param_2 + 0x48,iVar14 + 1);
        piVar13 = *(int **)(param_2 + 0x58);
        iVar14 = *piVar13;
LAB_004a6d04:
        *piVar13 = iVar14 + 1;
        uVar9 = FUN_004e6890(*(undefined8 *)(param_2 + 0x48));
        iVar14 = *(int *)(param_2 + 0x50);
        *(int *)(param_2 + 0x50) = iVar14 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x58) + (long)iVar14 * 8 + 8) = uVar9;
      }
      else {
        iVar6 = *(int *)(param_2 + 0x50);
        iVar14 = *piVar13;
        if (iVar14 <= iVar6) {
          if (iVar14 == *(int *)(param_2 + 0x54)) goto LAB_004a6cf0;
          goto LAB_004a6d04;
        }
        *(int *)(param_2 + 0x50) = iVar6 + 1;
        uVar9 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
      }
      FUN_004a7848(lVar12 + lVar16,uVar9);
      lVar15 = lVar15 + 1;
      lVar16 = lVar16 + 0x50;
    } while (lVar15 < *(int *)(param_1 + 6));
  }
  if (0 < *(int *)((long)param_1 + 0x34)) {
    lVar16 = 0;
    lVar15 = 0;
    do {
      lVar12 = param_1[0xf];
      piVar13 = *(int **)(param_2 + 0x70);
      if (piVar13 == (int *)0x0) {
        iVar14 = *(int *)(param_2 + 0x6c);
LAB_004a6db0:
        FUN_00532334(param_2 + 0x60,iVar14 + 1);
        piVar13 = *(int **)(param_2 + 0x70);
        iVar14 = *piVar13;
LAB_004a6dc4:
        *piVar13 = iVar14 + 1;
        uVar9 = FUN_004e69e4(*(undefined8 *)(param_2 + 0x60));
        iVar14 = *(int *)(param_2 + 0x68);
        *(int *)(param_2 + 0x68) = iVar14 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x70) + (long)iVar14 * 8 + 8) = uVar9;
      }
      else {
        iVar6 = *(int *)(param_2 + 0x68);
        iVar14 = *piVar13;
        if (iVar14 <= iVar6) {
          if (iVar14 == *(int *)(param_2 + 0x6c)) goto LAB_004a6db0;
          goto LAB_004a6dc4;
        }
        *(int *)(param_2 + 0x68) = iVar6 + 1;
        uVar9 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
      }
      FUN_004a7af0(lVar12 + lVar16,uVar9);
      lVar15 = lVar15 + 1;
      lVar16 = lVar16 + 0x30;
    } while (lVar15 < *(int *)((long)param_1 + 0x34));
  }
  if (0 < *(int *)(param_1 + 7)) {
    lVar16 = 0;
    lVar15 = 0;
    do {
      lVar12 = param_1[0x10];
      piVar13 = *(int **)(param_2 + 0x88);
      if (piVar13 == (int *)0x0) {
        iVar14 = *(int *)(param_2 + 0x84);
LAB_004a6e70:
        FUN_00532334(param_2 + 0x78,iVar14 + 1);
        piVar13 = *(int **)(param_2 + 0x88);
        iVar14 = *piVar13;
LAB_004a6e84:
        *piVar13 = iVar14 + 1;
        uVar9 = FUN_004e6678(*(undefined8 *)(param_2 + 0x78));
        iVar14 = *(int *)(param_2 + 0x80);
        *(int *)(param_2 + 0x80) = iVar14 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x88) + (long)iVar14 * 8 + 8) = uVar9;
      }
      else {
        iVar6 = *(int *)(param_2 + 0x80);
        iVar14 = *piVar13;
        if (iVar14 <= iVar6) {
          if (iVar14 == *(int *)(param_2 + 0x84)) goto LAB_004a6e70;
          goto LAB_004a6e84;
        }
        *(int *)(param_2 + 0x80) = iVar6 + 1;
        uVar9 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
      }
      FUN_004a7c90(lVar12 + lVar16,uVar9);
      lVar15 = lVar15 + 1;
      lVar16 = lVar16 + 0x98;
    } while (lVar15 < *(int *)(param_1 + 7));
  }
  lVar16 = param_1[0x11];
  lVar15 = FUN_004db400();
  if (lVar16 != lVar15) {
    lVar15 = *(long *)(param_2 + 200);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
    if (lVar15 == 0) {
      puVar8 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_2 + 8) & 1) != 0) {
        puVar8 = (ulong *)*puVar8;
      }
      lVar15 = FUN_004e6bc8(puVar8);
      *(long *)(param_2 + 200) = lVar15;
    }
    FUN_004dceb8(lVar15,param_1[0x11]);
  }
  return;
}


