/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


