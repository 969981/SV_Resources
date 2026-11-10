/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00798b4c; name: FUN_00798b4c
 */


void FUN_00798b4c(undefined8 param_1,long param_2,int *param_3)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    local_28[0] = 0x10407;
  }
  else if ((*(long *)(param_2 + 0x28) == 0) && (*(int *)(param_2 + 0x20) == 0)) {
    local_28[0] = 0;
  }
  else {
    local_28[0] = 0x10408;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


