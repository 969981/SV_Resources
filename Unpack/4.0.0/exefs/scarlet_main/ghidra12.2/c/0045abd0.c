/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045abd0; name: FUN_0045abd0
 */


void FUN_0045abd0(char *param_1,undefined8 param_2,undefined4 param_3)

{
  size_t sVar1;
  char *__dest;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    __dest = (char *)FUN_00452c30(sVar1 + 1,param_2,param_3);
    if (__dest != (char *)0x0) {
      strcpy(__dest,param_1);
    }
  }
  return;
}


