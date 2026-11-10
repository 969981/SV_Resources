/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02007410; name: FUN_02007410
 */


uint FUN_02007410(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,undefined8 *param_4,
                 undefined4 param_5)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined8 local_b0;
  uint local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 uStack_40;
  ulong uStack_38;
  
  nn::os::LockMutex((MutexType *)(param_3 + 0x130));
  plVar3 = *(long **)(*(long *)(*(long *)(param_3 + 8) + 0x130) + 0xe0);
  local_78 = 0xffffffff;
  local_a8 = 0xffffffff;
  local_68 = 0;
  uStack_60 = 0;
  local_80 = PTR_DAT_047d9300 + 0x10;
  local_a0 = &DAT_0460c748;
  local_98 = 0xffffffff;
  uStack_90 = 1;
  local_70 = &local_a0;
  local_b0 = 0x3f8000003f800000;
  fStack_44 = 0.0;
  uStack_38 = param_2._8_8_ & 0xffffffff;
  local_88 = param_5;
  fStack_48 = param_1._8_4_;
  uStack_40 = param_2._0_8_;
  local_50 = param_1._0_4_;
  fStack_4c = param_1._4_4_;
  uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_80,&local_b0);
  if ((uVar2 & 1) != 0) {
    fVar5 = (float)((ulong)local_b0 >> 0x20);
    fVar4 = local_50 + ((float)uStack_40 - local_50) * (float)local_b0;
    fStack_4c = fStack_4c + ((float)((ulong)uStack_40 >> 0x20) - fStack_4c) * fVar5;
    fStack_48 = fStack_48 + ((float)uStack_38 - fStack_48) * (float)local_b0;
    fVar5 = fStack_44 + ((float)(uStack_38 >> 0x20) - fStack_44) * fVar5;
    auVar6._4_4_ = fStack_4c;
    auVar6._0_4_ = fVar4;
    auVar6._8_4_ = fStack_48;
    auVar6._12_4_ = fVar5;
    auVar1._4_4_ = fStack_4c;
    auVar1._0_4_ = fVar4;
    auVar1._8_4_ = fStack_48;
    auVar1._12_4_ = fVar5;
    auVar6 = NEON_ext(auVar6,auVar1,8,1);
    param_4[1] = (ulong)auVar6._0_4_;
    *param_4 = CONCAT44(fStack_4c,fVar4);
    *(undefined1 *)(param_4 + 3) = 1;
    *(uint *)(param_4 + 2) = local_a8 >> 0x16;
    *(uint *)((long)param_4 + 0x14) = local_a8 & 0x3fffff;
  }
  nn::os::UnlockMutex((MutexType *)(param_3 + 0x130));
  return uVar2 & 1;
}


