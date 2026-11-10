/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d187c; name: FUN_007d187c
 */


void FUN_007d187c(long *param_1,byte param_2)

{
  undefined *puVar1;
  
  FUN_007eafa4();
  puVar1 = PTR_DAT_047d12f8;
  *(byte *)((long)param_1 + 0x729) = param_2 & 1;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 0xe5) = 0xfd;
  return;
}


