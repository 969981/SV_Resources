/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e8ce0; name: FUN_003e8ce0
 */


int FUN_003e8ce0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_8 [2];
  
  if (param_3 < 0) {
    return 0;
  }
  iVar1 = FUN_003e8d10(param_1,param_2,param_3,local_8);
  if (iVar1 < 1) {
    local_8[0] = iVar1;
  }
  return local_8[0];
}


