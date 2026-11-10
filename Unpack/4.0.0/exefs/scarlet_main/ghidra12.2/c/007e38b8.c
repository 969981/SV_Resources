/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e38b8; name: FUN_007e38b8
 */


void FUN_007e38b8(undefined8 param_1,uint *param_2,byte *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  byte *pbVar6;
  code *pcVar7;
  undefined4 local_70 [4];
  int local_60 [4];
  int local_50 [4];
  byte local_34 [4];
  
  local_60[0] = 0;
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_50);
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    uVar1 = *param_2;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = *param_3 / uVar1;
    }
    uVar3 = (ulong)((uint)*param_3 - uVar2 * uVar1);
  }
  else {
    uVar3 = (**(code **)(param_2 + 0x10))(param_3,*param_2);
  }
  pbVar6 = *(byte **)(*(long *)(param_2 + 2) + (uVar3 & 0xffffffff) * 0x18);
  if (pbVar6 != (byte *)0x0) {
    do {
      if (*pbVar6 == *param_3) {
        local_50[0] = 0;
        goto LAB_007e3958;
      }
      pbVar6 = *(byte **)(pbVar6 + 0x30);
    } while (pbVar6 != (byte *)0x0);
  }
  local_50[0] = 0x2c0a;
LAB_007e3958:
  local_70[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_70);
  FUN_00cbd7c0(local_70,local_50);
  FUN_018ff39c(local_60,local_70);
  if (local_60[0] == 0) {
    if (*(code **)(param_2 + 0x10) == (code *)0x0) {
      uVar1 = *param_2;
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = *param_3 / uVar1;
      }
      uVar3 = (ulong)((uint)*param_3 - uVar2 * uVar1);
    }
    else {
      uVar3 = (**(code **)(param_2 + 0x10))(param_3,*param_2);
    }
    FUN_007e49c4(local_50,*(long *)(param_2 + 2) + (uVar3 & 0xffffffff) * 0x18,param_3);
    FUN_018ff39c(local_60,local_50);
    pcVar7 = *(code **)(param_2 + 0x10);
    if (pcVar7 != (code *)0x0) goto LAB_007e39b0;
LAB_007e3a18:
    uVar1 = *param_2;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = *param_3 / uVar1;
    }
    uVar3 = (ulong)((uint)*param_3 - uVar2 * uVar1);
  }
  else {
    local_50[0] = 0x2c0a;
    local_70[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_70);
    pcVar7 = *(code **)(param_2 + 0x10);
    if (pcVar7 == (code *)0x0) goto LAB_007e3a18;
LAB_007e39b0:
    uVar3 = (*pcVar7)(param_3,*param_2);
    uVar3 = uVar3 & 0xffffffff;
  }
  FUN_007e4b14(local_50,*(long *)(param_2 + 2) + uVar3 * 0x18,param_3,param_4);
  FUN_018ff39c(local_60,local_50);
  local_70[0] = 0;
  local_50[0] = 0xc10;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_70);
  if (local_60[0] == local_50[0]) {
    local_34[0] = **(byte **)(param_2 + 6);
    if (*(code **)(param_2 + 0x10) == (code *)0x0) {
      uVar1 = *param_2;
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = local_34[0] / uVar1;
      }
      uVar4 = (ulong)((uint)local_34[0] - uVar2 * uVar1);
    }
    else {
      uVar4 = (**(code **)(param_2 + 0x10))(local_34,*param_2);
    }
    FUN_007e49c4(local_50,*(long *)(param_2 + 2) + (uVar4 & 0xffffffff) * 0x18,local_34);
    FUN_018ff39c(local_60,local_50);
    FUN_007e4b14(local_50,*(long *)(param_2 + 2) + uVar3 * 0x18,param_3,param_4);
    FUN_018ff39c(local_60,local_50);
  }
  else if (local_60[0] != 0) {
    piVar5 = local_60;
    goto LAB_007e3b30;
  }
  local_50[0] = 0;
  local_70[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_70);
  piVar5 = local_50;
LAB_007e3b30:
  FUN_00cbd7c0(param_1,piVar5);
  return;
}


