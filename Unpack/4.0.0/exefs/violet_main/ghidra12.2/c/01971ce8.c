/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01971ce8; name: FUN_01971ce8
 */


void FUN_01971ce8(int *param_1,long param_2,undefined8 param_3)

{
  int local_18 [2];
  
  FUN_01971d40(local_18);
  if (local_18[0] == 0) {
    FUN_0192eda0(param_1,param_2 + 0x90,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


