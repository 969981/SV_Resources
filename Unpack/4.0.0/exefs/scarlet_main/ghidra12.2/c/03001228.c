/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03001228; name: FUN_03001228
 */


void FUN_03001228(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  if (*(char *)(param_3 + 0x23) == '\0') {
    FUN_03001090(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0300128c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0xe8))
            (*(long **)(param_1 + 8),param_2,param_3,param_4,param_5);
  return;
}


