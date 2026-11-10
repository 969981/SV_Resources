/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002fe5b0; name: FUN_002fe5b0
 */


long * FUN_002fe5b0(char *param_1)

{
  int iVar1;
  long *__ptr;
  long lVar2;
  size_t sVar3;
  
  if (param_1 != (char *)0x0) {
    __ptr = (long *)FUN_0038c7b0(8);
    if (__ptr == (long *)0x0) {
      return (long *)0x0;
    }
    lVar2 = FUN_00484450();
    *__ptr = lVar2;
    if (lVar2 != 0) {
      sVar3 = strlen(param_1);
      iVar1 = FUN_002fe630(lVar2,param_1,sVar3,0);
      if (iVar1 == 0) {
        return __ptr;
      }
      FUN_00484650(*__ptr);
    }
    free(__ptr);
  }
  return (long *)0x0;
}


