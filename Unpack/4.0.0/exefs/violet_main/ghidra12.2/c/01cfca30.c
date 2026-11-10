/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cfca30; name: FUN_01cfca30
 */


void FUN_01cfca30(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_30 [16];
  undefined8 local_8;
  
  local_8 = param_4;
  FUN_01d02430(auStack_30,param_3,*param_2,param_2[1],&local_8);
  FUN_01cfc740(param_1,auStack_30);
  FUN_01cfc798(auStack_30);
  return;
}


