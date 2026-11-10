/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027183b4; name: FUN_027183b4
 */


void FUN_027183b4(char *param_1,char *param_2,undefined8 *param_3)

{
  char *pcVar1;
  size_t sVar2;
  
  pcVar1 = strcat(param_1,param_2);
  pcVar1 = strcat(pcVar1,(char *)*param_3);
  sVar2 = strlen(pcVar1);
  builtin_strncpy(param_1 + sVar2,".bnsh",6);
  return;
}


