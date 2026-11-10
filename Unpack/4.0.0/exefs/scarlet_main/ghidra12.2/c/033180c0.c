/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033180c0; name: FUN_033180c0
 */


void FUN_033180c0(undefined8 *param_1)

{
  DAT_0488cc78 = 1;
  (**(code **)*param_1)(param_1,&DAT_0479fc90);
  (**(code **)*param_1)(param_1,&DAT_0479fd38);
  (**(code **)*param_1)(param_1,&DAT_0479fdd0);
  (**(code **)*param_1)(param_1,&DAT_0479fe48);
  (**(code **)*param_1)(param_1,&DAT_0479fed0);
  (**(code **)*param_1)(param_1,&DAT_0479ff98);
                    /* WARNING: Could not recover jumptable at 0x03318184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,0x47a0040);
  return;
}


