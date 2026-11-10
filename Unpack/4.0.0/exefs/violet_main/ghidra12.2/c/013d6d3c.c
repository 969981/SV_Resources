/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013d6d3c; name: FUN_013d6d3c
 */


void FUN_013d6d3c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  char *__dest;
  char acStack_40 [8];
  char *local_38;
  
  pcVar3 = (char *)*param_2;
  sVar1 = strlen(pcVar3);
  sVar2 = strlen((char *)*param_3);
  __dest = acStack_40 + -(sVar1 + sVar2 + 0x11 & 0xfffffffffffffff0);
  local_38 = __dest;
  *__dest = '\0';
  pcVar3 = strcat(__dest,pcVar3);
  sVar1 = strlen(pcVar3);
  (__dest + sVar1)[0] = '/';
  (__dest + sVar1)[1] = '\0';
  strcat(__dest,(char *)*param_3);
  FUN_00cf9768(param_1,&local_38);
  return;
}


