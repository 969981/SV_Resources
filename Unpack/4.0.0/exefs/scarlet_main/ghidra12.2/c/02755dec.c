/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02755dec; name: FUN_02755dec
 */


void FUN_02755dec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045db370;
  param_1[4] = &PTR_LAB_045db3d8;
  param_1[6] = &PTR_LAB_045db408;
  FUN_021b1728(param_1 + 10);
  if ((long *)param_1[7] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02755e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[7] + 0x60))();
  return;
}


