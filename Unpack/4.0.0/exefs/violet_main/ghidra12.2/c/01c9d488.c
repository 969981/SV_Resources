/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c9d488; name: FUN_01c9d488
 */


void FUN_01c9d488(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_30 [16];
  
  (*(code *)*param_2)(auStack_30,param_3,param_4);
  FUN_018b30b0(param_1,auStack_30);
  FUN_018b3108(auStack_30);
  return;
}


