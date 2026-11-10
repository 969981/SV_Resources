/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032ee2d0; name: FUN_032ee2d0
 */


void FUN_032ee2d0(undefined8 *param_1)

{
  DAT_0488b9a0 = 1;
  (**(code **)*param_1)(param_1,&DAT_04732b30);
  (**(code **)*param_1)(param_1,&DAT_04732bc8);
  (**(code **)*param_1)(param_1,&DAT_04732c10);
  (**(code **)*param_1)(param_1,&DAT_04732c68);
                    /* WARNING: Could not recover jumptable at 0x032ee364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,0x4732cb0);
  return;
}


