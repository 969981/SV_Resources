/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb2cb0; name: FUN_01eb2cb0
 */


void FUN_01eb2cb0(int *param_1,long param_2,long *param_3)

{
  int local_18 [2];
  
  FUN_01eb2d24(local_18);
  if (local_18[0] == 0) {
    *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
    param_3[2] = param_3[2] + 1;
    FUN_01876840(param_1,0xb9,param_2 + 4,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


