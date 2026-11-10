/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c42b8; name: FUN_007c42b8
 */


char * FUN_007c42b8(char *param_1,char param_2,long *param_3,uint param_4)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  
  if (param_1 == (char *)0x0) {
    param_1 = (char *)*param_3;
    if (param_1 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  else {
    *param_3 = (long)param_1;
  }
  pcVar2 = param_1;
  if ((param_4 & 1) != 0) {
    cVar1 = *param_1;
    while (pcVar2 = param_1, cVar1 == param_2) {
      *param_1 = '\0';
      lVar3 = *param_3;
      param_1 = (char *)(lVar3 + 1);
      *param_3 = (long)param_1;
      cVar1 = *(char *)(lVar3 + 1);
    }
  }
  do {
    cVar1 = *param_1;
    if (cVar1 == param_2) {
      *param_1 = '\0';
      *param_3 = (long)(param_1 + 1);
      goto joined_r0x007c4328;
    }
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  *param_3 = 0;
joined_r0x007c4328:
  if (((param_4 & 1) == 0) || (*pcVar2 != '\0')) {
    return pcVar2;
  }
  return (char *)0x0;
}


