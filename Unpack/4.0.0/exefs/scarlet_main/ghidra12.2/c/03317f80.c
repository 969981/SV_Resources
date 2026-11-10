/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03317f80; name: FUN_03317f80
 */


void FUN_03317f80(undefined8 *param_1)

{
  DAT_0488cc30 = 1;
  (**(code **)*param_1)(param_1,&DAT_0479f5b8);
  (**(code **)*param_1)(param_1,&DAT_0479f5f0);
  (**(code **)*param_1)(param_1,&DAT_0479f628);
  (**(code **)*param_1)(param_1,&DAT_0479f700);
                    /* WARNING: Could not recover jumptable at 0x03318014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,&PTR_s_hkcdStaticMeshTreeBaseSection_0479f778);
  return;
}


