/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007acc70; name: FUN_007acc70
 */


void FUN_007acc70(long *param_1)

{
  undefined *puVar1;
  
  *(undefined2 *)(param_1 + 1) = 0x5c;
  puVar1 = PTR_DAT_047d0aa0;
  *(undefined1 *)((long)param_1 + 10) = 0;
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  *(undefined2 *)((long)param_1 + 0x1e) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_018dd988(param_1 + 4);
  memset((void *)((long)param_1 + 0xe),0,0x10);
  return;
}


