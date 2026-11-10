/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b604c; name: FUN_011b604c
 */


void FUN_011b604c(undefined8 param_1,long param_2,long param_3)

{
  char *pcVar1;
  char acStack_b0 [128];
  char *local_18;
  
  pcVar1 = acStack_b0 +
           (0x80 - (*(long *)(param_2 + 0x10) + *(long *)(param_3 + 0x10) + 0x10U &
                   0xfffffffffffffff0));
  local_18 = pcVar1;
  *pcVar1 = '\0';
  pcVar1 = strcat(pcVar1,*(char **)(param_2 + 8));
  strcat(pcVar1,*(char **)(param_3 + 8));
  FUN_00cf9768(param_1,&local_18);
  return;
}


