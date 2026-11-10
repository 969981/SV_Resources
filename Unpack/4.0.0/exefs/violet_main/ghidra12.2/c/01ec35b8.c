/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec35b8; name: FUN_01ec35b8
 */


void FUN_01ec35b8(int *param_1,long param_2,long *param_3)

{
  int local_18 [2];
  
  *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
  param_3[2] = param_3[2] + 1;
  FUN_01ec362c(local_18);
  if (local_18[0] == 0) {
    FUN_01ec3698(param_1,param_2 + 0x28,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


