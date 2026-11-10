/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007aeed0; name: FUN_007aeed0
 */


void FUN_007aeed0(long param_1)

{
  undefined1 auStack_4a0 [1152];
  
  FUN_0079841c();
  memset(auStack_4a0,0,0x480);
  memcpy((void *)(param_1 + 0xb8),auStack_4a0,0x480);
  return;
}


