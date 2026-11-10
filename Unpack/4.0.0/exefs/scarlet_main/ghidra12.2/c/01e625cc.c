/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e625cc; name: FUN_01e625cc
 */


void FUN_01e625cc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_01e62618();
                    /* WARNING: Could not recover jumptable at 0x01e62614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3,param_4);
  return;
}


