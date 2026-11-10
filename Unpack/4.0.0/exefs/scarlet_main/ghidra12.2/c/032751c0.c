/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032751c0; name: FUN_032751c0
 */


void FUN_032751c0(undefined8 *param_1)

{
  DAT_0488a8e8 = 1;
  (**(code **)*param_1)(param_1,&DAT_046e11d0);
  (**(code **)*param_1)(param_1,&DAT_046e12d8);
  (**(code **)*param_1)(param_1,&DAT_046e1370);
  (**(code **)*param_1)(param_1,&DAT_046e1418);
  (**(code **)*param_1)(param_1,&DAT_046e1450);
                    /* WARNING: Could not recover jumptable at 0x0327526c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,&PTR_s_hkpVehicleFrictionDescription_046e14b8);
  return;
}


