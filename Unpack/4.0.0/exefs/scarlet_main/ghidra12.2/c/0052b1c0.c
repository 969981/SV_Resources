/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052b1c0; name: FUN_0052b1c0
 */


long * FUN_0052b1c0(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  
  if ((param_1 == 0) || (param_3 != 0)) {
    plVar1 = (long *)(**(code **)(*param_2 + 0x20))(param_2);
    (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
    return plVar1;
  }
  FUN_005233d0(param_1,param_2);
  return param_2;
}


