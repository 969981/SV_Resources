/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f5300; name: FUN_001f5300
 */


void * FUN_001f5300(void *param_1,long param_2,undefined8 param_3)

{
  void *__dest;
  size_t __n;
  
  __n = param_2 << 3;
  if (__n == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)FUN_001f45a0(param_3,__n);
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_1,__n);
    }
  }
  return __dest;
}


