/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b5170; name: FUN_008b5170
 */


int FUN_008b5170(char *param_1)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  
  sVar3 = strlen(param_1);
  if ((int)sVar3 < 1) {
    iVar2 = 0;
  }
  else {
    if ((sVar3 & 0xffffffff) == 1) {
      lVar4 = 0;
      iVar2 = 0;
    }
    else {
      lVar4 = 0;
      iVar2 = 0;
      do {
        pcVar1 = param_1 + lVar4;
        lVar4 = lVar4 + 2;
        if (*pcVar1 == '%') {
          iVar2 = iVar2 + 1;
        }
        if (pcVar1[1] == '%') {
          iVar2 = iVar2 + 1;
        }
      } while ((sVar3 & 0xffffffff) - (sVar3 & 1) != lVar4);
    }
    if ((sVar3 & 1) != 0) {
      if (param_1[lVar4] == '%') {
        iVar2 = iVar2 + 1;
      }
      return iVar2;
    }
  }
  return iVar2;
}


