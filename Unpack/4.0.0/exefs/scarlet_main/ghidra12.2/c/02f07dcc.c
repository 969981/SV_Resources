/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f07dcc; name: FUN_02f07dcc
 */


void FUN_02f07dcc(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_1d0;
  undefined **ppuStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined *local_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0;
  undefined8 local_19c;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined2 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined1 local_150;
  undefined2 local_14f;
  undefined1 local_14d;
  undefined **local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined *local_120;
  undefined **local_118;
  undefined **local_110;
  undefined4 local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_80;
  float local_78;
  undefined1 local_70 [16];
  undefined1 auStack_60 [16];
  
  (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_3 + 0x18) * 0x200 + 0x18))
            (param_3,*(undefined8 *)(param_5 + 0x20),local_70);
  auVar2 = *(undefined1 (*) [16])(param_2 + 8);
  auVar3 = NEON_fmin(auVar2,auStack_60,4);
  auVar3 = NEON_fmax(auVar3,local_70,4);
  fVar5 = auVar3._0_4_ - auVar2._0_4_;
  fVar6 = auVar3._4_4_ - auVar2._4_4_;
  local_78 = auVar2._8_4_;
  fVar7 = auVar3._8_4_ - local_78;
  fVar8 = auVar3._12_4_ - auVar2._12_4_;
  fVar4 = *(float *)(param_2 + 10);
  if (*(float *)(param_2 + 10) <= 0.0) {
    fVar4 = 0.0;
  }
  fVar5 = fVar5 * fVar5;
  fVar6 = fVar6 * fVar6;
  fVar7 = fVar7 * fVar7;
  fVar8 = fVar8 * fVar8;
  auVar3._4_4_ = fVar6;
  auVar3._0_4_ = fVar5;
  auVar3._8_4_ = fVar7;
  auVar3._12_4_ = fVar8;
  auVar1._4_4_ = fVar6;
  auVar1._0_4_ = fVar5;
  auVar1._8_4_ = fVar7;
  auVar1._12_4_ = fVar8;
  auVar3 = NEON_ext(auVar3,auVar1,8,1);
  if (fVar5 + fVar6 + auVar3._0_4_ <= fVar4 * fVar4) {
    local_108 = 0x90;
    local_e8 = 0x110201;
    local_c8 = 0;
    uStack_c0 = 0x100000040;
    ppuStack_1c8 = &local_100;
    local_e4 = 0;
    local_120 = PTR_DAT_047e3528 + 0x10;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_98 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_100 = PTR_DAT_047e33a0 + 0x10;
    local_80 = auVar2._0_8_;
    local_f0 = 1;
    local_14f = 0xfb00;
    auVar2 = NEON_fmov(0x3f800000,4);
    local_14d = 0;
    local_128 = 0;
    local_f8 = 0;
    local_90 = (undefined2)((uint)(*(float *)PTR_DAT_047e3398 * 0.0 * 1.0039062) >> 0x10);
    local_130 = *(undefined4 *)(param_2 + 10);
    uStack_168 = param_2[1];
    local_170 = *param_2;
    local_160 = *(undefined2 *)(param_2 + 2);
    local_154 = *(undefined4 *)((long)param_2 + 0x1c);
    local_15c = *(undefined8 *)((long)param_2 + 0x14);
    local_150 = *(undefined1 *)(param_2 + 4);
    local_1b0 = PTR_DAT_047d19b0 + 0x200;
    local_1a0 = 0;
    local_19c = 0;
    uStack_188 = auVar2._8_8_;
    local_190 = auVar2._0_8_;
    local_180 = 0;
    uStack_178 = 0;
    local_1d0 = 0;
    local_1c0 = 0;
    uStack_1b8 = 0xffffffff;
    uStack_1a8 = 0;
    local_138 = ppuStack_1c8;
    local_118 = ppuStack_1c8;
    local_110 = ppuStack_1c8;
    FUN_00e5cfa4(param_1,&local_170,&local_1d0,param_3,param_4,param_5,param_6);
    local_120 = PTR_DAT_047d1b30 + 0x10;
    if (local_118 != (undefined **)0x0) {
      (**(code **)(*local_118 + 8))();
    }
  }
  return;
}


