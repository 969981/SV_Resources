/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02140cf8; name: FUN_02140cf8
 */


void FUN_02140cf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045d0b28;
  param_1[4] = &PTR_LAB_045d0b68;
                    /* WARNING: Could not recover jumptable at 0x02140d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0xd0))();
  return;
}


