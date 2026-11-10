/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea2fcc; name: FUN_01ea2fcc
 */


void FUN_01ea2fcc(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long param_4,undefined8 param_5,undefined4 *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 extraout_s0;
  undefined8 extraout_d0;
  undefined8 uVar7;
  undefined4 extraout_var_00;
  undefined1 auVar8 [16];
  undefined4 extraout_var;
  undefined8 extraout_var_01;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_40;
  
  uVar13 = param_3._8_8_;
  uVar12 = param_3._0_8_;
  uVar11 = param_2._8_8_;
  uVar10 = param_2._0_8_;
  auVar8 = FUN_015f86b8();
  uStack_58 = auVar8._8_8_;
  local_60 = auVar8._0_8_;
  uStack_50 = uVar10;
  local_40 = uVar12;
  FUN_015f86b8(param_5);
  local_90 = extraout_d0;
  uStack_88 = extraout_var_01;
  uStack_80 = uVar10;
  local_70 = uVar12;
  FUN_01ea3064(&local_60,&local_90);
  *param_6 = extraout_s0;
  param_6[1] = extraout_var;
  auVar9._4_4_ = extraout_var_00;
  auVar9._0_4_ = extraout_s0;
  auVar9._8_4_ = extraout_s0;
  auVar9._12_4_ = extraout_var_00;
  auVar8._8_8_ = uVar11;
  auVar8._0_8_ = uVar10;
  auVar8 = NEON_ext(auVar9,auVar8,0xc,1);
  *(long *)(param_6 + 2) = auVar8._0_8_;
  auVar1._8_8_ = uVar11;
  auVar1._0_8_ = uVar10;
  auVar2._8_8_ = uVar11;
  auVar2._0_8_ = uVar10;
  auVar8 = NEON_ext(auVar1,auVar2,8,1);
  uVar7 = NEON_ext(uVar10,auVar8._0_8_,4,1);
  *(undefined8 *)(param_6 + 4) = uVar7;
  auVar3._8_8_ = uVar11;
  auVar3._0_8_ = uVar10;
  auVar4._8_8_ = uVar13;
  auVar4._0_8_ = uVar12;
  auVar8 = NEON_ext(auVar3,auVar4,0xc,1);
  *(long *)(param_6 + 6) = auVar8._0_8_;
  auVar5._8_8_ = uVar13;
  auVar5._0_8_ = uVar12;
  auVar6._8_8_ = uVar13;
  auVar6._0_8_ = uVar12;
  auVar8 = NEON_ext(auVar5,auVar6,8,1);
  uVar7 = NEON_ext(uVar12,auVar8._0_8_,4,1);
  *(undefined8 *)(param_6 + 8) = uVar7;
  *(undefined2 *)(param_6 + 10) = *(undefined2 *)(param_4 + 0x28);
  return;
}


