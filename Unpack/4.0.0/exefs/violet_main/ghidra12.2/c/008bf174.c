/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008bf174; name: FUN_008bf174
 */


void FUN_008bf174(long param_1)

{
  uint uVar1;
  void *__s;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x18);
  __s = *(void **)(*(long *)(param_1 + 0x18) + 0x10);
  *(void **)(*(long *)(param_1 + 0x18) + 0x10) = (void *)((long)__s + (long)(int)uVar1 * 0x18);
  if ((__s != (void *)0x0) && (0 < (int)uVar1)) {
    memset(__s,0,(ulong)uVar1 * 0x18);
  }
  *(void **)(param_1 + 0x28) = __s;
  return;
}


