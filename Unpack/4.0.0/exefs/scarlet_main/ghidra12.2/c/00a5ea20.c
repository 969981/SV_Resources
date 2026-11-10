/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a5ea20; name: FUN_00a5ea20
 */


int FUN_00a5ea20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  iVar8 = FUN_00a5e720();
  local_90 = param_5[1];
  uStack_88 = param_5[2];
  local_98 = *param_5;
  uStack_a8 = param_4[1];
  local_a0 = param_4[2];
  local_b0 = *param_4;
  uVar5 = (ushort)local_98;
  FUN_00a65480(&local_98,*(undefined4 *)*param_6);
  puVar1 = PTR_DAT_047d8ee0 + 0x10;
  local_78._0_4_ = CONCAT22(extraout_var,uVar5);
  local_80 = puVar1;
  uVar6 = FUN_016a02ac(&local_80);
  uVar4 = (ushort)local_b0;
  FUN_00a65480(&local_b0,*(undefined4 *)*param_6);
  local_78._0_4_ = CONCAT22(extraout_var_00,uVar4);
  local_80 = puVar1;
  uVar7 = FUN_016a02ac(&local_80);
  if (uVar7 <= uVar6) {
    if (uVar4 <= uVar5) {
      return iVar8;
    }
    if (uVar6 != uVar7) {
      return iVar8;
    }
  }
  local_80 = (undefined *)*param_4;
  local_78 = param_4[1];
  uStack_70 = param_4[2];
  uVar2 = param_5[2];
  uVar10 = *param_5;
  param_4[1] = param_5[1];
  param_4[2] = uVar2;
  *param_4 = uVar10;
  param_5[1] = local_78;
  param_5[2] = uStack_70;
  *param_5 = local_80;
  local_c8 = *param_4;
  local_c0 = param_4[1];
  uStack_b8 = param_4[2];
  local_e0 = *param_3;
  local_d8 = param_3[1];
  uStack_d0 = param_3[2];
  uVar5 = (ushort)local_c8;
  FUN_00a65480(&local_c8,*(undefined4 *)*param_6);
  local_78._0_4_ = CONCAT22(extraout_var_01,uVar5);
  local_80 = puVar1;
  uVar6 = FUN_016a02ac(&local_80);
  uVar4 = (ushort)local_e0;
  FUN_00a65480(&local_e0,*(undefined4 *)*param_6);
  local_78._0_4_ = CONCAT22(extraout_var_02,uVar4);
  local_80 = puVar1;
  uVar7 = FUN_016a02ac(&local_80);
  if ((uVar6 < uVar7) || ((iVar9 = iVar8 + 1, uVar5 < uVar4 && (uVar6 == uVar7)))) {
    local_80 = (undefined *)*param_3;
    local_78 = param_3[1];
    uStack_70 = param_3[2];
    uVar2 = param_4[2];
    uVar10 = *param_4;
    param_3[1] = param_4[1];
    param_3[2] = uVar2;
    *param_3 = uVar10;
    param_4[1] = local_78;
    param_4[2] = uStack_70;
    *param_4 = local_80;
    local_f8 = *param_3;
    local_f0 = param_3[1];
    uStack_e8 = param_3[2];
    local_110 = *param_2;
    uStack_108 = param_2[1];
    local_100 = param_2[2];
    uVar5 = (ushort)local_f8;
    FUN_00a65480(&local_f8,*(undefined4 *)*param_6);
    puVar1 = PTR_DAT_047d8ee0 + 0x10;
    local_78._0_4_ = CONCAT22(extraout_var_03,uVar5);
    local_80 = puVar1;
    uVar6 = FUN_016a02ac(&local_80);
    uVar4 = (ushort)local_110;
    FUN_00a65480(&local_110,*(undefined4 *)*param_6);
    local_78._0_4_ = CONCAT22(extraout_var_04,uVar4);
    local_80 = puVar1;
    uVar7 = FUN_016a02ac(&local_80);
    if ((uVar6 < uVar7) || ((iVar9 = iVar8 + 2, uVar5 < uVar4 && (uVar6 == uVar7)))) {
      local_80 = (undefined *)*param_2;
      local_78 = param_2[1];
      uStack_70 = param_2[2];
      uVar2 = param_3[2];
      uVar10 = *param_3;
      param_2[1] = param_3[1];
      param_2[2] = uVar2;
      *param_2 = uVar10;
      param_3[1] = local_78;
      param_3[2] = uStack_70;
      *param_3 = local_80;
      local_128 = *param_2;
      local_120 = param_2[1];
      uStack_118 = param_2[2];
      local_140 = *param_1;
      uStack_138 = param_1[1];
      local_130 = param_1[2];
      uVar5 = (ushort)local_128;
      FUN_00a65480(&local_128,*(undefined4 *)*param_6);
      local_78._0_4_ = CONCAT22(extraout_var_05,uVar5);
      local_80 = puVar1;
      uVar6 = FUN_016a02ac(&local_80);
      uVar4 = (ushort)local_140;
      FUN_00a65480(&local_140,*(undefined4 *)*param_6);
      local_78._0_4_ = CONCAT22(extraout_var_06,uVar4);
      local_80 = puVar1;
      uVar7 = FUN_016a02ac(&local_80);
      if ((uVar6 < uVar7) || ((iVar9 = iVar8 + 3, uVar5 < uVar4 && (uVar6 == uVar7)))) {
        uVar2 = *param_1;
        uVar10 = param_1[1];
        uVar12 = param_1[2];
        uVar3 = param_2[2];
        uVar11 = *param_2;
        param_1[1] = param_2[1];
        param_1[2] = uVar3;
        *param_1 = uVar11;
        param_2[1] = uVar10;
        param_2[2] = uVar12;
        iVar9 = iVar8 + 4;
        *param_2 = uVar2;
      }
    }
  }
  return iVar9;
}


