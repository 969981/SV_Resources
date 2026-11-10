/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b44e0; name: FUN_008b44e0
 */


void FUN_008b44e0(long *param_1,undefined8 param_2,uint param_3)

{
  (**(code **)(*param_1 + 0x58))();
                    /* WARNING: Could not recover jumptable at 0x008b4518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_3 & 1);
  return;
}


