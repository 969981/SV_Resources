/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f4d204; name: FUN_00f4d204
 */


void FUN_00f4d204(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  char acStack_40 [8];
  char *local_38;
  
  sVar1 = strlen(param_2);
  sVar2 = strlen((char *)*param_3);
  pcVar3 = acStack_40 + -(sVar1 + sVar2 + 0x10 & 0xfffffffffffffff0);
  local_38 = pcVar3;
  *pcVar3 = '\0';
  pcVar3 = strcat(pcVar3,param_2);
  strcat(pcVar3,(char *)*param_3);
  FUN_00cf9768(param_1,&local_38);
  return;
}


