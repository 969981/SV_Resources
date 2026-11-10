/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a53ae0; name: FUN_00a53ae0
 */


undefined8
FUN_00a53ae0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort auStack_114 [2];
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_38 = param_2[1];
  uStack_30 = param_2[2];
  local_48 = param_1[2];
  uStack_40 = *param_2;
  local_58 = *param_1;
  uStack_50 = param_1[1];
  uVar4 = (ulong)*(uint *)*param_4;
  if (2 < *(uint *)*param_4) {
    return 0;
  }
  if (*(ushort *)((long)&uStack_40 + uVar4 * 2 + 4) < *(ushort *)((long)&local_58 + uVar4 * 2 + 4))
  {
    local_c8 = param_3[1];
    uStack_c0 = param_3[2];
    local_e8 = *param_2;
    uStack_e0 = param_2[1];
    local_d8 = param_2[2];
    uStack_d0 = *param_3;
    if (*(ushort *)((long)&uStack_d0 + uVar4 * 2 + 4) < *(ushort *)((long)&local_e8 + uVar4 * 2 + 4)
       ) {
      uVar1 = *param_1;
      uVar6 = param_1[1];
      uVar7 = param_1[2];
      uVar2 = param_3[2];
      uVar5 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = uVar2;
      *param_1 = uVar5;
      param_3[1] = uVar6;
      param_3[2] = uVar7;
      *param_3 = uVar1;
    }
    else {
      local_28 = *param_1;
      local_20 = param_1[1];
      uStack_18 = param_1[2];
      uVar1 = param_2[2];
      uVar6 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = uVar1;
      *param_1 = uVar6;
      param_2[1] = local_20;
      param_2[2] = uStack_18;
      *param_2 = local_28;
      local_f8 = param_3[1];
      uStack_f0 = param_3[2];
      local_108 = param_2[2];
      uStack_100 = *param_3;
      uStack_110 = param_2[1];
      uVar3 = *(uint *)*param_4;
      if ((uVar3 < 3) &&
         (*(ushort *)((long)&uStack_100 + (ulong)uVar3 * 2 + 4) < auStack_114[uVar3])) {
        uVar1 = *param_2;
        uVar6 = param_2[1];
        uVar7 = param_2[2];
        uVar2 = param_3[2];
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        param_2[2] = uVar2;
        *param_2 = uVar5;
        param_3[1] = uVar6;
        param_3[2] = uVar7;
        *param_3 = uVar1;
        return 2;
      }
    }
  }
  else {
    local_68 = param_3[1];
    uStack_60 = param_3[2];
    local_88 = *param_2;
    uStack_80 = param_2[1];
    local_78 = param_2[2];
    uStack_70 = *param_3;
    if (*(ushort *)((long)&local_88 + uVar4 * 2 + 4) <=
        *(ushort *)((long)&uStack_70 + uVar4 * 2 + 4)) {
      return 0;
    }
    local_28 = *param_2;
    local_20 = param_2[1];
    uStack_18 = param_2[2];
    uVar1 = param_3[2];
    uVar6 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = uVar1;
    *param_2 = uVar6;
    param_3[1] = local_20;
    param_3[2] = uStack_18;
    *param_3 = local_28;
    local_98 = param_2[1];
    uStack_90 = param_2[2];
    local_a8 = param_1[2];
    uStack_a0 = *param_2;
    local_b8 = *param_1;
    uStack_b0 = param_1[1];
    uVar3 = *(uint *)*param_4;
    if ((uVar3 < 3) &&
       (*(ushort *)((long)&uStack_a0 + (ulong)uVar3 * 2 + 4) <
        *(ushort *)((long)&local_b8 + (ulong)uVar3 * 2 + 4))) {
      uVar1 = *param_1;
      uVar6 = param_1[1];
      uVar7 = param_1[2];
      uVar2 = param_2[2];
      uVar5 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = uVar2;
      *param_1 = uVar5;
      param_2[1] = uVar6;
      param_2[2] = uVar7;
      *param_2 = uVar1;
      return 2;
    }
  }
  return 1;
}


