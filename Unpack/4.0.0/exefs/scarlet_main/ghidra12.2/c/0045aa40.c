/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045aa40; name: FUN_0045aa40
 */


long FUN_0045aa40(long *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  DIR *pDVar3;
  dirent *pdVar4;
  long lVar5;
  void *__s;
  
  piVar2 = __errno_location();
  if ((param_1 == (long *)0x0) || (param_2 == (char *)0x0)) {
    *piVar2 = 0x16;
    return 0;
  }
  *piVar2 = 0;
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
    __s = malloc(0x1010);
    *param_1 = (long)__s;
    if (__s == (void *)0x0) {
      piVar2 = __errno_location();
      *piVar2 = 0xc;
      return 0;
    }
    memset(__s,0,0x1010);
    pDVar3 = opendir(param_2);
    *(DIR **)*param_1 = pDVar3;
    pDVar3 = *(DIR **)*param_1;
    if (pDVar3 == (DIR *)0x0) {
      piVar2 = __errno_location();
      iVar1 = *piVar2;
      free((void *)*param_1);
      *param_1 = 0;
      piVar2 = __errno_location();
      *piVar2 = iVar1;
      return 0;
    }
  }
  else {
    pDVar3 = *(DIR **)*param_1;
  }
  pdVar4 = readdir(pDVar3);
  lVar5 = 0;
  if (pdVar4 != (dirent *)0x0) {
    FUN_0045ad70(*param_1 + 8,pdVar4->d_name,0x1001);
    lVar5 = *param_1 + 8;
  }
  return lVar5;
}


