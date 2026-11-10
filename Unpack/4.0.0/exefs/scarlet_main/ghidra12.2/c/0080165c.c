/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080165c; name: FUN_0080165c
 */


void FUN_0080165c(long param_1,long param_2)

{
  undefined1 auStack_30 [16];
  
  FUN_007983e0();
  FUN_0278a178(auStack_30,param_1 + 0xb8,param_2 + 0xb8);
  memcpy((void *)(param_1 + 0x1e8),(void *)(param_2 + 0x1e8),0x200);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  return;
}


