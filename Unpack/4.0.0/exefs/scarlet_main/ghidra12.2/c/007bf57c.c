/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007bf57c; name: FUN_007bf57c
 */


void FUN_007bf57c(long *param_1)

{
  undefined *puVar1;
  
  FUN_007acc70();
  puVar1 = PTR_DAT_047d0fb0;
  *(undefined1 *)((long)param_1 + 10) = 10;
  *param_1 = (long)(puVar1 + 0x10);
  memset(param_1 + 0x15,0,0x20);
  return;
}


