/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032e2600; name: FUN_032e2600
 */


void FUN_032e2600(undefined8 *param_1)

{
  DAT_0488b590 = 1;
  (**(code **)*param_1)(param_1,&DAT_04723ae8);
  (**(code **)*param_1)(param_1,&DAT_04723b80);
  (**(code **)*param_1)(param_1,&DAT_04723bd8);
  (**(code **)*param_1)(param_1,&DAT_04723c10);
  (**(code **)*param_1)(param_1,&DAT_04723c68);
                    /* WARNING: Could not recover jumptable at 0x032e26ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,0x4723cd0);
  return;
}


