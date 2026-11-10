/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021eff7c; name: FUN_021eff7c
 */


void FUN_021eff7c(long param_1,undefined8 *param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined2 local_54 [2];
  undefined2 local_38 [2];
  undefined2 local_34 [2];
  
  uVar3 = FUN_00cf44ec(param_2[1]);
  uVar4 = FUN_00cf41a0(param_2[1]);
  uVar5 = FUN_00cf44ec(*param_2);
  uVar6 = FUN_00cf41a0(*param_2);
  if (((uVar3 & 0xffff) == 0x84) || ((uVar5 & 0xffff) == 0x84)) {
    sVar1 = FUN_00cf44ec(param_2[1]);
    if (sVar1 != 0x84) {
      param_2 = param_2 + 1;
    }
    uVar7 = FUN_021f0ad0(local_34,*param_2);
    if ((uVar7 & 1) == 0) {
      return;
    }
    local_54[0] = local_34[0];
  }
  else {
    sVar1 = FUN_021ec630(uVar3,uVar4);
    sVar2 = FUN_021ec630(uVar5,uVar6);
    if (sVar1 == sVar2) {
      uVar7 = FUN_021f0ad0(local_54,param_2[1]);
      if (((uVar7 & 1) == 0) && (uVar7 = FUN_021f0ad0(local_54,*param_2), (uVar7 & 1) == 0)) {
        return;
      }
    }
    else {
      sVar1 = FUN_00cf44ec(param_2[1]);
      if (sVar1 != 0x84) {
        param_2 = param_2 + 1;
      }
      uVar7 = FUN_021f0ad0(local_38,*param_2);
      if ((uVar7 & 1) == 0) {
        return;
      }
      local_54[0] = local_38[0];
    }
  }
  *(undefined2 *)(param_1 + 0x2a) = local_54[0];
  return;
}


