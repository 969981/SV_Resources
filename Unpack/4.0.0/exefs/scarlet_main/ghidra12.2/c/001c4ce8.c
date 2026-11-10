/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c4ce8; name: FUN_001c4ce8
 */


char * FUN_001c4ce8(void)

{
  char *pcVar1;
  size_t __n;
  size_t sVar2;
  
  pcVar1 = (char *)FUN_001ec328();
  if (pcVar1 != (char *)0x0) {
    __n = strlen(pcVar1);
    if (*pcVar1 == '\"') {
      memmove(pcVar1,pcVar1 + 1,__n);
      __n = __n - 1;
    }
    if (__n == 0) {
      if (*pcVar1 != '/') goto LAB_001c4d8c;
    }
    else {
      sVar2 = __n - 1;
      if (pcVar1[sVar2] == '\"') {
        pcVar1[sVar2] = '\0';
        __n = sVar2;
      }
      if (*pcVar1 != '/') {
LAB_001c4d8c:
        FUN_001ec308(pcVar1);
        pcVar1 = (char *)FUN_001ec328(&DAT_03bdfb3b);
        return pcVar1;
      }
      if ((__n != 0) && (pcVar1[__n - 1] == '/')) {
        pcVar1[__n - 1] = '\0';
      }
    }
  }
  return pcVar1;
}


