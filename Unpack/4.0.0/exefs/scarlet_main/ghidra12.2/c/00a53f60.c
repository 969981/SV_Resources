/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a53f60; name: FUN_00a53f60
 */


int FUN_00a53f60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort auStack_124 [2];
  undefined8 uStack_120;
  undefined8 local_118;
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
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  iVar4 = FUN_00a53d80();
  local_78 = param_5[1];
  uStack_70 = param_5[2];
  local_88 = param_4[2];
  uStack_80 = *param_5;
  local_98 = *param_4;
  uStack_90 = param_4[1];
  uVar3 = *(uint *)*param_6;
  iVar5 = iVar4;
  if ((uVar3 < 3) &&
     (*(ushort *)((long)&uStack_80 + (ulong)uVar3 * 2 + 4) <
      *(ushort *)((long)&local_98 + (ulong)uVar3 * 2 + 4))) {
    local_68 = *param_4;
    local_60 = param_4[1];
    uStack_58 = param_4[2];
    uVar1 = param_5[2];
    uVar6 = *param_5;
    param_4[1] = param_5[1];
    param_4[2] = uVar1;
    *param_4 = uVar6;
    param_5[1] = local_60;
    param_5[2] = uStack_58;
    *param_5 = local_68;
    local_a8 = param_4[1];
    uStack_a0 = param_4[2];
    local_b0 = *param_4;
    local_c0 = param_3[1];
    uStack_b8 = param_3[2];
    local_c8 = *param_3;
    uVar3 = *(uint *)*param_6;
    iVar5 = iVar4 + 1;
    if ((uVar3 < 3) &&
       (*(ushort *)((long)&local_b0 + (ulong)uVar3 * 2 + 4) <
        *(ushort *)((long)&local_c8 + (ulong)uVar3 * 2 + 4))) {
      local_68 = *param_3;
      local_60 = param_3[1];
      uStack_58 = param_3[2];
      uVar1 = param_4[2];
      uVar6 = *param_4;
      param_3[1] = param_4[1];
      param_3[2] = uVar1;
      *param_3 = uVar6;
      param_4[1] = local_60;
      param_4[2] = uStack_58;
      *param_4 = local_68;
      local_d8 = param_3[1];
      uStack_d0 = param_3[2];
      iVar5 = iVar4 + 2;
      local_e8 = param_2[2];
      uStack_e0 = *param_3;
      local_f8 = *param_2;
      uStack_f0 = param_2[1];
      uVar3 = *(uint *)*param_6;
      if ((uVar3 < 3) &&
         (*(ushort *)((long)&uStack_e0 + (ulong)uVar3 * 2 + 4) <
          *(ushort *)((long)&local_f8 + (ulong)uVar3 * 2 + 4))) {
        local_68 = *param_2;
        local_60 = param_2[1];
        uStack_58 = param_2[2];
        uVar1 = param_3[2];
        uVar6 = *param_3;
        param_2[1] = param_3[1];
        param_2[2] = uVar1;
        *param_2 = uVar6;
        param_3[1] = local_60;
        param_3[2] = uStack_58;
        *param_3 = local_68;
        local_108 = param_2[1];
        uStack_100 = param_2[2];
        iVar5 = iVar4 + 3;
        local_118 = param_1[2];
        uStack_110 = *param_2;
        uStack_120 = param_1[1];
        uVar3 = *(uint *)*param_6;
        if ((uVar3 < 3) &&
           (*(ushort *)((long)&uStack_110 + (ulong)uVar3 * 2 + 4) < auStack_124[uVar3])) {
          uVar1 = *param_1;
          uVar6 = param_1[1];
          uVar8 = param_1[2];
          uVar2 = param_2[2];
          uVar7 = *param_2;
          param_1[1] = param_2[1];
          param_1[2] = uVar2;
          *param_1 = uVar7;
          param_2[1] = uVar6;
          param_2[2] = uVar8;
          iVar5 = iVar4 + 4;
          *param_2 = uVar1;
        }
      }
    }
  }
  return iVar5;
}


