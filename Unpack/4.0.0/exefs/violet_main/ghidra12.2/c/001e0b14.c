/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e0b14; name: FUN_001e0b14
 */


void * FUN_001e0b14(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_001ec2f8(param_2);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,param_2);
  }
  return __dest;
}


