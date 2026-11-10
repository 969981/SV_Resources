/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a5e2a0; name: FUN_00a5e2a0
 */


undefined8
FUN_00a5e2a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar3 = *param_2;
  local_90 = param_2[1];
  uStack_88 = param_2[2];
  local_b0 = *param_1;
  uStack_a8 = param_1[1];
  local_a0 = param_1[2];
  uStack_98 = uVar3;
  FUN_00a65480(&uStack_98,*(undefined4 *)*param_4);
  puVar2 = PTR_DAT_047d8ee0;
  puVar1 = PTR_DAT_047d8ee0 + 0x10;
  local_78._0_4_ = CONCAT22(extraout_var,(short)uVar3);
  local_80 = puVar1;
  uVar6 = FUN_016a02ac(&local_80);
  uVar5 = (ushort)local_b0;
  FUN_00a65480(&local_b0,*(undefined4 *)*param_4);
  local_78._0_4_ = CONCAT22(extraout_var_00,uVar5);
  local_80 = puVar1;
  uVar7 = FUN_016a02ac(&local_80);
  if ((uVar6 < uVar7) || ((((uint)uVar3 & 0xffff) < (uint)uVar5 && (uVar6 == uVar7)))) {
    uVar3 = *param_3;
    local_120 = param_3[1];
    uStack_118 = param_3[2];
    local_140 = *param_2;
    uStack_138 = param_2[1];
    local_130 = param_2[2];
    uStack_128 = uVar3;
    FUN_00a65480(&uStack_128,*(undefined4 *)*param_4);
    local_78._0_4_ = CONCAT22(extraout_var_01,(short)uVar3);
    local_80 = puVar1;
    uVar6 = FUN_016a02ac(&local_80);
    uVar5 = (ushort)local_140;
    FUN_00a65480(&local_140,*(undefined4 *)*param_4);
    local_78._0_4_ = CONCAT22(extraout_var_02,uVar5);
    local_80 = puVar1;
    uVar7 = FUN_016a02ac(&local_80);
    if ((uVar6 < uVar7) || ((((uint)uVar3 & 0xffff) < (uint)uVar5 && (uVar6 == uVar7)))) {
      uVar3 = *param_1;
      uVar10 = param_1[1];
      uVar11 = param_1[2];
      uVar4 = param_3[2];
      uVar9 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = uVar4;
      *param_1 = uVar9;
      param_3[1] = uVar10;
      param_3[2] = uVar11;
      *param_3 = uVar3;
      return 1;
    }
    local_80 = (undefined *)*param_1;
    local_78 = param_1[1];
    uStack_70 = param_1[2];
    uVar3 = param_2[2];
    uVar10 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = uVar3;
    *param_1 = uVar10;
    param_2[1] = local_78;
    param_2[2] = uStack_70;
    *param_2 = local_80;
    local_158 = *param_3;
    local_150 = param_3[1];
    uStack_148 = param_3[2];
    local_170 = *param_2;
    uStack_168 = param_2[1];
    local_160 = param_2[2];
    uVar6 = (ushort)local_158;
    FUN_00a65480(&local_158,*(undefined4 *)*param_4);
    puVar2 = puVar2 + 0x10;
    local_78._0_4_ = CONCAT22(extraout_var_07,uVar6);
    local_80 = puVar2;
    uVar7 = FUN_016a02ac(&local_80);
    uVar5 = (ushort)local_170;
    FUN_00a65480(&local_170,*(undefined4 *)*param_4);
    local_78._0_4_ = CONCAT22(extraout_var_08,uVar5);
    local_80 = puVar2;
    uVar8 = FUN_016a02ac(&local_80);
    if (uVar8 <= uVar7) {
      if (uVar5 <= uVar6) {
        return 1;
      }
      if (uVar7 != uVar8) {
        return 1;
      }
    }
    uVar3 = *param_2;
    uVar10 = param_2[1];
    uVar11 = param_2[2];
    uVar4 = param_3[2];
    uVar9 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = uVar4;
    *param_2 = uVar9;
    param_3[1] = uVar10;
    param_3[2] = uVar11;
    *param_3 = uVar3;
  }
  else {
    uVar3 = *param_3;
    local_c0 = param_3[1];
    uStack_b8 = param_3[2];
    local_e0 = *param_2;
    uStack_d8 = param_2[1];
    local_d0 = param_2[2];
    uStack_c8 = uVar3;
    FUN_00a65480(&uStack_c8,*(undefined4 *)*param_4);
    puVar2 = puVar2 + 0x10;
    local_78._0_4_ = CONCAT22(extraout_var_03,(short)uVar3);
    local_80 = puVar2;
    uVar6 = FUN_016a02ac(&local_80);
    uVar5 = (ushort)local_e0;
    FUN_00a65480(&local_e0,*(undefined4 *)*param_4);
    local_78._0_4_ = CONCAT22(extraout_var_04,uVar5);
    local_80 = puVar2;
    uVar7 = FUN_016a02ac(&local_80);
    if (uVar7 <= uVar6) {
      if ((uint)uVar5 <= ((uint)uVar3 & 0xffff)) {
        return 0;
      }
      if (uVar6 != uVar7) {
        return 0;
      }
    }
    local_80 = (undefined *)*param_2;
    local_78 = param_2[1];
    uStack_70 = param_2[2];
    uVar3 = param_3[2];
    uVar10 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = uVar3;
    *param_2 = uVar10;
    param_3[1] = local_78;
    param_3[2] = uStack_70;
    *param_3 = local_80;
    local_f8 = *param_2;
    local_f0 = param_2[1];
    uStack_e8 = param_2[2];
    local_110 = *param_1;
    uStack_108 = param_1[1];
    local_100 = param_1[2];
    uVar6 = (ushort)local_f8;
    FUN_00a65480(&local_f8,*(undefined4 *)*param_4);
    local_78._0_4_ = CONCAT22(extraout_var_05,uVar6);
    local_80 = puVar2;
    uVar7 = FUN_016a02ac(&local_80);
    uVar5 = (ushort)local_110;
    FUN_00a65480(&local_110,*(undefined4 *)*param_4);
    local_78._0_4_ = CONCAT22(extraout_var_06,uVar5);
    local_80 = puVar2;
    uVar8 = FUN_016a02ac(&local_80);
    if (uVar8 <= uVar7) {
      if (uVar5 <= uVar6) {
        return 1;
      }
      if (uVar7 != uVar8) {
        return 1;
      }
    }
    uVar3 = *param_1;
    uVar10 = param_1[1];
    uVar11 = param_1[2];
    uVar4 = param_2[2];
    uVar9 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = uVar4;
    *param_1 = uVar9;
    param_2[1] = uVar10;
    param_2[2] = uVar11;
    *param_2 = uVar3;
  }
  return 2;
}


