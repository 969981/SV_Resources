/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d99618; name: FUN_00d99618
 */


void FUN_00d99618(undefined8 param_1,char *param_2,byte *param_3)

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


