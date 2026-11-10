/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032ee1a0; name: FUN_032ee1a0
 */


void FUN_032ee1a0(undefined8 *param_1)

{
  DAT_0488b958 = 1;
  (**(code **)*param_1)(param_1,&DAT_04732678);
  (**(code **)*param_1)(param_1,&PTR_s_hkAabb24_16_24_047326d0);
  (**(code **)*param_1)(param_1,&DAT_04732728);
                    /* WARNING: Could not recover jumptable at 0x032ee21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,0x47327c0);
  return;
}


