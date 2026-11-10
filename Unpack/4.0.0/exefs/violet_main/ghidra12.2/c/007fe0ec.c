/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fe0ec; name: FUN_007fe0ec
 */


void FUN_007fe0ec(undefined8 param_1,long param_2,undefined8 param_3,undefined2 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  *(undefined2 *)(param_2 + 0x58) = *param_4;
  FUN_0284e39c(param_2 + 0x60,param_4 + 4);
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  uVar2 = *(undefined8 *)(param_4 + 0x1c);
  uVar3 = *(undefined8 *)(param_4 + 0x14);
  *(undefined2 *)(param_2 + 0x98) = param_4[0x20];
  *(undefined8 *)(param_2 + 0x88) = uVar1;
  *(undefined8 *)(param_2 + 0x90) = uVar2;
  *(undefined8 *)(param_2 + 0x80) = uVar3;
  *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_4 + 0x24);
  FUN_0278a178(local_40,param_2 + 0xa8,param_4 + 0x28);
  FUN_0278a178(local_40,param_2 + 600,param_4 + 0x100);
  *(undefined8 *)(param_2 + 0x388) = *(undefined8 *)(param_4 + 0x198);
  FUN_0278a178(local_40,param_2 + 0x1d8,param_4 + 0xc0);
  *(undefined1 *)(param_2 + 0x390) = *(undefined1 *)(param_4 + 0x19c);
  FUN_0278a178(local_40,param_2 + 0x398,param_4 + 0x1a0);
  *(undefined4 *)(param_2 + 0x33c8) = *(undefined4 *)(param_4 + 0x19b8);
  FUN_007fe210(local_40,param_2,param_3);
  if (local_40[0] == 0) {
    *(undefined8 *)(param_2 + 0x30) = 0x38;
    *(undefined8 *)(param_2 + 0x38) = 1;
    *(char **)(param_2 + 0x40) = "WanBackgroundLoginJob::Login";
    local_50[0] = 0;
  }
  else {
    local_50[0] = 0x10408;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_50);
  return;
}


