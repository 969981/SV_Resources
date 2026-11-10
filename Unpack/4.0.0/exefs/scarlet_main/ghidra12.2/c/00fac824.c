/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fac824; name: FUN_00fac824
 */


void FUN_00fac824(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + 0x22) = 1;
  *param_1 = param_2;
  param_1[1] = param_3;
  *(byte *)((long)param_1 + 0x111) = *(byte *)((long)param_1 + 0x111) | 1;
  return;
}


