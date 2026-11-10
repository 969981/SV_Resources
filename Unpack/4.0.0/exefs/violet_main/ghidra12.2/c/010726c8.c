/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010726c8; name: FUN_010726c8
 */


void FUN_010726c8(undefined8 param_1,char *param_2,undefined8 *param_3,char *param_4)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  char acStack_50 [8];
  char *local_48;
  
  sVar1 = strlen(param_2);
  sVar2 = strlen((char *)*param_3);
  sVar3 = strlen(param_4);
  pcVar4 = acStack_50 + -(sVar1 + sVar2 + sVar3 + 0x10 & 0xfffffffffffffff0);
  local_48 = pcVar4;
  *pcVar4 = '\0';
  pcVar4 = strcat(pcVar4,param_2);
  pcVar4 = strcat(pcVar4,(char *)*param_3);
  strcat(pcVar4,param_4);
  FUN_00cf9768(param_1,&local_48);
  return;
}


