/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccbac4; name: FUN_00ccbac4
 */


void FUN_00ccbac4(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 local_18;
  
  local_18 = FUN_00ccbb30(param_1,param_3);
  (*(code *)*param_2)(param_2 + 4,&local_18);
  FUN_00ccbb18(param_1,param_3);
  return;
}


