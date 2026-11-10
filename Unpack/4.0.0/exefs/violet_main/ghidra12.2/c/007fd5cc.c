/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fd5cc; name: FUN_007fd5cc
 */


void FUN_007fd5cc(undefined8 param_1,long param_2)

{
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (*(int *)(param_2 + 0x13b0) == 1) {
    local_38[0] = 0x10408;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  }
  else {
    if (*(int *)(param_2 + 0x13e0) != 0) {
      FUN_0078cac8(param_2 + 0x13b0);
      *(undefined4 *)(param_2 + 0x13e0) = 0;
    }
    FUN_007fd668(local_38,param_2,param_2 + 0x13b0);
    if (local_38[0] == 0) {
      *(undefined4 *)(param_2 + 0x13e0) = 2;
    }
  }
  FUN_00cbd7c0(param_1,local_38);
  return;
}


