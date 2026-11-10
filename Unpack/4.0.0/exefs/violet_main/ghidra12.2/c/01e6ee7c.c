/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6ee7c; name: FUN_01e6ee7c
 */


void FUN_01e6ee7c(int *param_1,undefined8 param_2,long *param_3)

{
  undefined8 local_38;
  int local_18 [2];
  
  local_38 = 1;
  FUN_0111b0ac(local_18,&local_38);
  if (local_18[0] == 0) {
    *(undefined1 *)(*param_3 + param_3[2]) = 0xbc;
    param_3[2] = param_3[2] + 1;
    FUN_01e6ef04(param_1,param_2,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


