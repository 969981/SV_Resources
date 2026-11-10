/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e55d4; name: FUN_007e55d4
 */


void FUN_007e55d4(long *param_1)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + 2) = 0;
  puVar1 = PTR_DAT_047d1468;
  *(undefined4 *)(param_1 + 0xbd) = 0xffff;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)((long)param_1 + 0x5ec) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  memset(param_1 + 0xbe,0,4);
  *(undefined1 *)((long)param_1 + 0x5f4) = 0;
  return;
}


