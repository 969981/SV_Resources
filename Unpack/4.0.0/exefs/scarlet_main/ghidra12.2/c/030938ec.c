/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030938ec; name: FUN_030938ec
 */


void FUN_030938ec(long param_1,undefined4 param_2,float *param_3,long *param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  short sVar8;
  undefined1 auVar9 [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [12];
  int iVar12;
  void *__src;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  void *__src_00;
  ushort uVar18;
  uint uVar19;
  long *plVar20;
  long lVar21;
  undefined1 uVar22;
  int *piVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  uint *puVar28;
  long lVar29;
  undefined1 auVar30 [16];
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float local_c0 [2];
  float local_b8 [2];
  float local_b0 [2];
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  
  iVar12 = *(int *)(param_1 + 0x40);
  iVar7 = *(int *)(param_1 + 0xf8);
  plVar20 = (long *)((long)iVar7 + 4);
  fVar32 = *param_3;
  fVar34 = param_3[1];
  fVar36 = param_3[2];
  fVar38 = param_3[3];
  fVar33 = param_3[4];
  fVar35 = param_3[5];
  fVar37 = param_3[6];
  fVar39 = param_3[7];
  pauVar10 = (undefined1 (*) [16])(param_3 + 8);
  uVar13 = *(ulong *)*pauVar10;
  auVar30 = NEON_ext(*pauVar10,*pauVar10,8,1);
  if ((int)(*(uint *)(param_1 + 0xfc) & 0x7fffffff) < (int)plVar20) {
    FUN_02e8df28(param_1 + 0xf0,PTR_PTR_047d1a50,plVar20);
  }
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0xf0) + (long)iVar7 * 0x10);
  iVar7 = iVar7 + iVar12;
  puVar3[1] = uVar13 & 0xffffffff;
  *puVar3 = CONCAT44(fVar33,fVar32);
  puVar3[3] = uVar13 >> 0x20;
  puVar3[2] = CONCAT44(fVar35,fVar34);
  puVar3[5] = (ulong)auVar30._0_4_;
  puVar3[4] = CONCAT44(fVar37,fVar36);
  puVar3[7] = (ulong)auVar30._4_4_;
  puVar3[6] = CONCAT44(fVar39,fVar38);
  *(int *)(param_1 + 0xf8) = (int)plVar20;
  fVar32 = param_3[0xf];
  if (param_3[0xe] == fVar32) {
    local_a8 = 0;
    local_a0 = -0x8000000000000000;
    local_98 = 0;
    local_90 = -0x8000000000000000;
    local_88 = 0;
    local_80 = -0x8000000000000000;
    local_b0[0] = fVar32;
    iVar12 = FUN_03093858(param_1 + 0x188,local_b0,&local_a8);
    lVar21 = local_80;
    uVar13 = (ulong)local_80._4_4_;
    local_80 = (ulong)local_80._4_4_ << 0x20;
    if ((-1 < lVar21) && (local_88 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_88,uVar13 << 2);
    }
    lVar21 = local_90;
    uVar13 = (ulong)local_90._4_4_;
    local_88 = 0;
    local_80 = CONCAT44(0x80000000,(undefined4)local_80);
    local_90 = (ulong)local_90._4_4_ << 0x20;
    if ((-1 < lVar21) && (local_98 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_98,uVar13 << 2);
    }
    lVar21 = local_a0;
    local_90 = CONCAT44(0x80000000,(undefined4)local_90);
    uVar13 = (ulong)local_a0._4_4_;
    local_98 = 0;
    local_a0 = (ulong)local_a0._4_4_ << 0x20;
    if ((-1 < lVar21) && (local_a8 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_a8,uVar13 * 0x14);
    }
    lVar25 = *(long *)(param_1 + 0x188);
    lVar27 = lVar25 + (long)iVar12 * 0x38;
    lVar16 = (long)iVar12;
    puVar28 = (uint *)(lVar27 + 0x10);
    uVar19 = *puVar28;
    plVar20 = (long *)(ulong)uVar19;
    lVar21 = *(long *)(param_1 + 0x18) + (long)(int)fVar32 * 0x10;
    plVar15 = (long *)(lVar27 + 8);
    sVar8 = *(short *)(lVar21 + 10) + *(short *)(lVar21 + 8);
    if (0 < (int)uVar19) {
      lVar27 = *plVar15;
      lVar21 = 0;
      plVar17 = (long *)0x0;
      do {
        if ((*(byte *)(lVar27 + lVar21 + 0x10) >> 3 & 1) != 0) {
          lVar26 = lVar21 + 0x24;
          plVar14 = plVar17;
          goto LAB_03093e38;
        }
        plVar17 = (long *)((long)plVar17 + 1);
        lVar21 = lVar21 + 0x14;
      } while (plVar20 != plVar17);
    }
    lVar26 = lVar25 + lVar16 * 0x38;
    lVar27 = (long)*(int *)(lVar26 + 0x20);
    lVar21 = lVar27 + (long)*(int *)(param_1 + 0x60) * 2;
    sVar8 = sVar8 + (short)uVar19;
    iVar12 = (int)lVar21;
    if ((int)(*(uint *)(lVar26 + 0x24) & 0x7fffffff) < iVar12) {
      FUN_02e9b320((long *)(lVar26 + 0x18),PTR_PTR_047d1a50,lVar21);
      uVar19 = *puVar28;
    }
    *(int *)(lVar26 + 0x20) = iVar12;
    uVar2 = uVar19 + 2;
    lVar21 = *(long *)(lVar26 + 0x18) + lVar27 * 4;
    if ((int)(*(uint *)(lVar25 + lVar16 * 0x38 + 0x14) & 0x7fffffff) < (int)uVar2) {
      FUN_0309515c(plVar15,PTR_PTR_047d1a50,(long)(int)uVar2);
    }
    *puVar28 = uVar2;
    *param_4 = *plVar15 + (long)(int)uVar19 * 0x14;
    iVar12 = *(int *)(param_1 + 0x60);
    *(short *)(param_4 + 3) = sVar8;
    param_4[1] = lVar21;
    param_4[2] = lVar21 + (long)iVar12 * 4;
    lVar25 = lVar25 + lVar16 * 0x38;
    piVar23 = (int *)(lVar25 + 0x30);
    iVar12 = *piVar23;
    lVar16 = (long)iVar12;
    plVar20 = (long *)(lVar25 + 0x28);
    if ((int)(*(uint *)(lVar25 + 0x34) & 0x7fffffff) <= iVar12) {
      FUN_03095b0c(plVar20,lVar16 + 1);
      iVar12 = *piVar23;
    }
    *(undefined4 *)(*plVar20 + (long)iVar12 * 4) = param_2;
    *piVar23 = (int)(lVar16 + 1);
    param_4[4] = *param_4 + 0x14;
    iVar12 = *(int *)(param_1 + 0x60);
    lVar21 = lVar21 + (long)iVar12 * 4;
    param_4[5] = lVar21;
    param_4[6] = lVar21 + (long)iVar12 * 4;
    *(short *)(param_4 + 7) = sVar8 + 1;
    iVar12 = *piVar23;
    lVar21 = (long)iVar12;
    if ((int)(*(uint *)(lVar25 + 0x34) & 0x7fffffff) <= iVar12) {
      FUN_03095b0c(plVar20,lVar21 + 1);
      iVar12 = *piVar23;
    }
    *(undefined4 *)(*plVar20 + (long)iVar12 * 4) = param_2;
    *piVar23 = (int)(lVar21 + 1);
  }
  else {
    local_b8[0] = param_3[0xe];
    FUN_03093548(param_1,local_b8,param_2,param_4);
    local_c0[0] = param_3[0xf];
    FUN_03093548(param_1,local_c0,param_2,param_4 + 4);
  }
  goto LAB_03093cbc;
  while (pbVar1 = (byte *)(lVar27 + lVar26), lVar26 = lVar26 + 0x14, (*pbVar1 >> 3 & 1) == 0) {
LAB_03093e38:
    plVar14 = (long *)((long)plVar14 + 1);
    if (plVar20 <= plVar14) {
      if ((int)(*(uint *)(lVar25 + lVar16 * 0x38 + 0x14) & 0x7fffffff) <= (int)uVar19) {
        FUN_0309515c(plVar15,PTR_PTR_047d1a50,(long)(int)uVar19 + 1);
        plVar20 = (long *)(long)(int)*puVar28;
        lVar27 = *plVar15;
      }
      lVar27 = lVar27 + (long)plVar20 * 0x14;
      *puVar28 = (uint)((long)(int)uVar19 + 1);
      *(undefined8 *)(lVar27 + 8) = 0xffffffffffffffff;
      *(undefined4 *)(lVar27 + 0x10) = 4;
      param_4[4] = lVar27;
      lVar26 = lVar25 + lVar16 * 0x38;
      lVar29 = (long)*(int *)(lVar26 + 0x20);
      lVar27 = lVar29 + *(int *)(param_1 + 0x60);
      plVar14 = (long *)(lVar26 + 0x18);
      iVar12 = (int)lVar27;
      if ((int)(*(uint *)(lVar26 + 0x24) & 0x7fffffff) < iVar12) {
        FUN_02e9b320(plVar14,PTR_PTR_047d1a50,lVar27);
      }
      *(int *)(lVar26 + 0x20) = iVar12;
      lVar27 = *plVar14 + lVar29 * 4;
      iVar12 = *(int *)(param_1 + 0x60);
      param_4[5] = lVar27;
      param_4[6] = lVar27 + (long)iVar12 * 4;
      *(short *)(param_4 + 7) = sVar8 + (short)uVar19;
      lVar25 = lVar25 + lVar16 * 0x38;
      plVar20 = (long *)(lVar25 + 0x30);
      iVar12 = *(int *)plVar20;
      lVar16 = (long)iVar12;
      plVar24 = (long *)(lVar25 + 0x28);
      if ((int)(*(uint *)(lVar25 + 0x34) & 0x7fffffff) <= iVar12) {
        FUN_03095b0c(plVar24,lVar16 + 1);
        iVar12 = *(int *)plVar20;
      }
      *(undefined4 *)(*plVar24 + (long)iVar12 * 4) = param_2;
      *(int *)plVar20 = (int)(lVar16 + 1);
      *param_4 = *plVar15 + lVar21;
      iVar12 = *(int *)(param_1 + 0x60);
      lVar21 = *plVar14 + (long)(iVar12 * (int)plVar17) * 4;
      param_4[1] = lVar21;
      param_4[2] = lVar21 + (long)iVar12 * 4;
      *(short *)(param_4 + 3) = sVar8 + (short)plVar17;
      *(undefined4 *)(*plVar24 + (long)plVar17 * 4) = param_2;
      goto LAB_03093cbc;
    }
  }
  lVar25 = lVar25 + lVar16 * 0x38;
  *param_4 = lVar27 + lVar21;
  iVar12 = *(int *)(param_1 + 0x60);
  lVar21 = *(long *)(lVar25 + 0x18) + (long)(iVar12 * (int)plVar17) * 4;
  param_4[1] = lVar21;
  param_4[2] = lVar21 + (long)iVar12 * 4;
  *(short *)(param_4 + 3) = sVar8 + (short)plVar17;
  *(undefined4 *)(*(long *)(lVar25 + 0x28) + (long)plVar17 * 4) = param_2;
  param_4[4] = *plVar15 + ((ulong)plVar14 & 0xffffffff) * 0x14;
  iVar12 = *(int *)(param_1 + 0x60);
  lVar21 = *(long *)(lVar25 + 0x18) + (long)(iVar12 * (int)plVar14) * 4;
  param_4[5] = lVar21;
  param_4[6] = lVar21 + (long)iVar12 * 4;
  *(short *)(param_4 + 7) = sVar8 + (short)plVar14;
  *(undefined4 *)(*(long *)(lVar25 + 0x28) + ((ulong)plVar14 & 0xffffffff) * 4) = param_2;
