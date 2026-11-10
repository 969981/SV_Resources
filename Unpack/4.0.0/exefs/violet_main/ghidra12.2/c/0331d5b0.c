/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0331d5b0; name: FUN_0331d5b0
 */


void FUN_0331d5b0(undefined8 *param_1)

{
  DAT_0488d068 = 1;
  (**(code **)*param_1)(param_1,&PTR_s_hkcdSimdTree_Node_047abfc0);
  (**(code **)*param_1)(param_1,&DAT_047ac018);
                    /* WARNING: Could not recover jumptable at 0x0331d614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,0x47ac0a0);
  return;
}


