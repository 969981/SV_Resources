/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032e4720; name: FUN_032e4720
 */


void FUN_032e4720(undefined8 *param_1)

{
  DAT_0488b620 = 1;
  (**(code **)*param_1)(param_1,&PTR_s_hkAabbD_04724988);
  (**(code **)*param_1)(param_1,&DAT_047249c0);
  (**(code **)*param_1)(param_1,&DAT_04724a18);
  (**(code **)*param_1)(param_1,&DAT_04724ab0);
                    /* WARNING: Could not recover jumptable at 0x032e47b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,&PTR_DAT_04724b28);
  return;
}


