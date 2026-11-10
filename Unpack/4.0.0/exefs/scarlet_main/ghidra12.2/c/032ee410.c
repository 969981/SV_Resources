/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032ee410; name: FUN_032ee410
 */


void FUN_032ee410(undefined8 *param_1)

{
  DAT_0488b9e8._0_1_ = 1;
  (**(code **)*param_1)(param_1,&PTR_DAT_04732e90);
  (**(code **)*param_1)(param_1,&PTR_DAT_04732ed8);
                    /* WARNING: Could not recover jumptable at 0x032ee474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,0x4732f50);
  return;
}


