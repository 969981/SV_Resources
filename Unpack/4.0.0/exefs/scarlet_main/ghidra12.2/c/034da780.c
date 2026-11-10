/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034da780; name: FUN_034da780
 */


undefined8 FUN_034da780(long *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x80))();
  if ((plVar1 == (long *)0x0) || (*plVar1 == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x034da7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
  return uVar2;
}


