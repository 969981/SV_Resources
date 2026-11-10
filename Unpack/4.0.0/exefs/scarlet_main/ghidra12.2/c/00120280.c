/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00120280; name: FUN_00120280
 */


void FUN_00120280(long *param_1,uint param_2)

{
  long *plVar1;
  
  plVar1 = param_1 + 8;
  param_1[2] = (long)(plVar1 + param_2);
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar1;
  *(undefined4 *)(param_1 + 5) = 0;
  *(uint *)((long)param_1 + 0x2c) = param_2;
  param_1[3] = (long)(plVar1 + param_2);
  param_1[4] = 0;
  return;
}


