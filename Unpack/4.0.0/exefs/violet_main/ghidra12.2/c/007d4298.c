/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d4298; name: FUN_007d4298
 */


void FUN_007d4298(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  ErrorResultVariant *this;
  undefined1 auStack_48 [16];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (param_3 == 0) {
    local_38[0] = 0x10407;
LAB_007d42e4:
    this = (ErrorResultVariant *)((ulong)local_38 | 4);
  }
  else {
    if ((*(int *)(param_2 + 0x68) == 1) ||
       (uVar2 = FUN_0078cdf4(*(undefined8 *)(param_2 + 0xb0)), (uVar2 & 1) != 0)) {
      local_38[0] = 0x10408;
      goto LAB_007d42e4;
    }
    if (*(char *)(param_2 + 0x780) != '\0') {
      iVar1 = FUN_0078cdcc(*(undefined8 *)(param_2 + 0xb0));
      if (iVar1 != 0) {
        (**(code **)(**(long **)(param_2 + 0xb0) + 0x10))(*(long **)(param_2 + 0xb0),1);
      }
      FUN_007db518(local_38,*(undefined8 *)(param_2 + 0xb0),param_3);
      if (local_38[0] == 0) {
        FUN_0078cd58(*(undefined8 *)(param_2 + 0xb0),0);
      }
      goto LAB_007d42fc;
    }
    FUN_0078cac8(param_3);
    FUN_0078cb14(param_3);
    this = (ErrorResultVariant *)((ulong)local_38 | 4);
    local_28[0] = 0;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_28);
    FUN_00cbd7c0(auStack_48,local_38);
    FUN_0078cb28(param_3,auStack_48);
    local_38[0] = 0;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_28);
LAB_007d42fc:
  FUN_00cbd7c0(param_1,local_38);
  return;
}


