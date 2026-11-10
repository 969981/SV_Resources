/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b9cec; name: FUN_011b9cec
 */


void FUN_011b9cec(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 1;
  nn::os::InitializeLightEvent(param_1 + 1,0,1);
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_011b9d34(param_1 + 3,param_2 + 0x18);
  return;
}


