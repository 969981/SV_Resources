/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


