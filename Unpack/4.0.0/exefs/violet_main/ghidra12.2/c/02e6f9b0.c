/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e6f9b0; name: FUN_02e6f9b0
 */


void FUN_02e6f9b0(undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],long param_4,
                 undefined4 param_5)

{
  undefined1 auVar1 [16];
  long *plVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  *(undefined1 *)(param_1 + 3) = 0;
  nn::os::LockMutex((MutexType *)(param_4 + 0x130));
  plVar2 = *(long **)(*(long *)(*(long *)(param_4 + 8) + 0x130) + 0xe0);
  local_78 = 0xffffffff;
  local_a8 = 0xffffffff;
  local_68 = 0;
  uStack_60 = 0;
  local_80 = PTR_DAT_047d9300 + 0x10;
  uStack_38 = param_3._8_8_ & 0xffffffff;
  local_a0 = &DAT_0460c748;
  local_98 = 0xffffffff;
  uStack_90 = 1;
  local_70 = &local_a0;
  local_b0 = 0x3f8000003f800000;
  uStack_48 = (ulong)param_2._8_4_;
  local_88 = param_5;
  uStack_40 = param_3._0_8_;
  local_50 = param_2._0_4_;
  fStack_4c = param_2._4_4_;
  uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_80,&local_b0);
  if ((uVar3 & 1) != 0) {
    fVar6 = (float)((ulong)local_b0 >> 0x20);
    *(undefined1 *)(param_1 + 3) = 1;
    *(uint *)(param_1 + 2) = local_a8 >> 0x16;
    *(uint *)((long)param_1 + 0x14) = local_a8 & 0x3fffff;
    fVar4 = local_50 + ((float)uStack_40 - local_50) * (float)local_b0;
    fStack_4c = fStack_4c + ((float)((ulong)uStack_40 >> 0x20) - fStack_4c) * fVar6;
    fVar5 = (float)uStack_48 + ((float)uStack_38 - (float)uStack_48) * (float)local_b0;
    fVar6 = uStack_48._4_4_ + ((float)(uStack_38 >> 0x20) - uStack_48._4_4_) * fVar6;
    auVar7._4_4_ = fStack_4c;
    auVar7._0_4_ = fVar4;
    auVar7._8_4_ = fVar5;
    auVar7._12_4_ = fVar6;
    auVar1._4_4_ = fStack_4c;
    auVar1._0_4_ = fVar4;
    auVar1._8_4_ = fVar5;
    auVar1._12_4_ = fVar6;
    auVar7 = NEON_ext(auVar7,auVar1,8,1);
    param_1[1] = (ulong)auVar7._0_4_;
    *param_1 = CONCAT44(fStack_4c,fVar4);
  }
  nn::os::UnlockMutex((MutexType *)(param_4 + 0x130));
  return;
}


