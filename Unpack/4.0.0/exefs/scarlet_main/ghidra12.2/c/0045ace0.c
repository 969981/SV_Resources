/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045ace0; name: FUN_0045ace0
 */


void * FUN_0045ace0(void *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  void *__dest;
  
  __dest = (void *)0x0;
  if ((param_1 != (void *)0x0) && (param_2 < 0x7fffffff)) {
    __dest = (void *)FUN_00452c30(param_2,param_3,param_4);
    if (__dest == (void *)0x0) {
      FUN_004806c0(0xf,0x73,0x41,"external/openssl/crypto/o_str.c",0x42);
      return (void *)0x0;
    }
    memcpy(__dest,param_1,param_2);
  }
  return __dest;
}


