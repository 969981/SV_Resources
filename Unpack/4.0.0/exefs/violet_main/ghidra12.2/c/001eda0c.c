/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001eda0c; name: FUN_001eda0c
 */


void FUN_001eda0c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(bool *)(param_1 + 2) = param_4 != 0;
  return;
}


