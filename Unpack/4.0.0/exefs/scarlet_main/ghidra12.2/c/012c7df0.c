/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012c7df0; name: FUN_012c7df0
 */


void FUN_012c7df0(ulong *param_1)

{
  if ((*param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x012c7e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,*param_1 - 1,0);
  return;
}


