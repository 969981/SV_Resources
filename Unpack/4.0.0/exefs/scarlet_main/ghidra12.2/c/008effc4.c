/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008effc4; name: FUN_008effc4
 */


void FUN_008effc4(long *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = 2;
  puVar1 = PTR_DAT_047d2710;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


