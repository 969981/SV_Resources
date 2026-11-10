/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014bed98; name: FUN_014bed98
 */


void FUN_014bed98(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  size_t sVar2;
  char *pcVar3;
  char *__s;
  char acStack_b0 [128];
  char *local_18;
  
  __s = (char *)*param_2;
  sVar2 = strlen(__s);
  puVar1 = PTR_DAT_047d3e30;
  pcVar3 = acStack_b0 +
           (0x80 - (sVar2 + *(long *)(PTR_DAT_047d3e30 + 0x10) + 0x10 & 0xfffffffffffffff0));
  local_18 = pcVar3;
  *pcVar3 = '\0';
  pcVar3 = strcat(pcVar3,__s);
  strcat(pcVar3,*(char **)(puVar1 + 8));
  FUN_00cf9768(param_1,&local_18);
  return;
}


