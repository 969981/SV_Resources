/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014bee14; name: FUN_014bee14
 */


void FUN_014bee14(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  long lVar1;
  char *pcVar2;
  char acStack_b0 [128];
  char *local_18;
  
  lVar1 = FUN_022422a4();
  pcVar2 = acStack_b0 + (0x80 - (lVar1 + 0x10U & 0xfffffffffffffff0));
  local_18 = pcVar2;
  *pcVar2 = '\0';
  pcVar2 = strcat(pcVar2,param_2);
  pcVar2 = strcat(pcVar2,(char *)*param_3);
  strcat(pcVar2,*(char **)(PTR_DAT_047d3e30 + 8));
  FUN_00cf9768(param_1,&local_18);
  return;
}


