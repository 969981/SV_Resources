/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015b6e90; name: FUN_015b6e90
 */


void FUN_015b6e90(undefined8 param_1,long param_2)

{
  undefined *__src;
  size_t sVar1;
  char *pcVar2;
  char acStack_b0 [128];
  char *local_18;
  
  __src = PTR_s_data___047d8b68;
  sVar1 = strlen(PTR_s_data___047d8b68);
  pcVar2 = acStack_b0 + (0x80 - (sVar1 + *(long *)(param_2 + 0x10) + 0x10 & 0xfffffffffffffff0));
  local_18 = pcVar2;
  *pcVar2 = '\0';
  pcVar2 = strcat(pcVar2,__src);
  strcat(pcVar2,*(char **)(param_2 + 8));
  FUN_00cf9768(param_1,&local_18);
  return;
}


