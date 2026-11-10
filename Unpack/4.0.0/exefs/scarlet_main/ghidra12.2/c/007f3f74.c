/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f3f74; name: FUN_007f3f74
 */


void FUN_007f3f74(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1538;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  param_1[2] = 0;
  return;
}


