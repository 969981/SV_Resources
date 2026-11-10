/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fd2c4; name: FUN_007fd2c4
 */


void FUN_007fd2c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar1 = local_50;
  if (*(int *)(param_2 + 0x13b0) == 1) {
    local_40[0] = 0x10408;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
    piVar1 = local_40;
  }
  else {
    if (*(int *)(param_2 + 0x13e0) != 0) {
      FUN_0078cac8(param_2 + 0x13b0);
      *(undefined4 *)(param_2 + 0x13e0) = 0;
    }
    FUN_007fd394(local_40,param_2,param_2 + 0x13b0,param_3);
    if (local_40[0] == 0) {
      *(undefined4 *)(param_2 + 0x13e0) = 1;
      local_50[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
    }
    else {
      piVar1 = local_40;
    }
  }
  FUN_00cbd7c0(param_1,piVar1);
  return;
}


