/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e55dd8; name: FUN_02e55dd8
 */


void FUN_02e55dd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04607348;
  if ((long *)param_1[1] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02e55df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x20))();
  return;
}


