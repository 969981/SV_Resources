/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


