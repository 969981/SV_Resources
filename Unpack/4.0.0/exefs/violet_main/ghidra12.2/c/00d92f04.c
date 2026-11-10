/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d92f04; name: FUN_00d92f04
 */


void FUN_00d92f04(float param_1,undefined8 param_2,ulong param_3)

{
  undefined4 local_8;
  float local_4;
  
  if ((param_3 & 1) != 0) {
    param_1 = nextafterf(param_1,3.4028235e+38);
  }
  local_8 = 0;
  local_4 = param_1;
  FUN_00d92f44(param_2,&local_8);
  return;
}


