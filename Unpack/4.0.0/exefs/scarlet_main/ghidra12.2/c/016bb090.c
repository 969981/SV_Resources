/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016bb090; name: FUN_016bb090
 */


void FUN_016bb090(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  char acStack_30 [4];
  char acStack_2c [4];
  char *local_28;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    lVar5 = 5;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x40) + 5;
  }
  lVar5 = -(lVar5 + 0xfU & 0xfffffffffffffff0);
  pcVar2 = acStack_30 + lVar5;
  local_28 = pcVar2;
  *pcVar2 = '\0';
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x38);
  }
  pcVar2 = strcat(pcVar2,(char *)*puVar1);
  sVar3 = strlen(pcVar2);
  builtin_strncpy(acStack_30 + sVar3 + lVar5,":Vfx",5);
  FUN_00cf9768(param_1,&local_28);
  return;
}


