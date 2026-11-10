/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a53d80; name: FUN_00a53d80
 */


int FUN_00a53d80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort auStack_e4 [2];
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
  undefined8 local_50;
  undefined8 uStack_48;
  
  iVar4 = FUN_00a53ae0();
  local_68 = param_4[1];
  uStack_60 = param_4[2];
  local_78 = param_3[2];
  uStack_70 = *param_4;
  local_88 = *param_3;
  uStack_80 = param_3[1];
  uVar3 = *(uint *)*param_5;
  iVar5 = iVar4;
  if ((uVar3 < 3) &&
     (*(ushort *)((long)&uStack_70 + (ulong)uVar3 * 2 + 4) <
      *(ushort *)((long)&local_88 + (ulong)uVar3 * 2 + 4))) {
    local_58 = *param_3;
    local_50 = param_3[1];
    uStack_48 = param_3[2];
    uVar1 = param_4[2];
    uVar6 = *param_4;
    param_3[1] = param_4[1];
    param_3[2] = uVar1;
    *param_3 = uVar6;
    param_4[1] = local_50;
    param_4[2] = uStack_48;
    *param_4 = local_58;
    local_98 = param_3[1];
    uStack_90 = param_3[2];
    iVar5 = iVar4 + 1;
    local_a8 = param_2[2];
    uStack_a0 = *param_3;
    local_b8 = *param_2;
    uStack_b0 = param_2[1];
    uVar3 = *(uint *)*param_5;
    if ((uVar3 < 3) &&
       (*(ushort *)((long)&uStack_a0 + (ulong)uVar3 * 2 + 4) <
        *(ushort *)((long)&local_b8 + (ulong)uVar3 * 2 + 4))) {
      local_58 = *param_2;
      local_50 = param_2[1];
      uStack_48 = param_2[2];
      uVar1 = param_3[2];
      uVar6 = *param_3;
      param_2[1] = param_3[1];
      param_2[2] = uVar1;
      *param_2 = uVar6;
      param_3[1] = local_50;
      param_3[2] = uStack_48;
      *param_3 = local_58;
      local_c8 = param_2[1];
      uStack_c0 = param_2[2];
      iVar5 = iVar4 + 2;
      local_d8 = param_1[2];
      uStack_d0 = *param_2;
      uStack_e0 = param_1[1];
      uVar3 = *(uint *)*param_5;
      if ((uVar3 < 3) && (*(ushort *)((long)&uStack_d0 + (ulong)uVar3 * 2 + 4) < auStack_e4[uVar3]))
      {
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
        iVar5 = iVar4 + 3;
        *param_2 = uVar1;
      }
    }
  }
  return iVar5;
}


