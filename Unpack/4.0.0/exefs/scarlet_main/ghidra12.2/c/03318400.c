/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03318400; name: FUN_03318400
 */


void FUN_03318400(undefined8 *param_1)

{
  DAT_0488cd50._0_1_ = 1;
  (**(code **)*param_1)(param_1,&DAT_047a0528);
  (**(code **)*param_1)(param_1,&DAT_047a05d0);
                    /* WARNING: Could not recover jumptable at 0x03318464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,0x47a0648);
  return;
}


