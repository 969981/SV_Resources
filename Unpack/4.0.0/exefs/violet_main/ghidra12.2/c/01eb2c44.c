/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb2c44; name: FUN_01eb2c44
 */


void FUN_01eb2c44(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_38;
  int local_18 [2];
  
  local_38 = 3;
  FUN_0111b0ac(local_18,&local_38);
  if (local_18[0] == 0) {
    FUN_01eb2cb0(param_1,param_2,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


