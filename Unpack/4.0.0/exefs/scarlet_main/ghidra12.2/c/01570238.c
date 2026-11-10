/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01570238; name: FUN_01570238
 */


void FUN_01570238(char *param_1,undefined8 *param_2)

{
  size_t sVar1;
  char *__s;
  
  sVar1 = strlen(param_1);
  builtin_strncpy(param_1 + sVar1,"config/",8);
  __s = strcat(param_1,(char *)*param_2);
  sVar1 = strlen(__s);
  param_1 = param_1 + sVar1;
  *(undefined8 *)param_1 = s__data_trowc_03c444b7._0_8_;
  param_1[8] = 'o';
  param_1[9] = 'w';
  param_1[10] = 'c';
  param_1[0xb] = '\0';
  return;
}


