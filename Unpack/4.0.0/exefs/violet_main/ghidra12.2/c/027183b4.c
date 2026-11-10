/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


