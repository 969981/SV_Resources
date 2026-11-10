/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02999104; name: FUN_02999104
 */


void FUN_02999104(long param_1,undefined4 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),*param_2);
                    /* WARNING: Could not recover jumptable at 0x02999138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x378))(plVar1,param_2[1],param_2[2]);
  return;
}