LAB_03093cbc:
  uVar18 = (ushort)plVar20;
  uVar5 = *(ushort *)(param_3 + 0x20);
  fVar32 = (float)((uint)uVar5 << 0x10);
  uVar6 = *(ushort *)((long)param_3 + 0x82);
  __src = *(void **)(param_3 + 0x10);
  fVar33 = (float)((uint)uVar6 << 0x10);
  __src_00 = *(void **)(param_3 + 0x18);
  if ((fVar32 < 0.0) || (fVar33 < 0.0)) {
    pauVar11 = (undefined1 (*) [12])(param_3 + 8);
    uVar31 = (undefined4)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20);
    auVar30._12_4_ = uVar31;
    auVar30._0_12_ = *pauVar11;
    auVar9._12_4_ = uVar31;
    auVar9._0_12_ = *pauVar11;
    auVar30 = NEON_ext(auVar30,auVar9,8,1);
    fVar34 = (*param_3 + param_3[1]) * 0.5 - (param_3[2] + param_3[3]) * 0.5;
    fVar35 = (param_3[4] + param_3[5]) * 0.5 - (param_3[6] + param_3[7]) * 0.5;
    fVar36 = ((float)*(undefined8 *)*pauVar11 + (float)((ulong)*(undefined8 *)*pauVar11 >> 0x20)) *
             0.5 - (auVar30._0_4_ + auVar30._4_4_) * 0.5;
    uVar18 = (ushort)((uint)(SQRT(fVar34 * fVar34 + fVar35 * fVar35 + fVar36 * fVar36) * 1.0039062)
                     >> 0x10);
  }
  piVar23 = (int *)*param_4;
  *piVar23 = iVar7;
  piVar23[1] = iVar7 + 1;
  piVar23[2] = -1;
  piVar23[3] = -1;
  piVar23[4] = 0x10;
  uVar22 = 0x30;
  if (((uint)param_3[0x21] & 1) != 0) {
    uVar22 = 0x10;
  }
  *(undefined1 *)(piVar23 + 4) = uVar22;
  uVar4 = uVar18;
  if (0.0 <= fVar32) {
    uVar4 = uVar5;
  }
  *(ushort *)((long)piVar23 + 0x12) = uVar4;
  memcpy((void *)param_4[1],__src,((param_4[2] - param_4[1]) * 0x40000000 >> 0x20) << 2);
  piVar23 = (int *)param_4[4];
  *piVar23 = iVar7 + 2;
  piVar23[1] = iVar7 + 3;
  piVar23[2] = -1;
  piVar23[3] = -1;
  piVar23[4] = 0x10;
  uVar22 = 0x30;
  if (((uint)param_3[0x21] & 2) != 0) {
    uVar22 = 0x10;
  }
  *(undefined1 *)(piVar23 + 4) = uVar22;
  if (0.0 <= fVar33) {
    uVar18 = uVar6;
  }
  *(ushort *)((long)piVar23 + 0x12) = uVar18;
  memcpy((void *)param_4[5],__src_00,((param_4[6] - param_4[5]) * 0x40000000 >> 0x20) << 2);
  return;
}


