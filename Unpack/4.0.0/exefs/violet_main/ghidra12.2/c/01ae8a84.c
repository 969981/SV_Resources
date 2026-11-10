/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ae8a84; name: FUN_01ae8a84
 */


void FUN_01ae8a84(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_8;
  
  local_8 = FUN_01aee54c(param_3,*param_2,param_2[1]);
  *param_1 = 1;
  FUN_01ae70b8(param_1 + 8,&local_8);
  return;
}


