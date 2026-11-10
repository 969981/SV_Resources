/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


