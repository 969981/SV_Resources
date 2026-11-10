/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03318300; name: FUN_03318300
 */


void FUN_03318300(undefined8 *param_1)

{
  DAT_0488cd08._0_1_ = 1;
  (**(code **)*param_1)(param_1,&PTR_s_hkaiStaticTree_047a0190);
                    /* WARNING: Could not recover jumptable at 0x0331834c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,&PTR_s_hkaiDynamicTree_047a01c8);
  return;
}


