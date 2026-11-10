/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01327a5c; name: FUN_01327a5c
 */


void FUN_01327a5c(long param_1)

{
  long local_8;
  
  if (*(char *)(param_1 + 0x998) != '\0') {
    local_8 = param_1;
    FUN_01327aa8(param_1,&local_8);
    FUN_01327c88(param_1,*(undefined4 *)(*(long *)(param_1 + 0x930) + 0x14),
                 (int)*(float *)(*(long *)(param_1 + 0x880) + 0x1d4));
  }
  return;
}


