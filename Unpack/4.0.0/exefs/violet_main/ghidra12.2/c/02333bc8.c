/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02333bc8; name: FUN_02333bc8
 */


void FUN_02333bc8(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 local_30 [16];
  
  local_30 = FUN_02336a64(param_3,*param_2,param_2[1]);
  *param_1 = 1;
  FUN_017085a4(param_1 + 8,local_30);
  return;
}


