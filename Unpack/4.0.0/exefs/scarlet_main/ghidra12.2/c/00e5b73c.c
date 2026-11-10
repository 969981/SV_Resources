/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e5b73c; name: FUN_00e5b73c
 */


void FUN_00e5b73c(undefined8 param_1,char *param_2,undefined8 *param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  char *pcVar3;
  char acStack_40 [8];
  char *local_38;
  
  lVar2 = FUN_021aa598();
  pcVar3 = acStack_40 + -(lVar2 + 0x10U & 0xfffffffffffffff0);
  local_38 = pcVar3;
  *pcVar3 = '\0';
  pcVar3 = strcat(pcVar3,param_2);
  pcVar3 = strcat(pcVar3,(char *)*param_3);
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_4 != 0) {
    puVar1 = (undefined8 *)(*param_4 + 0x38);
  }
  strcat(pcVar3,(char *)*puVar1);
  FUN_00cf9768(param_1,&local_38);
  return;
}


