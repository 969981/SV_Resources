/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


