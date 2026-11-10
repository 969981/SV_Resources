/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0086b864; name: FUN_0086b864
 */


undefined4
FUN_0086b864(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 *param_6,int *param_7,int *param_8,long param_9,
            undefined8 *param_10)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_70;
  undefined8 local_68;
  
  iVar5 = *param_8;
  if (iVar5 < 3) {
    iVar2 = *param_7;
    if (iVar2 < 3) {
      uVar12 = param_1[1];
      uVar10 = *param_1;
      uVar3 = 1;
      puVar4 = param_1 + 0xc;
      uVar14 = param_1[0xd];
      uVar13 = *puVar4;
      (param_1 + (long)iVar2 * 2)[1] = uVar12;
      param_1[(long)iVar2 * 2] = uVar10;
      iVar5 = *param_7;
      param_1[(long)iVar5 * 2 + 3] = uVar12;
      param_1[(long)iVar5 * 2 + 2] = uVar10;
      iVar5 = *param_8;
      (puVar4 + (long)iVar5 * 2)[1] = uVar14;
      puVar4[(long)iVar5 * 2] = uVar13;
      iVar5 = *param_8;
      puVar4[(long)iVar5 * 2 + 3] = uVar14;
      puVar4[(long)iVar5 * 2 + 2] = uVar13;
      lVar8 = tpidr_el0;
      lVar6 = *(long *)(lVar8 + 0x1000b8);
    }
    else {
      if (iVar2 == 3) {
        if (1 < iVar5) {
          puVar4 = param_1 + 0xe;
          param_1[7] = param_1[1];
          param_1[6] = *param_1;
          goto LAB_0086ba2c;
        }
        uVar3 = 3;
      }
      else {
        puVar4 = param_1 + 0xc;
LAB_0086ba2c:
        uVar10 = *puVar4;
        uVar3 = 4;
        param_1[0x13] = puVar4[1];
        param_1[0x12] = uVar10;
      }
      param_1[0xf] = param_1[0xd];
      param_1[0xe] = param_1[0xc];
      param_1[0x11] = param_1[0xd];
      param_1[0x10] = param_1[0xc];
      lVar8 = tpidr_el0;
      lVar6 = *(long *)(lVar8 + 0x1000b8);
    }
    if (lVar6 == 0) goto LAB_0086ba64;
LAB_0086b98c:
    lVar7 = *(long *)(lVar6 + 0x3e0);
  }
  else {
    if (iVar5 == 3) {
      if (1 < *param_7) {
        param_1[7] = param_1[3];
        param_1[6] = param_1[2];
        param_1[0x13] = param_1[0xd];
        param_1[0x12] = param_1[0xc];
        goto LAB_0086b908;
      }
      uVar3 = 3;
    }
    else {
      param_1[7] = param_1[1];
      param_1[6] = *param_1;
LAB_0086b908:
      uVar3 = 4;
    }
    param_1[3] = param_1[1];
    param_1[2] = *param_1;
    param_1[5] = param_1[1];
    param_1[4] = *param_1;
    lVar8 = tpidr_el0;
    lVar6 = *(long *)(lVar8 + 0x1000b8);
    if (lVar6 != 0) goto LAB_0086b98c;
LAB_0086ba64:
    lVar6 = FUN_00e5d3b4();
    *(long *)(lVar8 + 0x1000b8) = lVar6;
    lVar7 = *(long *)(lVar6 + 0x3e0);
  }
  if (lVar7 != 0) {
    FUN_031d39e0(lVar7,"TthkcdConvexPenetrationUtilExact",0x20);
    lVar6 = *(long *)(lVar8 + 0x1000b8);
  }
  if (lVar6 == 0) {
    lVar6 = FUN_00e5d3b4();
    *(long *)(lVar8 + 0x1000b8) = lVar6;
    lVar8 = *(long *)(*(long *)(lVar6 + 0x3d0) + 0x10);
    if (*(long *)(lVar8 + 8) != 0) goto LAB_0086bab8;
LAB_0086b9d8:
    local_70 = 0x4e40;
    if (lVar8 == 0) goto LAB_0086bac4;
    local_68 = 0x4e40;
    if (*(ulong *)(lVar8 + 0x28) >> 6 < 0x139) {
LAB_0086ba10:
      puVar4 = (undefined8 *)FUN_031cf3b4(lVar8,&local_68);
    }
    else {
      puVar4 = *(undefined8 **)(lVar8 + 0x38);
      if (*(undefined8 **)(lVar8 + 0x40) < puVar4 + 0x9c8) goto LAB_0086ba10;
      *(undefined8 **)(lVar8 + 0x38) = puVar4 + 0x9c8;
    }
  }
  else {
    lVar8 = *(long *)(*(long *)(lVar6 + 0x3d0) + 0x10);
    if (*(long *)(lVar8 + 8) == 0) goto LAB_0086b9d8;
LAB_0086bab8:
    lVar8 = 0;
LAB_0086bac4:
    local_70 = 0x4e40;
    puVar4 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
  }
  *puVar4 = param_2;
  puVar4[1] = param_3;
  puVar4[2] = param_4;
  uVar10 = *param_5;
  puVar4[5] = param_5[1];
  puVar4[4] = uVar10;
  uVar10 = param_5[2];
  puVar4[7] = param_5[3];
  puVar4[6] = uVar10;
  uVar10 = param_5[4];
  puVar4[9] = param_5[5];
  puVar4[8] = uVar10;
  uVar10 = param_5[6];
  puVar4[0xb] = param_5[7];
  puVar4[10] = uVar10;
  puVar4[0xc] = *param_6;
  uVar10 = *param_6;
  puVar4[0xe] = param_1;
  puVar4[0xf] = param_1 + 0xc;
  *(undefined4 *)(puVar4 + 0x10) = uVar3;
  fVar9 = (float)uVar10;
  fVar11 = (float)((ulong)uVar10 >> 0x20);
  puVar4[0xd] = CONCAT44(fVar11 * fVar11,fVar9 * fVar9);
  uVar3 = FUN_0086dc4c(puVar4,param_9);
  *param_6 = puVar4[0xc];
  if (lVar8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar4,0x4e40);
  }
  else if ((*(ulong *)(lVar8 + 0x28) >> 6 < 0x139) ||
          (*(undefined8 **)(lVar8 + 0x38) != puVar4 + 0x9c8)) {
    FUN_031cf710(lVar8,puVar4,0x4e40);
  }
  else {
    *(undefined8 **)(lVar8 + 0x38) = puVar4;
    if (*(undefined8 **)(lVar8 + 0x48) == puVar4) {
      FUN_031cf578(lVar8);
    }
  }
  if (lVar7 != 0) {
    FUN_031d3a90(lVar7,&DAT_03c2d363);
  }
  *param_7 = 3;
  *param_8 = 3;
  if (*(short *)((long)param_1 + 0x1c) == *(short *)((long)param_1 + 0x2c)) {
    iVar5 = *param_7;
LAB_0086bbec:
    iVar5 = iVar5 + -1;
    *param_7 = iVar5;
  }
  else {
    iVar5 = *param_7;
    if (*(short *)((long)param_1 + 0xc) == *(short *)((long)param_1 + 0x2c)) goto LAB_0086bbec;
  }
  if ((1 < iVar5) && (*(short *)((long)param_1 + 0xc) == *(short *)((long)param_1 + 0x1c))) {
    *param_7 = (int)((long)iVar5 + -1);
    uVar10 = param_1[((long)iVar5 + -1) * 2];
    param_1[1] = (param_1 + ((long)iVar5 + -1) * 2)[1];
    *param_1 = uVar10;
  }
  if (*(short *)((long)param_1 + 0x7c) == *(short *)((long)param_1 + 0x8c)) {
    iVar5 = *param_8;
  }
  else {
    iVar5 = *param_8;
    if (*(short *)((long)param_1 + 0x6c) != *(short *)((long)param_1 + 0x8c)) goto LAB_0086bc50;
  }
  iVar5 = iVar5 + -1;
  *param_8 = iVar5;
LAB_0086bc50:
  if ((1 < iVar5) && (*(short *)((long)param_1 + 0x6c) == *(short *)((long)param_1 + 0x7c))) {
    *param_8 = (int)((long)iVar5 + -1);
    uVar10 = param_1[((long)iVar5 + -1) * 2 + 0xc];
    param_1[0xd] = (param_1 + ((long)iVar5 + -1) * 2 + 0xc)[1];
    param_1[0xc] = uVar10;
    iVar5 = *param_8;
  }
  iVar2 = *param_7;
  if (4 < iVar5 + iVar2) {
    piVar1 = param_7;
    if (iVar2 <= iVar5) {
      piVar1 = param_8;
    }
    *piVar1 = 3;
    if (iVar2 <= iVar5) {
      param_8 = param_7;
    }
    *param_8 = 1;
    *(undefined1 *)((long)param_1 + 0xd4) = 1;
  }
  uVar10 = *(undefined8 *)(param_9 + 0x10);
  param_10[1] = *(undefined8 *)(param_9 + 0x18);
  *param_10 = uVar10;
  return uVar3;
}


