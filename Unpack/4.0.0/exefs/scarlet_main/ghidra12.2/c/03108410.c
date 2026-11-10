/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03108410; name: FUN_03108410
 */


void FUN_03108410(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  void *pvVar14;
  long lVar15;
  
  *param_1 = *param_2;
  if (param_2 != param_1) {
    iVar7 = *(int *)(param_2 + 0x10);
    pvVar14 = *(void **)(param_2 + 8);
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar7) {
      FUN_02eb1edc(param_1 + 8,PTR_PTR_047d1a50,(long)iVar7);
    }
    memcpy(*(void **)(param_1 + 8),pvVar14,(long)iVar7 << 2);
    *(int *)(param_1 + 0x10) = iVar7;
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  param_1[0x24] = param_2[0x24];
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  if (param_2 != param_1) {
    uVar5 = *(uint *)(param_2 + 0x30);
    lVar15 = *(long *)(param_2 + 0x28);
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < (int)uVar5) {
      FUN_03109800(param_1 + 0x28,PTR_PTR_047d1a50,(long)(int)uVar5);
    }
    uVar6 = *(uint *)(param_1 + 0x30);
    lVar10 = *(long *)(param_1 + 0x28);
    uVar1 = uVar6;
    if ((int)uVar5 <= (int)uVar6) {
      uVar1 = uVar5;
    }
    if ((lVar10 != lVar15) && (0 < (int)uVar1)) {
      if (uVar1 == 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        puVar9 = (undefined8 *)(lVar15 + 0x10);
        puVar12 = (undefined8 *)(lVar10 + 0x10);
        do {
          uVar2 = puVar9[-1];
          uVar13 = uVar13 + 2;
          puVar12[-2] = puVar9[-2];
          puVar12[-1] = uVar2;
          uVar2 = puVar9[1];
          *puVar12 = *puVar9;
          puVar12[1] = uVar2;
          puVar9 = puVar9 + 4;
          puVar12 = puVar12 + 4;
        } while (((ulong)uVar1 & 0xfffffffe) != uVar13);
      }
      if ((uVar1 & 1) != 0) {
        puVar9 = (undefined8 *)(lVar15 + uVar13 * 0x10);
        puVar12 = (undefined8 *)(lVar10 + uVar13 * 0x10);
        uVar2 = puVar9[1];
        *puVar12 = *puVar9;
        puVar12[1] = uVar2;
      }
      lVar10 = *(long *)(param_1 + 0x28);
    }
    if ((int)uVar6 < (int)uVar5) {
      puVar9 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 0x10);
      puVar12 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 0x10);
      if (uVar5 != uVar1 + 1) {
        iVar7 = -(uVar5 - uVar1 & 0xfffffffe);
        puVar8 = puVar9;
        puVar11 = puVar12;
        do {
          uVar2 = puVar8[1];
          puVar9 = puVar8 + 4;
          *puVar11 = *puVar8;
          puVar11[1] = uVar2;
          puVar12 = puVar11 + 4;
          uVar2 = puVar8[3];
          iVar7 = iVar7 + 2;
          puVar11[2] = puVar8[2];
          puVar11[3] = uVar2;
          puVar8 = puVar9;
          puVar11 = puVar12;
        } while (iVar7 != 0);
      }
      if ((uVar5 - uVar1 & 1) != 0) {
        uVar2 = puVar9[1];
        *puVar12 = *puVar9;
        puVar12[1] = uVar2;
      }
    }
    lVar15 = *(long *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x30) = uVar5;
    if ((lVar15 != 0) && (*(int *)(lVar15 + 4) != -2)) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar15,0);
      *(undefined **)(param_1 + 0x38) = &DAT_03d7702c;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    if (*(int *)(*(long *)(param_2 + 0x38) + 4) == -2) {
      *(undefined **)(param_1 + 0x38) = &DAT_03d7702c;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
      pvVar14 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                  (PTR_PTR_047d1a50,(long)*(int *)(param_2 + 0x40) * 8 + 8);
      *(void **)(param_1 + 0x38) = pvVar14;
      memcpy(pvVar14,*(void **)(param_2 + 0x38),(long)*(int *)(param_2 + 0x40) * 8 + 8);
    }
  }
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  param_1[0x58] = param_2[0x58];
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  return;
}


