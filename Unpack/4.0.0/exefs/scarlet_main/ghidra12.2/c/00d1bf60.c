/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d1bf60; name: FUN_00d1bf60
 */


void FUN_00d1bf60(undefined8 param_1,long param_2,byte *param_3)

{
  ulong uVar1;
  char *pcVar2;
  byte *__src;
  char acStack_b0 [128];
  char *local_18;
  
  uVar1 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  pcVar2 = acStack_b0 + (0x80 - (*(long *)(param_2 + 0x10) + uVar1 + 0x10 & 0xfffffffffffffff0));
  local_18 = pcVar2;
  *pcVar2 = '\0';
  pcVar2 = strcat(pcVar2,*(char **)(param_2 + 8));
  __src = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __src = param_3 + 1;
  }
  strcat(pcVar2,(char *)__src);
  FUN_00cf9768(param_1,&local_18);
  return;
}


