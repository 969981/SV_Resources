/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005dbccc; name: FUN_005dbccc
 */


void FUN_005dbccc(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  (**(code **)*param_1)();
                    /* WARNING: Could not recover jumptable at 0x005dbd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1,0x18,8);
  return;
}


