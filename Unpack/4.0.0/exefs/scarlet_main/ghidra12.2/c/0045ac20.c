/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045ac20; name: FUN_0045ac20
 */


void * FUN_0045ac20(char *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  char *pcVar1;
  void *__dest;
  char *pcVar2;
  size_t __n;
  
  if (param_1 == (char *)0x0) {
    return (void *)0x0;
  }
  pcVar2 = param_1;
  if (param_2 != 0) {
    pcVar1 = param_1 + param_2;
    do {
      if (*pcVar2 == '\0') goto LAB_0045ac58;
      param_2 = param_2 + -1;
      pcVar2 = pcVar2 + 1;
    } while (param_2 != 0);
    pcVar2 = pcVar1;
  }
LAB_0045ac58:
  __n = (long)pcVar2 - (long)param_1;
  __dest = (void *)FUN_00452c30(__n + 1,param_3,param_4);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,__n);
    *(undefined1 *)((long)__dest + __n) = 0;
  }
  return __dest;
}


