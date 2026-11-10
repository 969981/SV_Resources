/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec0cc8; name: FUN_01ec0cc8
 */


void FUN_01ec0cc8(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,
                 undefined4 *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  undefined8 extraout_d0;
  undefined8 uVar4;
  undefined4 extraout_var_00;
  undefined1 auVar5 [16];
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_01;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  fVar8 = (float)param_3;
  uVar9 = 0;
  uVar10 = 0;
  auVar7 = ZEXT416((uint)((float)param_4 + 1.0));
  fVar3 = fVar8 + 1.0;
  auVar5 = FUN_015f86b8();
  uStack_58 = auVar5._8_8_;
  local_60 = auVar5._0_8_;
  uStack_48 = auVar7._8_8_;
  uStack_50 = auVar7._0_8_;
  local_40 = CONCAT44(uVar9,fVar8);
  uStack_38 = uVar10;
  FUN_015f86b8(param_2);
  uStack_78 = auVar7._8_8_;
  uStack_80 = auVar7._0_8_;
  local_70 = CONCAT44(uVar9,fVar8);
  local_90 = extraout_d0;
  uStack_88 = extraout_var_01;
  uStack_68 = uVar10;
  FUN_01ea3064(((float)param_4 + 1.0) / fVar3,&local_60,&local_90);
  *param_5 = extraout_s0;
  param_5[1] = extraout_var;
  auVar6 = NEON_ext(auVar7,auVar7,8,1);
  auVar5._4_4_ = uVar9;
  auVar5._0_4_ = fVar8;
  auVar5._8_8_ = uVar10;
  auVar11 = NEON_ext(auVar7,auVar5,0xc,1);
  uVar4 = NEON_ext(auVar7._0_8_,auVar6._0_8_,4,1);
  *(undefined8 *)(param_5 + 4) = uVar4;
  auVar6._4_4_ = uVar9;
  auVar6._0_4_ = fVar8;
  auVar6._8_8_ = uVar10;
  auVar1._4_4_ = uVar9;
  auVar1._0_4_ = fVar8;
  auVar1._8_8_ = uVar10;
  auVar5 = NEON_ext(auVar6,auVar1,8,1);
  auVar2._4_4_ = extraout_var_00;
  auVar2._0_4_ = extraout_s0;
  auVar2._8_4_ = extraout_s0;
  auVar2._12_4_ = extraout_var_00;
  auVar6 = NEON_ext(auVar2,auVar7,0xc,1);
  uVar4 = NEON_ext(CONCAT44(uVar9,fVar8),auVar5._0_8_,4,1);
  *(long *)(param_5 + 6) = auVar11._0_8_;
  *(long *)(param_5 + 2) = auVar6._0_8_;
  *(undefined8 *)(param_5 + 8) = uVar4;
  return;
}


