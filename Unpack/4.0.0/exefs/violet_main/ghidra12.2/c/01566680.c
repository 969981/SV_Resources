/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01566680; name: FUN_01566680
 */


void FUN_01566680(undefined8 param_1,char *param_2,byte *param_3)

{
  ulong uVar1;
  size_t sVar2;
  char *pcVar3;
  byte *__src;
  char acStack_b0 [128];
  char *local_18;
  
  sVar2 = strlen(param_2);
  uVar1 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  pcVar3 = acStack_b0 + (0x80 - (sVar2 + uVar1 + 0x10 & 0xfffffffffffffff0));
  local_18 = pcVar3;
  *pcVar3 = '\0';
  pcVar3 = strcat(pcVar3,param_2);
  __src = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __src = param_3 + 1;
  }
  strcat(pcVar3,(char *)__src);
  FUN_00cf9768(param_1,&local_18);
  return;
}


