/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c4f8c; name: FUN_001c4f8c
 */


char * FUN_001c4f8c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  char *__s;
  size_t sVar3;
  
  __s = (char *)FUN_001ed458();
  if (__s != (char *)0x0) {
    bVar1 = false;
    do {
      sVar3 = strlen(__s);
      if (sVar3 == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = __s[sVar3 - 1] != '\n';
        if (!(bool)(bVar1 | bVar2)) {
          return __s;
        }
      }
      __s = (char *)FUN_001ed458(param_1,param_2,param_3);
      bVar1 = bVar2;
    } while (__s != (char *)0x0);
  }
  return (char *)0x0;
}


