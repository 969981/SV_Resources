/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029fd838; name: FUN_029fd838
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029fd838(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                 long param_5,long *param_6,undefined8 *param_7,undefined4 param_8)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  undefined1 auVar7 [16];
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  long local_260;
  undefined8 local_258;
  long local_250;
  undefined8 local_248;
  long local_240;
  undefined8 local_238;
  undefined1 local_230;
  undefined8 local_22c;
  undefined4 local_224;
  undefined8 local_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined *local_210;
  ulong uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  int local_1f0;
  undefined4 local_1ec;
  float fStack_1e8;
  undefined8 local_1e0;
  float local_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined **local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined1 local_1a2;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  undefined *local_190;
  undefined4 local_188;
  undefined **local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined *local_160;
  ulong uStack_158;
  undefined8 local_150;
  
  if (param_4 <= param_3) {
    auVar7 = NEON_ext(param_1,param_1,8,1);
    local_188 = 0xffffffff;
    local_190 = PTR_DAT_047d9308 + 0x10;
    local_210 = &DAT_0460c748;
    local_180 = &local_210;
    local_178 = 0;
    uStack_170 = 0;
    uStack_208 = 0xffffffff;
    local_200 = 1;
    uStack_1f8 = CONCAT44(uStack_1f8._4_4_,param_8);
    local_260 = 0;
    local_258 = 0;
    local_150 = 0x3f0000003f000000;
    local_160 = param_1._0_8_;
    uStack_158 = (ulong)auVar7._0_4_;
    local_1f0 = (**(code **)(*param_6 + 0x20))(param_6,&local_190,&local_260);
    if (local_1f0 != -1) {
      FUN_029fdb0c(&local_190);
      FUN_01e21c18(&local_190,1,0xffffffff);
      FUN_01e21c48(&local_190,1,param_8);
      auVar12 = NEON_ext(param_2,param_2,8,1);
      fVar6 = param_2._0_4_;
      fVar8 = param_2._4_4_;
      fVar9 = auVar12._0_4_;
      local_1d0 = 0;
      fVar10 = fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8;
      local_1a4 = 1;
      local_1a2 = 1;
      local_1b8 = 0xffffffff;
      local_1b0 = 0;
      local_1e0 = 0;
      local_1c0 = 0xffffffffffffffff;
      local_1a8 = 0x10100;
      if (fVar10 == 0.0) {
        fVar6 = 0.0;
        fVar8 = 0.0;
        fVar9 = 0.0;
        fVar11 = 0.0;
      }
      else {
        fVar10 = SQRT(fVar10);
        fVar11 = SQRT(fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8);
        fVar6 = fVar6 / fVar10;
        fVar8 = fVar8 / fVar11;
        fVar9 = fVar9 / fVar10;
        fVar11 = 0.0 / fVar11;
      }
      _local_1ec = CONCAT44(param_4,100000);
      _fStack_198 = CONCAT44(fVar11,fVar9);
      _local_1a0 = CONCAT44(fVar8,fVar6);
      local_260 = 0;
      local_258 = -0x8000000000000000;
      _local_1d8 = CONCAT44(0x7f7fffee,param_3);
      local_230 = 0;
      local_224 = 0;
      local_250 = 0;
      local_248 = -0x8000000000000000;
      local_240 = 0;
      local_238 = 0x8000000000000000;
      local_22c = 0xffffffff00000000;
      uStack_1f8 = _UNK_03cabe68;
      local_200 = _DAT_03cabe60;
      uStack_218 = 0x7f7fffee;
      uStack_214 = 0x7f7fffee;
      local_220 = 0x7f7fffee7f7fffee;
      local_210 = param_1._0_8_;
      uStack_208 = (ulong)auVar7._0_4_;
      local_1c8 = &local_190;
      iVar4 = FUN_029fdb3c(*(undefined8 *)(*(long *)(param_5 + 8) + 0x130),&local_210,&local_260);
      uVar5 = local_238;
      if (iVar4 != 0) {
        auVar12._8_4_ = uStack_218;
        auVar12._0_8_ = local_220;
        auVar7._8_4_ = uStack_218;
        auVar7._0_8_ = local_220;
        auVar7._12_4_ = uStack_214;
        auVar12._12_4_ = uStack_214;
        auVar7 = NEON_ext(auVar7,auVar12,8,1);
        param_7[1] = (ulong)auVar7._0_4_;
        *param_7 = local_220;
        *(uint *)(param_7 + 2) = local_22c._4_4_ >> 0x16;
        *(uint *)((long)param_7 + 0x14) = local_22c._4_4_ & 0x3fffff;
        *(undefined1 *)(param_7 + 3) = 1;
      }
      puVar2 = PTR_PTR_047d1a50;
      uVar1 = local_238 >> 0x20;
      local_238 = uVar1 << 0x20;
      if ((-1 < (long)uVar5) && (local_240 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_240,uVar1 << 4);
      }
      lVar3 = local_248;
      uVar5 = (ulong)local_248._4_4_;
      local_240 = 0;
      local_238 = CONCAT44(0x80000000,(undefined4)local_238);
      local_248 = (ulong)local_248._4_4_ << 0x20;
      if ((-1 < lVar3) && (local_250 != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,local_250,uVar5 << 2);
      }
      lVar3 = local_258;
      uVar5 = (ulong)local_258._4_4_;
      local_250 = 0;
      local_248 = CONCAT44(0x80000000,(undefined4)local_248);
      local_258 = (ulong)local_258._4_4_ << 0x20;
      if ((-1 < lVar3) && (local_260 != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,local_260,uVar5 << 2);
      }
    }
  }
  return;
}


