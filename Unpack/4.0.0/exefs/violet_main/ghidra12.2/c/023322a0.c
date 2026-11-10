/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023322a0; name: FUN_023322a0
 */


void FUN_023322a0(undefined1 *param_1,double param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 local_30 [16];
  float local_4;
  
  local_4 = (float)param_2;
  local_30 = FUN_023335d4(param_4,*param_3,param_3[1],&local_4);
  *param_1 = 1;
  FUN_017085a4(param_1 + 8,local_30);
  return;
}


