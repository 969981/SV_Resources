/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030eb410; name: FUN_030eb410
 */


void FUN_030eb410(undefined8 param_1,long param_2,long param_3,undefined8 *param_4,
                 undefined1 (*param_5) [16],long param_6,long param_7,undefined8 param_8,
                 long param_9,long param_10,char *param_11)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int iVar34;
  undefined4 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  undefined8 uVar41;
  float fVar42;
  undefined1 *local_1d8;
  ulong local_1d0;
  undefined1 auStack_1c8 [64];
  undefined1 *local_188;
  undefined8 local_180;
  undefined1 auStack_178 [64];
  undefined1 *local_138;
  undefined8 local_130;
  undefined1 auStack_128 [64];
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [64];
  long local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  
  local_88 = 0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0x80000000;
  local_98 = 0;
  local_90._0_4_ = 0;
  local_90._4_4_ = 0x80000000;
  fVar32 = (float)param_4[1];
  fVar33 = (float)((ulong)param_4[1] >> 0x20);
  fVar29 = (float)*param_4;
  fVar30 = (float)((ulong)*param_4 >> 0x20);
  uVar27 = param_4[3];
  uVar24 = param_4[2];
  fVar39 = *(float *)(param_4 + 4);
  fVar42 = *(float *)((long)param_4 + 0x24);
  if (0 < (int)((ulong)(param_7 - param_6) >> 3)) {
    FUN_030ed938(&local_88,(param_7 - param_6) * 0x20000000 >> 0x20);
  }
  uVar41 = NEON_fmov(0x3f800000,4);
  fVar31 = (float)((ulong)uVar41 >> 0x20);
  if (param_6 != param_7) {
    fVar23 = (float)uVar24 - fVar29;
    fVar25 = (float)((ulong)uVar24 >> 0x20) - fVar30;
    fVar26 = (float)uVar27 - fVar32;
    fVar28 = ((float)uVar41 / (fVar23 * fVar23 + fVar25 * fVar25 + fVar26 * fVar26)) * fVar39;
    fVar39 = (fVar31 / (fVar23 * fVar23 + fVar25 * fVar25 + fVar26 * fVar26)) * fVar39;
    fVar23 = fVar23 * fVar28;
    fVar25 = fVar25 * fVar39;
    fVar26 = fVar26 * fVar28;
    fVar29 = fVar29 * fVar23;
    fVar30 = fVar30 * fVar25;
    fVar32 = fVar32 * fVar26;
    fVar33 = fVar33 * ((float)((ulong)uVar27 >> 0x20) - fVar33) * fVar39;
    auVar36._4_4_ = fVar30;
    auVar36._0_4_ = fVar29;
    auVar36._8_4_ = fVar32;
    auVar36._12_4_ = fVar33;
    auVar40._4_4_ = fVar30;
    auVar40._0_4_ = fVar29;
    auVar40._8_4_ = fVar32;
    auVar40._12_4_ = fVar33;
    auVar36 = NEON_ext(auVar36,auVar40,8,1);
    fVar42 = fVar42 - (fVar29 + fVar30 + auVar36._0_4_);
    lVar14 = param_6;
    do {
      lVar15 = *(long *)(param_2 + 0x20);
      iVar34 = *(int *)(lVar14 + 4);
      if (iVar34 < *(int *)(lVar15 + 0x30)) {
        lVar20 = *(long *)(lVar15 + 0x28);
        iVar19 = iVar34;
        if (*(int *)(lVar15 + 0x78) != 0) {
          iVar19 = *(int *)(*(long *)(lVar15 + 0x70) + (long)iVar34 * 4);
        }
        if (iVar19 != -1) {
          plVar18 = (long *)(lVar15 + 0xc0);
          iVar34 = iVar19;
          goto LAB_030eb534;
        }
      }
      else {
        plVar18 = (long *)(lVar15 + 0xe0);
        iVar34 = iVar34 - *(int *)(lVar15 + 0x30);
LAB_030eb534:
        lVar20 = *plVar18;
      }
      piVar17 = (int *)(lVar20 + (long)iVar34 * 0x14);
      iVar2 = *(int *)(lVar15 + 0x40);
      lVar14 = lVar14 + 8;
      iVar34 = *piVar17;
      iVar19 = piVar17[1];
      lVar20 = 0x38;
      if (iVar2 <= iVar34) {
        lVar20 = 0xf0;
      }
      iVar1 = 0;
      if (iVar2 <= iVar34) {
        iVar1 = iVar2;
      }
      pfVar3 = (float *)(*(long *)(lVar15 + lVar20) + (long)(iVar34 - iVar1) * 0x10);
      lVar20 = 0x38;
      if (iVar2 <= iVar19) {
        lVar20 = 0xf0;
      }
      iVar34 = 0;
      if (iVar2 <= iVar19) {
        iVar34 = iVar2;
      }
      puVar4 = (undefined8 *)(*(long *)(lVar15 + lVar20) + (long)(iVar19 - iVar34) * 0x10);
      uVar27 = puVar4[1];
      uVar24 = *puVar4;
      lVar15 = (long)(int)local_80;
      local_80._0_4_ = (int)local_80 + 1;
      auVar37._0_4_ = fVar23 * *pfVar3;
      auVar37._4_4_ = fVar25 * pfVar3[1];
      auVar37._8_4_ = fVar26 * pfVar3[2];
      auVar37._12_4_ = fVar42 * pfVar3[3];
      auVar36 = NEON_ext(auVar37,auVar37,8,1);
      fVar29 = fVar23 * (float)uVar24;
      fVar39 = fVar25 * (float)((ulong)uVar24 >> 0x20);
      fVar30 = fVar26 * (float)uVar27;
      fVar32 = fVar42 * (float)((ulong)uVar27 >> 0x20);
      auVar7._4_4_ = fVar39;
      auVar7._0_4_ = fVar29;
      auVar7._8_4_ = fVar30;
      auVar7._12_4_ = fVar32;
      auVar8._4_4_ = fVar39;
      auVar8._0_4_ = fVar29;
      auVar8._8_4_ = fVar30;
      auVar8._12_4_ = fVar32;
      auVar40 = NEON_ext(auVar7,auVar8,8,1);
      *(ulong *)(local_88 + lVar15 * 8) =
           CONCAT44(fVar29 + fVar39 + auVar40._0_4_ + fVar42,
                    auVar37._0_4_ + auVar37._4_4_ + auVar36._0_4_ + fVar42);
    } while (param_7 != lVar14);
  }
  auVar36 = *param_5;
  uVar27 = *(undefined8 *)(param_5[1] + 8);
  uVar24 = *(undefined8 *)param_5[1];
  fVar42 = *(float *)param_5[2];
  fVar29 = *(float *)(param_5[2] + 4);
  if (0 < (int)((ulong)(param_10 - param_9) >> 3)) {
    FUN_030ed938(&local_98,(param_10 - param_9) * 0x20000000 >> 0x20);
  }
  lVar15 = local_88;
  lVar14 = local_98;
  if (param_9 != param_10) {
    fVar39 = (float)uVar24 - auVar36._0_4_;
    fVar30 = (float)((ulong)uVar24 >> 0x20) - auVar36._4_4_;
    fVar32 = (float)uVar27 - auVar36._8_4_;
    fVar33 = ((float)uVar41 / (fVar39 * fVar39 + fVar30 * fVar30 + fVar32 * fVar32)) * fVar42;
    fVar42 = (fVar31 / (fVar39 * fVar39 + fVar30 * fVar30 + fVar32 * fVar32)) * fVar42;
    fVar39 = fVar39 * fVar33;
    fVar30 = fVar30 * fVar42;
    fVar32 = fVar32 * fVar33;
    fVar33 = auVar36._0_4_ * fVar39;
    fVar31 = auVar36._4_4_ * fVar30;
    fVar23 = auVar36._8_4_ * fVar32;
    fVar42 = auVar36._12_4_ * ((float)((ulong)uVar27 >> 0x20) - auVar36._12_4_) * fVar42;
    auVar5._4_4_ = fVar31;
    auVar5._0_4_ = fVar33;
    auVar5._8_4_ = fVar23;
    auVar5._12_4_ = fVar42;
    auVar6._4_4_ = fVar31;
    auVar6._0_4_ = fVar33;
    auVar6._8_4_ = fVar23;
    auVar6._12_4_ = fVar42;
    auVar36 = NEON_ext(auVar5,auVar6,8,1);
    fVar29 = fVar29 - (fVar33 + fVar31 + auVar36._0_4_);
    lVar20 = param_9;
    do {
      lVar16 = *(long *)(param_3 + 0x20);
      iVar34 = *(int *)(lVar20 + 4);
      if (iVar34 < *(int *)(lVar16 + 0x30)) {
        lVar21 = *(long *)(lVar16 + 0x28);
        iVar19 = iVar34;
        if (*(int *)(lVar16 + 0x78) != 0) {
          iVar19 = *(int *)(*(long *)(lVar16 + 0x70) + (long)iVar34 * 4);
        }
        if (iVar19 != -1) {
          plVar18 = (long *)(lVar16 + 0xc0);
          iVar34 = iVar19;
          goto LAB_030eb694;
        }
      }
      else {
        plVar18 = (long *)(lVar16 + 0xe0);
        iVar34 = iVar34 - *(int *)(lVar16 + 0x30);
LAB_030eb694:
        lVar21 = *plVar18;
      }
      piVar17 = (int *)(lVar21 + (long)iVar34 * 0x14);
      iVar2 = *(int *)(lVar16 + 0x40);
      lVar20 = lVar20 + 8;
      iVar34 = *piVar17;
      iVar19 = piVar17[1];
      lVar21 = 0x38;
      if (iVar2 <= iVar34) {
        lVar21 = 0xf0;
      }
      iVar1 = 0;
      if (iVar2 <= iVar34) {
        iVar1 = iVar2;
      }
      pfVar3 = (float *)(*(long *)(lVar16 + lVar21) + (long)(iVar34 - iVar1) * 0x10);
      lVar21 = 0x38;
      if (iVar2 <= iVar19) {
        lVar21 = 0xf0;
      }
      iVar34 = 0;
      if (iVar2 <= iVar19) {
        iVar34 = iVar2;
      }
      puVar4 = (undefined8 *)(*(long *)(lVar16 + lVar21) + (long)(iVar19 - iVar34) * 0x10);
      uVar27 = puVar4[1];
      uVar24 = *puVar4;
      lVar16 = (long)(int)local_90;
      local_90._0_4_ = (int)local_90 + 1;
      auVar38._0_4_ = fVar39 * *pfVar3;
      auVar38._4_4_ = fVar30 * pfVar3[1];
      auVar38._8_4_ = fVar32 * pfVar3[2];
      auVar38._12_4_ = fVar29 * pfVar3[3];
      auVar36 = NEON_ext(auVar38,auVar38,8,1);
      fVar42 = fVar39 * (float)uVar24;
      fVar33 = fVar30 * (float)((ulong)uVar24 >> 0x20);
      fVar31 = fVar32 * (float)uVar27;
      fVar23 = fVar29 * (float)((ulong)uVar27 >> 0x20);
      auVar9._4_4_ = fVar33;
      auVar9._0_4_ = fVar42;
      auVar9._8_4_ = fVar31;
      auVar9._12_4_ = fVar23;
      auVar10._4_4_ = fVar33;
      auVar10._0_4_ = fVar42;
      auVar10._8_4_ = fVar31;
      auVar10._12_4_ = fVar23;
      auVar40 = NEON_ext(auVar9,auVar10,8,1);
      *(ulong *)(local_98 + lVar16 * 8) =
           CONCAT44(fVar42 + fVar33 + auVar40._0_4_ + fVar29,
                    auVar38._0_4_ + auVar38._4_4_ + auVar36._0_4_ + fVar29);
    } while (param_10 != lVar20);
  }
  fVar29 = (float)*param_4 - (float)param_4[2];
  fVar39 = (float)((ulong)*param_4 >> 0x20) - (float)((ulong)param_4[2] >> 0x20);
  fVar30 = (float)param_4[1] - (float)param_4[3];
  fVar29 = fVar29 * fVar29;
  fVar39 = fVar39 * fVar39;
  fVar30 = fVar30 * fVar30;
  fVar32 = *(float *)(param_11 + 4);
  fVar42 = SQRT(fVar29 + fVar39 + fVar30);
  iVar34 = -(uint)(fVar42 == 0.0);
  uVar35 = CONCAT13(~(byte)((uint)iVar34 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar34 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar34 >> 8),~(byte)iVar34)));
  if (*param_11 == '\0') {
    local_e8 = auStack_d8;
    local_e0 = -0x7ffffff800000000;
    local_138 = auStack_128;
    local_130 = -0x7ffffff800000000;
    local_188 = auStack_178;
    local_180 = -0x7ffffff800000000;
    local_1d8 = auStack_1c8;
    local_1d0 = 0x8000000800000000;
    FUN_030ebad0(param_6,param_7,local_88,local_88 + (long)(int)local_80 * 8,&local_e8,&local_188);
    lVar14 = local_98;
    FUN_030ebad0(param_9,param_10,local_98,local_98 + (long)(int)local_90 * 8,&local_138,&local_1d8)
    ;
    FUN_030edd60(CONCAT44(0.0 / SQRT(fVar29 + fVar39 + fVar30),fVar32 / fVar42) &
                 CONCAT44(uVar35,uVar35),param_1,param_2,param_3,param_4,param_5,local_e8,
                 local_e8 + (long)(int)local_e0 * 8,param_8,local_138,
                 local_138 + (long)(int)local_130 * 8,local_188,local_188 + (long)(int)local_180 * 8
                 ,local_1d8,local_1d8 + (long)(int)local_1d0 * 8,param_11[1]);
    uVar11 = local_1d0;
    puVar22 = PTR_PTR_047d1a50;
    uVar13 = local_1d0 >> 0x20;
    local_1d0 = uVar13 << 0x20;
    if ((-1 < (long)uVar11) && (local_1d8 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,local_1d8,uVar13 << 3);
    }
    lVar20 = local_180;
    uVar13 = (ulong)local_180._4_4_;
    local_180 = (ulong)local_180._4_4_ << 0x20;
    if ((-1 < lVar20) && (local_188 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(puVar22 + 0x20) + 0x20))(puVar22 + 0x20,local_188,uVar13 << 3);
    }
    lVar20 = local_130;
    uVar13 = (ulong)local_130._4_4_;
    local_130 = (ulong)local_130._4_4_ << 0x20;
    if ((-1 < lVar20) && (local_138 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(puVar22 + 0x20) + 0x20))(puVar22 + 0x20,local_138,uVar13 << 3);
    }
    lVar20 = local_e0;
    uVar13 = (ulong)local_e0._4_4_;
    local_e0 = (ulong)local_e0._4_4_ << 0x20;
    if ((-1 < lVar20) && (local_e8 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(puVar22 + 0x20) + 0x20))(puVar22 + 0x20,local_e8,uVar13 << 3);
    }
  }
  else {
    FUN_030edd60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 local_88,local_88 + (long)(int)local_80 * 8,local_98,
                 local_98 + (long)(int)local_90 * 8,param_11[1]);
    puVar22 = PTR_PTR_047d1a50;
  }
  uVar12 = local_90._4_4_;
  uVar13 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < (int)uVar12) && (lVar14 != 0)) {
    (**(code **)(*(long *)(puVar22 + 0x20) + 0x20))(puVar22 + 0x20,lVar14,uVar13 << 3);
  }
  uVar12 = local_80._4_4_;
  uVar13 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < (int)uVar12) && (lVar15 != 0)) {
    (**(code **)(*(long *)(puVar22 + 0x20) + 0x20))(puVar22 + 0x20,lVar15,uVar13 << 3);
  }
  return;
}


