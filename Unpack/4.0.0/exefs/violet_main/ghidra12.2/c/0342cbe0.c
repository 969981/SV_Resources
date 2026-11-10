/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0342cbe0; name: FUN_0342cbe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0342cbe0(float *param_1,float *param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  ulong local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  ulong local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  int local_1ac;
  byte local_188;
  undefined1 auStack_180 [192];
  ulong local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  int local_9c;
  byte local_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_34;
  
  if (PTR_DAT_047e6e68[0x19] == '\0') {
    return true;
  }
  auVar8 = NEON_fmov(0x3f800000,4);
  uVar1 = *(ulong *)param_1;
  fVar4 = param_2[2] - param_1[2];
  uVar11 = CONCAT44(auVar8._12_4_,param_1[2]);
  uVar9 = CONCAT44(param_2[1] - param_1[1],*param_2 - *param_1);
  uVar10 = (ulong)(uint)fVar4;
  memset(auStack_180,0,0xc0);
  local_9c = 0;
  local_78 = 0;
  uStack_a8 = (ulong)(uint)fVar4;
  local_c0 = uVar1;
  uStack_b8 = uVar11;
  uStack_b0 = uVar9;
  if (*(long *)(param_3 + 0x10) == 0) {
LAB_0342cd20:
    fVar13 = 0.0;
    fVar12 = 0.0;
  }
  else {
    if (((DAT_048af590 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_048af590), iVar3 != 0)) {
      _DAT_048af580 = auVar8._0_8_;
      uRam00000000048af588 = auVar8._8_8_;
      __cxa_guard_release(&DAT_048af590);
    }
    auVar7._8_4_ = fVar4;
    auVar7._0_8_ = uVar9;
    auVar7._12_4_ = 0;
    auVar5 = NEON_frecpe(auVar7,4);
    local_70 = local_70 & 0xffffffff00000000;
    auVar7 = NEON_frecps(auVar7,auVar5,4);
    auVar6._0_8_ = CONCAT44(auVar5._4_4_ * (float)((ulong)_DAT_048af580 >> 0x20) * auVar7._4_4_,
                            auVar5._0_4_ * (float)_DAT_048af580 * auVar7._0_4_);
    auVar6._8_4_ = auVar5._8_4_ * (float)uRam00000000048af588 * auVar7._8_4_;
    auVar6._12_4_ = auVar5._12_4_ * (float)((ulong)uRam00000000048af588 >> 0x20) * auVar7._12_4_;
    uStack_268 = auVar6._8_8_;
    local_290 = uVar1;
    uStack_288 = uVar11;
    uStack_280 = uVar9;
    uStack_278 = uVar10;
    local_270 = auVar6._0_8_;
    FUN_0342f1b0(*(undefined8 *)(param_3 + 0x10),&local_290,&local_70,auStack_180);
    if (local_9c != 0) {
      bVar2 = FUN_0342f4b0(auStack_180);
      local_78 = bVar2 & 1 | local_78 != 0;
    }
    if (local_78 == 0) goto LAB_0342cd20;
    fVar13 = 1.0;
    fVar12 = 1.0;
  }
  local_9c = 0;
  if (param_4 == 0) goto LAB_0342cdf0;
  local_9c = 0;
  fVar12 = fVar13;
  if (param_4 == param_3) goto LAB_0342cdf0;
  memset(&local_290,0,0xc0);
  local_1ac = 0;
  local_188 = 0;
  local_1d0 = uVar1;
  uStack_1c8 = uVar11;
  uStack_1c0 = uVar9;
  uStack_1b8 = uVar10;
  if (*(long *)(param_4 + 0x10) == 0) {
LAB_0342cde8:
    fVar12 = 0.0;
  }
  else {
    if (((DAT_048af590 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_048af590), iVar3 != 0)) {
      _DAT_048af580 = auVar8._0_8_;
      uRam00000000048af588 = auVar8._8_8_;
      __cxa_guard_release(&DAT_048af590);
    }
    auVar8._8_4_ = fVar4;
    auVar8._0_8_ = uVar9;
    auVar8._12_4_ = 0;
    auVar7 = NEON_frecpe(auVar8,4);
    auVar8 = NEON_frecps(auVar8,auVar7,4);
    local_34 = 0;
    auVar5._0_8_ = CONCAT44(auVar7._4_4_ * (float)((ulong)_DAT_048af580 >> 0x20) * auVar8._4_4_,
                            auVar7._0_4_ * (float)_DAT_048af580 * auVar8._0_4_);
    auVar5._8_4_ = auVar7._8_4_ * (float)uRam00000000048af588 * auVar8._8_4_;
    auVar5._12_4_ = auVar7._12_4_ * (float)((ulong)uRam00000000048af588 >> 0x20) * auVar8._12_4_;
    uStack_48 = auVar5._8_8_;
    local_70 = uVar1;
    uStack_68 = uVar11;
    uStack_60 = uVar9;
    uStack_58 = uVar10;
    local_50 = auVar5._0_8_;
    FUN_0342f1b0(*(undefined8 *)(param_4 + 0x10),&local_70,&local_34,&local_290);
    if (local_1ac != 0) {
      bVar2 = FUN_0342f4b0(&local_290);
      local_188 = bVar2 & 1 | local_188 != 0;
    }
    if (local_188 == 0) goto LAB_0342cde8;
    fVar12 = 1.0;
  }
  local_1ac = 0;
LAB_0342cdf0:
  if (*(float *)(param_5 + 0x14) < fVar12) {
    *(float *)(param_5 + 0x14) = fVar12;
    *(undefined1 *)(param_5 + 0x18) = 0;
  }
  if (local_9c != 0) {
    bVar2 = FUN_0342f4b0(auStack_180);
    local_78 = bVar2 & 1 | local_78 != 0;
  }
  return local_78 == 0;
}


