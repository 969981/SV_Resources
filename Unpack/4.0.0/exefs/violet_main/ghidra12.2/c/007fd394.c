/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fd394; name: FUN_007fd394
 */


void FUN_007fd394(undefined8 param_1,long param_2,long param_3,undefined2 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  int local_60 [4];
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar5 = local_60;
  if ((param_3 == 0) || (param_4 == (undefined2 *)0x0)) {
    local_40[0] = 0x10407;
LAB_007fd3ec:
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  }
  else {
    if ((*(int *)(param_2 + 0x13b0) == 1) ||
       (uVar4 = FUN_0078cdf4(*(undefined8 *)(param_2 + 0x13a0)), (uVar4 & 1) != 0)) {
      local_40[0] = 0x10408;
      goto LAB_007fd3ec;
    }
    *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x13b0) = *(undefined8 *)(param_4 + 0x24);
    FUN_007ff6bc(local_40);
    if (local_40[0] == 0) {
      iVar3 = FUN_0078cdcc(*(undefined8 *)(param_2 + 0x13a0));
      if (iVar3 != 0) {
        (**(code **)(**(long **)(param_2 + 0x13a0) + 0x10))(*(long **)(param_2 + 0x13a0),1);
      }
      *(undefined2 *)(param_2 + 0x38) = *param_4;
      FUN_0284e39c(param_2 + 0x40,param_4 + 4);
      uVar1 = *(undefined8 *)(param_4 + 0x14);
      uVar2 = *(undefined8 *)(param_4 + 0x18);
      uVar6 = *(undefined8 *)(param_4 + 0x1c);
      *(undefined2 *)(param_2 + 0x78) = param_4[0x20];
      *(undefined8 *)(param_2 + 0x60) = uVar1;
      *(undefined8 *)(param_2 + 0x68) = uVar2;
      *(undefined8 *)(param_2 + 0x70) = uVar6;
      *(bool *)(*(long *)(param_2 + 0x10) + 0x1371) = (int)uVar1 == 1;
      FUN_0278a178(local_50,param_2 + 0x2e0,param_4 + 0x28);
      FUN_0278a178(local_50,param_2 + 0x410,param_4 + 0x100);
      *(undefined8 *)(param_2 + 0x770) = *(undefined8 *)(param_4 + 0x198);
      *(undefined1 *)(param_2 + 0x778) = *(undefined1 *)(param_4 + 0x19c);
      (**(code **)(**(long **)(param_2 + 0x13a0) + 0x38))
                (local_50,*(long **)(param_2 + 0x13a0),param_3,param_4);
      if (local_50[0] == 0) {
        FUN_0078cd58(*(undefined8 *)(param_2 + 0x13a0),0);
        local_60[0] = 0;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_28);
      }
      else {
        piVar5 = local_50;
      }
      goto LAB_007fd408;
    }
  }
  piVar5 = local_40;
LAB_007fd408:
  FUN_00cbd7c0(param_1,piVar5);
  return;
}


