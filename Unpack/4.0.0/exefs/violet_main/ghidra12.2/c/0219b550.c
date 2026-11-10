/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0219b550; name: FUN_0219b550
 */


void FUN_0219b550(char *param_1,undefined8 *param_2)

{
  size_t sVar1;
  char *__s;
  
  sVar1 = strlen(param_1);
  (param_1 + sVar1)[0] = '/';
  (param_1 + sVar1)[1] = '\0';
  __s = strcat(param_1,(char *)*param_2);
  sVar1 = strlen(__s);
  builtin_strncpy(param_1 + sVar1,".trscn",7);
  return;
}


