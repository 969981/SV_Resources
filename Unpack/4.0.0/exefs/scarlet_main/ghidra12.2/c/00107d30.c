/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00107d30; name: FUN_00107d30
 */


uint FUN_00107d30(int *param_1,uint *param_2,undefined8 param_3,long param_4,long *param_5,
                 uint param_6,uint param_7,undefined4 param_8)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint *puVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint auStack_d0 [2];
  undefined8 uStack_c8;
  undefined4 auStack_c0 [4];
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  uint local_64;
  
  local_b0 = (long)auStack_c0 + (0x10 - (*param_5 + 0x1eU & 0xfffffffffffffff0));
  local_a8 = local_b0 - (param_5[1] + 0x1eU & 0xfffffffffffffff0);
  local_a0 = local_a8 - (param_5[2] + 0x1eU & 0xfffffffffffffff0);
  local_98 = local_a0 - (param_5[3] + 0x1eU & 0xfffffffffffffff0);
  local_90 = local_98 - (param_5[4] + 0x1eU & 0xfffffffffffffff0);
  local_88 = local_90 - (param_5[5] + 0x1eU & 0xfffffffffffffff0);
  local_80 = local_88 - (param_5[6] + 0x1eU & 0xfffffffffffffff0);
  local_78 = local_80 - (param_5[7] + 0x1eU & 0xfffffffffffffff0);
  lVar12 = local_78 - (param_5[8] + 0x1eU & 0xfffffffffffffff0);
  iVar6 = param_1[5];
  lVar14 = (long)iVar6;
  puVar1 = (uint *)(param_4 + 4);
  iVar3 = 0;
  if (iVar6 + 1 < *param_1) {
    iVar3 = iVar6 + 1;
  }
  local_70 = lVar12;
  if ((param_7 >> 0x14 & 1) == 0) {
    uVar13 = 0xffffffff;
    puVar10 = param_2;
  }
  else {
    if ((param_6 >> 0x14 & 1) == 0) {
      uVar13 = 0xffffffff;
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + lVar14 * 0x14 + 0x12);
      uVar9 = *(undefined8 *)(param_1 + (long)iVar3 * 0x14 + 0x12);
      iVar6 = param_1[1];
      iVar4 = param_1[2];
      iVar5 = param_1[lVar14 * 0x14 + 0x15];
      *(undefined4 *)(lVar12 + -0x10) = param_8;
      *(uint **)(lVar12 + -0x18) = &local_64;
      *(uint *)(lVar12 + -0x20) = param_6;
      FUN_001080b0(uVar9,uVar11,iVar6,iVar4,iVar5,param_2 + 1,puVar1,&local_b0);
      uVar13 = local_64;
    }
    puVar10 = (uint *)((long)param_2 + (ulong)*param_2);
    if (puVar10 < param_2) goto LAB_00108068;
  }
  if (puVar10 < puVar1) {
    puVar2 = puVar10 + 1;
    if ((param_6 & 0x8000) != 0) {
      puVar2 = puVar10;
    }
    puVar10 = puVar2;
    uVar7 = uVar13;
    if ((param_6 >> 9 & 1) == 0) {
      uVar11 = *(undefined8 *)(param_1 + lVar14 * 0x14 + 6);
      iVar5 = (param_1 + lVar14 * 0x14 + 6)[3];
      uVar9 = *(undefined8 *)(param_1 + (long)iVar3 * 0x14 + 6);
      iVar6 = param_1[1];
      iVar4 = param_1[2];
      *(undefined4 *)(lVar12 + -0x10) = param_8;
      *(uint **)(lVar12 + -0x18) = &local_64;
      *(uint *)(lVar12 + -0x20) = param_6 & 0xffefffff;
      puVar10 = (uint *)FUN_001080b0(uVar9,uVar11,iVar6,iVar4,iVar5,puVar2,puVar1,&local_b0);
      uVar7 = local_64;
      if (uVar13 <= local_64) {
        uVar7 = uVar13;
      }
    }
    if ((param_6 >> 0xf & 1) == 0) {
      puVar10 = (uint *)((long)puVar2 + ((ulong)puVar2[-1] - 4));
    }
    uVar13 = uVar7;
    if (((puVar10 < puVar1) && ((param_6 >> 0x11 & 1) == 0)) && (param_2 <= puVar10)) {
      uVar11 = *(undefined8 *)(param_1 + lVar14 * 0x14 + 10);
      uVar9 = *(undefined8 *)(param_1 + (long)iVar3 * 0x14 + 10);
      iVar6 = param_1[3];
      iVar4 = param_1[4];
      iVar5 = param_1[lVar14 * 0x14 + 0xd];
      *(undefined4 *)(lVar12 + -0x10) = param_8;
      *(uint **)(lVar12 + -0x18) = &local_64;
      *(uint *)(lVar12 + -0x20) = param_6 & 0xffefffff;
      puVar10 = (uint *)FUN_001080b0(uVar9,uVar11,iVar6,iVar4,iVar5,puVar10,puVar1,&local_b0);
      local_64 = local_64 << 2;
      uVar8 = local_64;
      if (uVar7 <= local_64) {
        uVar8 = uVar7;
      }
      uVar13 = uVar8;
      if ((param_2 <= puVar10) && (puVar10 < puVar1)) {
        uVar9 = *(undefined8 *)(param_1 + (long)iVar3 * 0x14 + 0xe);
        iVar3 = param_1[3];
        iVar6 = param_1[4];
        uVar11 = *(undefined8 *)(param_1 + lVar14 * 0x14 + 0xe);
        iVar4 = param_1[lVar14 * 0x14 + 0x11];
        *(undefined4 *)(lVar12 + -0x10) = param_8;
        *(uint **)(lVar12 + -0x18) = &local_64;
        *(uint *)(lVar12 + -0x20) = param_6 & 0xffefffff;
        FUN_001080b0(uVar9,uVar11,iVar3,iVar6,iVar4,puVar10,puVar1,&local_b0);
        uVar13 = local_64 << 2;
        if (uVar8 <= local_64 << 2) {
          uVar13 = uVar8;
        }
      }
    }
  }
LAB_00108068:
  uVar7 = (uint)(param_1[2] * param_1[1]) >> 6;
  uVar8 = 0;
  if (uVar7 != 0) {
    uVar8 = ((uVar7 - uVar13) * 100) / uVar7;
  }
  return uVar8;
}


