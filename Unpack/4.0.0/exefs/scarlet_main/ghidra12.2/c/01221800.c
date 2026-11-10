/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01221800; name: FUN_01221800
 */


void FUN_01221800(undefined8 param_1,long param_2,long param_3)

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


