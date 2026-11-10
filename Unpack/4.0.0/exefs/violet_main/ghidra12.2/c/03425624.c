/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03425624; name: FUN_03425624
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03425624(long param_1,float *param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_1b0 [192];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  float *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  float local_98;
  float local_94;
  int local_90;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  memset(auStack_1b0,0,0xc0);
  local_90 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_94 = param_2[0xe];
  fVar4 = local_94 + local_94;
  fVar5 = fVar4 * param_2[9];
  fVar6 = param_2[10] * fVar4;
  auVar9 = NEON_fmov(0x3f800000,4);
  fVar4 = param_2[0xb] * fVar4;
  uVar7 = CONCAT44(param_2[1] - local_94 * param_2[10],*param_2 - local_94 * param_2[9]);
  local_98 = -local_94;
  uVar8 = CONCAT44(auVar9._12_4_,param_2[2] - local_94 * param_2[0xb]);
  uStack_d8 = (ulong)(uint)fVar4;
  uStack_e0 = CONCAT44(fVar6,fVar5);
  local_f0 = uVar7;
  uStack_e8 = uVar8;
  local_b0 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    if ((DAT_048af570 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048af570);
      if (iVar1 != 0) {
        _DAT_048af560 = auVar9._0_8_;
        uRam00000000048af568 = auVar9._8_8_;
        __cxa_guard_release(&DAT_048af570);
      }
    }
    auVar9._4_4_ = fVar6;
    auVar9._0_4_ = fVar5;
    auVar9._8_4_ = fVar4;
    auVar9._12_4_ = 0;
    auVar9 = NEON_frecpe(auVar9,4);
    uStack_58 = (ulong)(uint)fVar4;
    uStack_60 = CONCAT44(fVar6,fVar5);
    auVar3._4_4_ = fVar6;
    auVar3._0_4_ = fVar5;
    auVar3._8_4_ = fVar4;
    auVar3._12_4_ = 0;
    auVar3 = NEON_frecps(auVar3,auVar9,4);
    local_74 = 0;
    auVar2._0_8_ = CONCAT44(auVar9._4_4_ * (float)((ulong)_DAT_048af560 >> 0x20) * auVar3._4_4_,
                            auVar9._0_4_ * (float)_DAT_048af560 * auVar3._0_4_);
    auVar2._8_4_ = auVar9._8_4_ * (float)uRam00000000048af568 * auVar3._8_4_;
    auVar2._12_4_ = auVar9._12_4_ * (float)((ulong)uRam00000000048af568 >> 0x20) * auVar3._12_4_;
    uStack_48 = auVar2._8_8_;
    local_70 = uVar7;
    uStack_68 = uVar8;
    local_50 = auVar2._0_8_;
    FUN_03425b68(*(undefined8 *)(param_1 + 0x10),&local_70,&local_74,auStack_1b0);
    if (local_90 != 0) {
      FUN_034257b4(auStack_1b0);
      local_90 = 0;
    }
  }
  uVar7 = local_a0;
  if ((param_3 & 1) != 0) {
    FUN_03424e78(param_1,param_2,local_a8,0);
  }
  if ((param_4 & 1) != 0) {
    FUN_03424e78(param_1,param_2,uVar7,1);
  }
  return;
}


