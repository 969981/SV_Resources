/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021629e8; name: FUN_021629e8
 */


void FUN_021629e8(char *param_1,long param_2)

{
  char *__s;
  size_t sVar1;
  
  __s = strcat(param_1,*(char **)(param_2 + 8));
  sVar1 = strlen(__s);
  (param_1 + sVar1)[0] = '/';
  (param_1 + sVar1)[1] = '\0';
  sVar1 = strlen(param_1);
  param_1 = param_1 + sVar1;
  *(undefined8 *)param_1 = s_N_fukidashi_03bf0695._0_8_;
  param_1[8] = 's';
  param_1[9] = 'h';
  param_1[10] = 'i';
  param_1[0xb] = '\0';
  return;
}


