/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c9d5c; name: FUN_015c9d5c
 */


void FUN_015c9d5c(long param_1)

{
  undefined1 auStack_170 [336];
  
  FUN_015c9db0(param_1 + 0x448);
  FUN_017e1410(auStack_170,*(long *)(param_1 + 0x448) + (long)*(int *)(param_1 + 0x440) * 0x90);
  memcpy((void *)(param_1 + 0x40),auStack_170,0x150);
  return;
}


