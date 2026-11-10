/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e2e08; name: FUN_007e2e08
 */


void FUN_007e2e08(undefined8 param_1,uint *param_2,byte *param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  Result *pRVar4;
  int *piVar5;
  uint uVar6;
  long *plVar7;
  code *pcVar8;
  uint uVar9;
  undefined8 local_70;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  pRVar4 = (Result *)&local_70;
  local_60[0] = 0;
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_50);
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    uVar6 = (uint)param_3[1] + (uint)*param_3 + (uint)param_3[2] + (uint)param_3[3] +
            (uint)param_3[4] + (uint)param_3[5] + (uint)param_3[6] + (uint)param_3[7];
    uVar9 = *param_2;
    uVar1 = 0;
    if (uVar9 != 0) {
      uVar1 = uVar6 / uVar9;
    }
    uVar2 = (ulong)(uVar6 - uVar1 * uVar9);
  }
  else {
    uVar2 = (**(code **)(param_2 + 0x10))(param_3,*param_2);
  }
  plVar7 = *(long **)(*(long *)(param_2 + 2) + (uVar2 & 0xffffffff) * 0x18);
  if (plVar7 != (long *)0x0) {
    do {
      if (*plVar7 == *(long *)param_3) {
        local_50[0] = 0;
        goto LAB_007e2ee0;
      }
      plVar7 = (long *)plVar7[6];
    } while (plVar7 != (long *)0x0);
  }
  local_50[0] = 0x2c0a;
LAB_007e2ee0:
  local_70 = (ulong)local_70._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)&local_70);
  FUN_00cbd7c0(&local_70,local_50);
  FUN_018ff39c(local_60,&local_70);
  if (local_60[0] == 0) {
    if (*(code **)(param_2 + 0x10) == (code *)0x0) {
      uVar6 = (uint)param_3[1] + (uint)*param_3 + (uint)param_3[2] + (uint)param_3[3] +
              (uint)param_3[4] + (uint)param_3[5] + (uint)param_3[6] + (uint)param_3[7];
      uVar9 = *param_2;
      uVar1 = 0;
      if (uVar9 != 0) {
        uVar1 = uVar6 / uVar9;
      }
      uVar2 = (ulong)(uVar6 - uVar1 * uVar9);
    }
    else {
      uVar2 = (**(code **)(param_2 + 0x10))(param_3,*param_2);
    }
    FUN_007e4710(local_50,*(long *)(param_2 + 2) + (uVar2 & 0xffffffff) * 0x18,param_3);
    FUN_018ff39c(local_60,local_50);
    pcVar8 = *(code **)(param_2 + 0x10);
    if (pcVar8 == (code *)0x0) goto LAB_007e2fd8;
LAB_007e2f38:
    uVar2 = (*pcVar8)(param_3,*param_2);
    uVar2 = uVar2 & 0xffffffff;
  }
  else {
    local_50[0] = 0x2c0a;
    local_70 = local_70 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)&local_70);
    pcVar8 = *(code **)(param_2 + 0x10);
    if (pcVar8 != (code *)0x0) goto LAB_007e2f38;
LAB_007e2fd8:
    uVar6 = (uint)param_3[1] + (uint)*param_3 + (uint)param_3[2] + (uint)param_3[3] +
            (uint)param_3[4] + (uint)param_3[5] + (uint)param_3[6] + (uint)param_3[7];
    uVar9 = *param_2;
    uVar1 = 0;
    if (uVar9 != 0) {
      uVar1 = uVar6 / uVar9;
    }
    uVar2 = (ulong)(uVar6 - uVar1 * uVar9);
  }
  FUN_007e43f4(local_50,*(long *)(param_2 + 2) + uVar2 * 0x18,param_3,param_4);
  FUN_018ff39c(local_60,local_50);
  local_70 = local_70 & 0xffffffff00000000;
  local_50[0] = 0xc10;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)&local_70);
  if (local_60[0] == local_50[0]) {
    local_70 = **(ulong **)(param_2 + 6);
    if (*(code **)(param_2 + 0x10) == (code *)0x0) {
      uVar6 = (uint)local_70;
      uVar9 = (uint)(local_70 >> 0x20);
      uVar6 = (uVar6 >> 8 & 0xff) + (uVar6 & 0xff) + ((uint)(local_70 >> 0x10) & 0xff) +
              (uVar6 >> 0x18) + (uVar9 & 0xff) + (uVar9 >> 8 & 0xff) +
              ((ushort)(local_70 >> 0x30) & 0xff) + (uint)(byte)(local_70 >> 0x38);
      uVar9 = *param_2;
      uVar1 = 0;
      if (uVar9 != 0) {
        uVar1 = uVar6 / uVar9;
      }
      uVar3 = (ulong)(uVar6 - uVar1 * uVar9);
    }
    else {
      uVar3 = (**(code **)(param_2 + 0x10))(&local_70,*param_2);
    }
    FUN_007e4710(local_50,*(long *)(param_2 + 2) + (uVar3 & 0xffffffff) * 0x18,&local_70);
    FUN_018ff39c(local_60,local_50);
    FUN_007e43f4(local_50,*(long *)(param_2 + 2) + uVar2 * 0x18,param_3,param_4);
    FUN_018ff39c(local_60,local_50);
    pRVar4 = (Result *)local_38;
    local_38[0] = 0;
  }
  else {
    if (local_60[0] != 0) {
      piVar5 = local_60;
      goto LAB_007e3164;
    }
    local_70 = local_70 & 0xffffffff00000000;
  }
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),pRVar4);
  piVar5 = local_50;
LAB_007e3164:
  FUN_00cbd7c0(param_1,piVar5);
  return;
}


