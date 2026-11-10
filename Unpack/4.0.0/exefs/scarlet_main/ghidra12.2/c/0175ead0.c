/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0175ead0; name: FUN_0175ead0
 */


void FUN_0175ead0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_0175eb24(param_3,param_4,param_5,param_6);
  *param_1 = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x58))(plVar1);
  }
  FUN_00e54378(plVar1);
  return;
}


