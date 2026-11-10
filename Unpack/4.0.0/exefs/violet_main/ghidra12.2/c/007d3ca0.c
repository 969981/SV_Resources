/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d3ca0; name: FUN_007d3ca0
 */


void FUN_007d3ca0(undefined8 param_1,long param_2)

{
  int *piVar1;
  int local_38 [4];
  undefined4 local_28 [2];
  
  piVar1 = (int *)(param_2 + 0x68);
  if (*piVar1 == 1) {
    local_38[0] = 0x10408;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  }
  else {
    if (*(int *)(param_2 + 0x98) != 0) {
      FUN_0078cac8(piVar1);
      *(undefined4 *)(param_2 + 0x98) = 0;
    }
    FUN_007d3ba8(local_38,param_2,piVar1);
    if (local_38[0] == 0) {
      *(undefined4 *)(param_2 + 0x98) = 1;
    }
  }
  FUN_00cbd7c0(param_1,local_38);
  return;
}


