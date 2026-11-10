/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289df58; name: FUN_0289df58
 */


void FUN_0289df58(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_38;
  int local_18 [2];
  
  local_38 = 2;
  FUN_0111b0ac(local_18,&local_38);
  if (local_18[0] == 0) {
    FUN_0289dfc4(param_1,param_2,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


