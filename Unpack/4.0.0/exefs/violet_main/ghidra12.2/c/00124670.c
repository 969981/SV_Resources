/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00124670; name: FUN_00124670
 */


void FUN_00124670(long param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  if (param_3 != 0) {
    __dest = (void *)FUN_00124470(param_1,param_3,0xffffffff);
    memcpy(__dest,param_2,param_3);
    *(size_t *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_3;
  }
  return;
}


