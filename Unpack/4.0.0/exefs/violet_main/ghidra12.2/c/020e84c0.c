/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e84c0; name: FUN_020e84c0
 */


void FUN_020e84c0(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  size_t sVar2;
  
  pcVar1 = strcat(param_1,(char *)*param_2);
  sVar2 = strlen(pcVar1);
  pcVar1 = param_1 + sVar2;
  pcVar1[0] = ':';
  pcVar1[1] = '/';
  pcVar1[2] = '\0';
  strcat(param_1,(char *)*param_3);
  return;
}


