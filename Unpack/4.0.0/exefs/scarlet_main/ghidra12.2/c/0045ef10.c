/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045ef10; name: FUN_0045ef10
 */


int FUN_0045ef10(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s1;
  
  sVar2 = strlen(param_1);
  sVar3 = strlen(param_2);
  if ((int)sVar3 + 1 < (int)sVar2) {
    __s1 = param_1 + ((long)(int)sVar2 - (long)(int)sVar3);
    iVar1 = strcmp(__s1,param_2);
    if ((iVar1 == 0) && (__s1[-1] == ' ')) {
      return (int)(__s1 + -1) - (int)param_1;
    }
  }
  return 0;
}


