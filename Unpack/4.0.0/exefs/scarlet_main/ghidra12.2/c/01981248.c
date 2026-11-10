/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01981248; name: FUN_01981248
 */


void FUN_01981248(undefined8 *param_1,long param_2)

{
  if (*(long **)(param_2 + 0x48) == (long *)0x0) {
    *param_1 = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01981258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x48) + 0x98))();
  return;
}


