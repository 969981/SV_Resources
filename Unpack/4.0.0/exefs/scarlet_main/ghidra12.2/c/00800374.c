/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00800374; name: FUN_00800374
 */


void FUN_00800374(long param_1)

{
  if ((*(long **)(param_1 + 0x13a8) == (long *)0x0) ||
     (*(char *)(*(long *)PTR_DAT_047d0a08 + 0x472) == '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00800398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x13a8) + 0x80))();
  return;
}


