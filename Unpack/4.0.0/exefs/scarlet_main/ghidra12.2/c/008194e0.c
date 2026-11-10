/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008194e0; name: FUN_008194e0
 */


size_t FUN_008194e0(void *param_1,size_t param_2,char *param_3,size_t param_4)

{
  bool bVar1;
  size_t sVar2;
  
  if (param_2 != 0) {
    if (param_4 == 0xffffffffffffffff) {
      param_4 = strlen(param_3);
    }
    sVar2 = param_2 - 1;
    bVar1 = param_2 <= param_4;
    param_2 = param_4;
    if (bVar1) {
      param_2 = sVar2;
    }
    memcpy(param_1,param_3,param_2);
    *(undefined1 *)((long)param_1 + param_2) = 0;
  }
  return param_2;
}


