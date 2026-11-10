/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


