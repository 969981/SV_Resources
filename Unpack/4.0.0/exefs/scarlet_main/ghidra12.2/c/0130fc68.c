/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0130fc68; name: FUN_0130fc68
 */


void FUN_0130fc68(long *param_1)

{
  undefined *puVar1;
  
  FUN_008874fc();
  *(undefined1 *)(param_1 + 6) = 0;
  puVar1 = PTR_DAT_047d1f80;
  *(undefined2 *)((long)param_1 + 0x32) = 0;
  param_1[2] = 0;
  param_1[3] = 0x3200000028;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = 0x2800000028;
  param_1[5] = 0x228280000000032;
  *(undefined4 *)((long)param_1 + 0x34) = 0x3f;
  return;
}


