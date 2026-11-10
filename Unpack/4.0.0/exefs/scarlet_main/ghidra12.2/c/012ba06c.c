/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012ba06c; name: FUN_012ba06c
 */


void FUN_012ba06c(undefined8 param_1,long *param_2,char *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char acStack_40 [8];
  char *local_38;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x40) + 1;
  }
  sVar2 = strlen(param_3);
  pcVar3 = acStack_40 + -(sVar2 + lVar5 + 0xf & 0xfffffffffffffff0);
  local_38 = pcVar3;
  *pcVar3 = '\0';
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x38);
  }
  pcVar3 = strcat(pcVar3,(char *)*puVar1);
  strcat(pcVar3,param_3);
  FUN_00cf9768(param_1,&local_38);
  return;
}


