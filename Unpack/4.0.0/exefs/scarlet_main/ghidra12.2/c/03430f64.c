/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03430f64; name: FUN_03430f64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_03430f64(long *param_1,undefined1 (*param_2) [16],float *param_3,long param_4,
                 undefined8 param_5,long param_6,long param_7,undefined8 param_8,long param_9)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined1 auStack_1c0 [192];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  long lStack_d8;
  int local_c8;
  byte local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_44;
  
  local_e0 = param_8;
  if ((param_4 == 0) || (param_7 != 0)) {
    lStack_d8 = param_7;
    if ((param_4 == 0) && (param_7 != 0)) {
      local_1e0 = *(float *)*param_2;
      fStack_1dc = *(float *)(*param_2 + 4);
      fStack_1d8 = *(float *)(*param_2 + 8);
      fStack_1d4 = *(float *)(*param_2 + 0xc);
      local_1d0 = *param_3 - local_1e0;
      fStack_1cc = param_3[1] - fStack_1dc;
      fStack_1c8 = param_3[2] - fStack_1d8;
      fStack_1c4 = param_3[3] - fStack_1d4;
      if (param_6 == 0) {
        memset(auStack_1c0,0,0xc0);
        local_e0 = param_5;
        goto LAB_03431150;
      }
      memset(auStack_1c0,0,0xc0);
      local_e0 = param_7;
      lStack_d8 = param_6;
      goto LAB_03431008;
    }
    if ((param_4 != 0) && (param_7 != 0)) {
      auVar5 = *param_2;
      local_1d0 = *param_3 - *(float *)*param_2;
      fStack_1cc = param_3[1] - *(float *)(*param_2 + 4);
      fStack_1c8 = param_3[2] - *(float *)(*param_2 + 8);
      fStack_1c4 = param_3[3] - *(float *)(*param_2 + 0xc);
      memset(auStack_1c0,0,0xc0);
      auVar11._4_4_ = fStack_1cc;
      auVar11._0_4_ = local_1d0;
      auVar11._8_4_ = fStack_1c8;
      auVar11._12_4_ = fStack_1c4;
      local_e0 = param_4;
      goto LAB_03431040;
    }
    auVar12 = *param_2;
    auVar9 = *param_2;
    auVar6 = *param_2;
    auVar10 = *param_2;
    local_1d0 = *param_3 - *(float *)*param_2;
    fStack_1cc = param_3[1] - *(float *)(*param_2 + 4);
    fStack_1c8 = param_3[2] - *(float *)(*param_2 + 8);
    fStack_1c4 = param_3[3] - *(float *)(*param_2 + 0xc);
    if ((param_6 == 0) || (param_9 == 0)) {
      if (param_6 != 0) {
        memset(auStack_1c0,0,0xc0);
        auVar12._4_4_ = fStack_1cc;
        auVar12._0_4_ = local_1d0;
        auVar12._8_4_ = fStack_1c8;
        auVar12._12_4_ = fStack_1c4;
        lStack_d8 = param_6;
        goto LAB_03431154;
      }
      if (param_9 != 0) {
        memset(auStack_1c0,0,0xc0);
        local_f0 = CONCAT44(fStack_1cc,local_1d0);
        auVar12._8_4_ = fStack_1c8;
        auVar12._0_8_ = local_f0;
        auVar12._12_4_ = fStack_1c4;
        lStack_d8 = param_9;
        local_c8 = 0;
        local_a0 = 0;
        uStack_f8 = auVar9._8_8_;
        local_100 = auVar9._0_8_;
        uStack_e8 = auVar12._8_8_;
        lVar4 = *param_1;
        bVar2 = 0;
        if (*(long *)(lVar4 + 8) == 0) goto LAB_034312dc;
        local_e0 = param_5;
        if ((DAT_048af850 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_048af850);
          auVar12._4_4_ = fStack_1cc;
          auVar12._0_4_ = local_1d0;
          if (iVar3 != 0) {
            auVar6 = NEON_fmov(0x3f800000,4);
            uRam00000000048af848 = auVar6._8_8_;
            _DAT_048af840 = auVar6._0_8_;
            __cxa_guard_release(&DAT_048af850);
          }
        }
        local_90 = *(undefined8 *)*param_2;
        uStack_88 = *(undefined8 *)(*param_2 + 8);
        goto LAB_0343118c;
      }
      memset(auStack_1c0,0,0xc0);
      local_f0 = CONCAT44(fStack_1cc,local_1d0);
      auVar10._8_4_ = fStack_1c8;
      auVar10._0_8_ = local_f0;
      auVar10._12_4_ = fStack_1c4;
      local_c8 = 0;
      local_a0 = 0;
      uStack_f8 = auVar12._8_8_;
      local_100 = auVar12._0_8_;
      uStack_e8 = auVar10._8_8_;
      lVar4 = *param_1;
      bVar2 = 0;
      if (*(long *)(lVar4 + 8) == 0) goto LAB_034312dc;
      local_e0 = param_5;
      lStack_d8 = param_8;
      if ((DAT_048af8d0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_048af8d0);
        auVar10._4_4_ = fStack_1cc;
        auVar10._0_4_ = local_1d0;
        if (iVar3 != 0) {
          auVar6 = NEON_fmov(0x3f800000,4);
          uRam00000000048af8c8 = auVar6._8_8_;
          _DAT_048af8c0 = auVar6._0_8_;
          __cxa_guard_release(&DAT_048af8d0);
        }
      }
      local_90 = *(undefined8 *)*param_2;
      uStack_88 = *(undefined8 *)(*param_2 + 8);
      local_44 = 0;
      uStack_78 = auVar10._8_8_;
      uStack_80 = auVar10._0_8_;
      auVar6 = NEON_frecpe(auVar10,4);
      auVar10 = NEON_frecps(auVar10,auVar6,4);
      auVar9._0_8_ = CONCAT44(auVar6._4_4_ * (float)((ulong)_DAT_048af8c0 >> 0x20) * auVar10._4_4_,
                              auVar6._0_4_ * (float)_DAT_048af8c0 * auVar10._0_4_);
      auVar9._8_4_ = auVar6._8_4_ * (float)uRam00000000048af8c8 * auVar10._8_4_;
      auVar9._12_4_ = auVar6._12_4_ * (float)((ulong)uRam00000000048af8c8 >> 0x20) * auVar10._12_4_;
      uStack_68 = auVar9._8_8_;
      local_70 = auVar9._0_8_;
      FUN_03438120(*(undefined8 *)(lVar4 + 8),&local_90,&local_44,auStack_1c0);
      if (local_c8 == 0) goto LAB_034312d8;
      bVar2 = FUN_03438430(auStack_1c0);
      goto LAB_034311cc;
    }
    memset(auStack_1c0,0,0xc0);
    puVar1 = PTR_DAT_047e6db0;
    local_f0 = CONCAT44(fStack_1cc,local_1d0);
    auVar11._8_4_ = fStack_1c8;
    auVar11._0_8_ = local_f0;
    auVar11._12_4_ = fStack_1c4;
    lStack_d8 = param_9;
    local_c8 = 0;
    local_a0 = 0;
    uStack_f8 = auVar10._8_8_;
    local_100 = auVar10._0_8_;
    uStack_e8 = auVar11._8_8_;
    lVar4 = *param_1;
    bVar2 = 0;
    if (*(long *)(lVar4 + 8) == 0) goto LAB_034312dc;
    local_e0 = param_6;
    if ((*PTR_DAT_047e6da8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047e6da8);
      auVar11._4_4_ = fStack_1cc;
      auVar11._0_4_ = local_1d0;
      if (iVar3 != 0) {
        auVar6 = NEON_fmov(0x3f800000,4);
        *(long *)(puVar1 + 8) = auVar6._8_8_;
        *(long *)puVar1 = auVar6._0_8_;
        __cxa_guard_release(PTR_DAT_047e6da8);
      }
    }
    local_90 = *(undefined8 *)*param_2;
    uStack_88 = *(undefined8 *)(*param_2 + 8);
    uVar14 = *(undefined8 *)(puVar1 + 8);
    uVar13 = *(undefined8 *)puVar1;
    uStack_78 = auVar11._8_8_;
    uStack_80 = auVar11._0_8_;
    auVar6 = NEON_frecpe(auVar11,4);
LAB_03431084:
    auVar10 = NEON_frecps(auVar11,auVar6,4);
    local_44 = 0;
    auVar7._0_8_ = CONCAT44(auVar6._4_4_ * (float)((ulong)uVar13 >> 0x20) * auVar10._4_4_,
                            auVar6._0_4_ * (float)uVar13 * auVar10._0_4_);
    auVar7._8_4_ = auVar6._8_4_ * (float)uVar14 * auVar10._8_4_;
    auVar7._12_4_ = auVar6._12_4_ * (float)((ulong)uVar14 >> 0x20) * auVar10._12_4_;
    uStack_68 = auVar7._8_8_;
    local_70 = auVar7._0_8_;
    FUN_0341d17c(lVar4,*(undefined8 *)(lVar4 + 8),&local_90,&local_44,auStack_1c0,1);
    if (local_c8 == 0) {
LAB_034312d8:
      bVar2 = local_a0;
      goto LAB_034312dc;
    }
    bVar2 = FUN_0341d62c(auStack_1c0);
  }
  else {
    local_1e0 = *(float *)*param_2;
    fStack_1dc = *(float *)(*param_2 + 4);
    fStack_1d8 = *(float *)(*param_2 + 8);
    fStack_1d4 = *(float *)(*param_2 + 0xc);
    local_1d0 = *param_3 - local_1e0;
    fStack_1cc = param_3[1] - fStack_1dc;
    fStack_1c8 = param_3[2] - fStack_1d8;
    fStack_1c4 = param_3[3] - fStack_1d4;
    if (param_9 != 0) {
      memset(auStack_1c0,0,0xc0);
      lStack_d8 = param_9;
      local_e0 = param_4;
LAB_03431008:
      auVar5._4_4_ = fStack_1dc;
      auVar5._0_4_ = local_1e0;
      auVar5._8_4_ = fStack_1d8;
      auVar5._12_4_ = fStack_1d4;
      auVar11._4_4_ = fStack_1cc;
      auVar11._0_4_ = local_1d0;
      auVar11._8_4_ = fStack_1c8;
      auVar11._12_4_ = fStack_1c4;
LAB_03431040:
      local_c8 = 0;
      uStack_f8 = auVar5._8_8_;
      local_100 = auVar5._0_8_;
      uStack_e8 = auVar11._8_8_;
      local_f0 = auVar11._0_8_;
      local_a0 = 0;
      lVar4 = *param_1;
      bVar2 = 0;
      if (*(long *)(lVar4 + 8) == 0) goto LAB_034312dc;
      if ((*PTR_DAT_047e6da8 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(PTR_DAT_047e6da8);
        puVar1 = PTR_DAT_047e6db0;
        auVar11._4_4_ = fStack_1cc;
        auVar11._0_4_ = local_1d0;
        auVar11._8_4_ = fStack_1c8;
        auVar11._12_4_ = fStack_1c4;
        if (iVar3 != 0) {
          auVar6 = NEON_fmov(0x3f800000,4);
          *(long *)(PTR_DAT_047e6db0 + 8) = auVar6._8_8_;
          *(long *)puVar1 = auVar6._0_8_;
          __cxa_guard_release(PTR_DAT_047e6da8);
        }
      }
      local_90 = *(undefined8 *)*param_2;
      uStack_88 = *(undefined8 *)(*param_2 + 8);
      uStack_78 = auVar11._8_8_;
      uStack_80 = auVar11._0_8_;
      auVar6 = NEON_frecpe(auVar11,4);
      uVar14 = *(undefined8 *)(PTR_DAT_047e6db0 + 8);
      uVar13 = *(undefined8 *)PTR_DAT_047e6db0;
      goto LAB_03431084;
    }
    memset(auStack_1c0,0,0xc0);
    lStack_d8 = param_4;
LAB_03431150:
    auVar6._4_4_ = fStack_1dc;
    auVar6._0_4_ = local_1e0;
    auVar6._8_4_ = fStack_1d8;
    auVar6._12_4_ = fStack_1d4;
    auVar12._4_4_ = fStack_1cc;
    auVar12._0_4_ = local_1d0;
    auVar12._8_4_ = fStack_1c8;
    auVar12._12_4_ = fStack_1c4;
LAB_03431154:
    local_c8 = 0;
    uStack_f8 = auVar6._8_8_;
    local_100 = auVar6._0_8_;
    uStack_e8 = auVar12._8_8_;
    local_f0 = auVar12._0_8_;
    local_a0 = 0;
    lVar4 = *param_1;
    bVar2 = 0;
    if (*(long *)(lVar4 + 8) == 0) goto LAB_034312dc;
    if ((DAT_048af850 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_048af850);
      auVar12._4_4_ = fStack_1cc;
      auVar12._0_4_ = local_1d0;
      auVar12._8_4_ = fStack_1c8;
      auVar12._12_4_ = fStack_1c4;
      if (iVar3 != 0) {
        auVar6 = NEON_fmov(0x3f800000,4);
        uRam00000000048af848 = auVar6._8_8_;
        _DAT_048af840 = auVar6._0_8_;
        __cxa_guard_release(&DAT_048af850);
      }
    }
    local_90 = *(undefined8 *)*param_2;
    uStack_88 = *(undefined8 *)(*param_2 + 8);
LAB_0343118c:
    uStack_78 = auVar12._8_8_;
    uStack_80 = auVar12._0_8_;
    auVar6 = NEON_frecpe(auVar12,4);
    auVar10 = NEON_frecps(auVar12,auVar6,4);
    local_44 = 0;
    auVar8._0_8_ = CONCAT44(auVar6._4_4_ * (float)((ulong)_DAT_048af840 >> 0x20) * auVar10._4_4_,
                            auVar6._0_4_ * (float)_DAT_048af840 * auVar10._0_4_);
    auVar8._8_4_ = auVar6._8_4_ * (float)uRam00000000048af848 * auVar10._8_4_;
    auVar8._12_4_ = auVar6._12_4_ * (float)((ulong)uRam00000000048af848 >> 0x20) * auVar10._12_4_;
    uStack_68 = auVar8._8_8_;
    local_70 = auVar8._0_8_;
    FUN_03437a78(*(undefined8 *)(lVar4 + 8),&local_90,&local_44,auStack_1c0);
    if (local_c8 == 0) goto LAB_034312d8;
    bVar2 = FUN_03437dac(auStack_1c0);
  }
LAB_034311cc:
  bVar2 = bVar2 & 1 | local_a0 != 0;
LAB_034312dc:
  return bVar2 != 0;
}


