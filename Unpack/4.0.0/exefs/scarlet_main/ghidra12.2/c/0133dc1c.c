/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0133dc1c; name: FUN_0133dc1c
 */


void FUN_0133dc1c(char *param_1,char *param_2,undefined8 *param_3)

{
  char *__s;
  size_t sVar1;
  
  __s = strcat(param_1,param_2);
  sVar1 = strlen(__s);
  (param_1 + sVar1)[0] = '_';
  (param_1 + sVar1)[1] = '\0';
  strcat(param_1,(char *)*param_3);
  return;
}


