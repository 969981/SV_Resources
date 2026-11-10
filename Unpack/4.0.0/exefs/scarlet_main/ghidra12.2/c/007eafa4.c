/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007eafa4; name: FUN_007eafa4
 */


void FUN_007eafa4(long *param_1)

{
  undefined *puVar1;
  
  FUN_007e88d4();
  puVar1 = PTR_DAT_047d14d8;
  param_1[8] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007ed7c8(param_1 + 9);
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  FUN_007ec114((long)param_1 + 0x70c);
  memset(param_1 + 0xe2,0,4);
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  return;
}


