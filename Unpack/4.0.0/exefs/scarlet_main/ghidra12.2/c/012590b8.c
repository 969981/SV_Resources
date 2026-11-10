/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012590b8; name: FUN_012590b8
 */


void FUN_012590b8(undefined8 param_1,char *param_2,undefined8 *param_3,long *param_4)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  char acStack_c0 [128];
  char *local_28;
  
  sVar2 = strlen(param_2);
  sVar3 = strlen((char *)*param_3);
  lVar5 = 0;
  if (*param_4 != 0) {
    lVar5 = *(long *)(*param_4 + 0x40);
  }
  pcVar4 = acStack_c0 + (0x80 - (sVar2 + sVar3 + lVar5 + 0x10 & 0xfffffffffffffff0));
  local_28 = pcVar4;
  *pcVar4 = '\0';
  pcVar4 = strcat(pcVar4,param_2);
  pcVar4 = strcat(pcVar4,(char *)*param_3);
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_4 != 0) {
    puVar1 = (undefined8 *)(*param_4 + 0x38);
  }
  strcat(pcVar4,(char *)*puVar1);
  FUN_00cf9768(param_1,&local_28);
  return;
}


