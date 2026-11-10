/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0107255c; name: FUN_0107255c
 */


void FUN_0107255c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined *__s2;
  long *plVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  size_t __n;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *local_40;
  char *local_38;
  
  pcVar5 = (char *)((long)&local_40 - (*(long *)(param_2 + 0x10) + 0x10U & 0xfffffffffffffff0));
  local_38 = pcVar5;
  pcVar4 = strcpy(pcVar5,*(char **)(param_2 + 8));
  pcVar4 = strrchr(pcVar4,0x2e);
  pcVar5 = strrchr(pcVar5,0x2f);
  if (pcVar5 < pcVar4) {
    *pcVar4 = '\0';
  }
  __s2 = PTR_s_data___047d8b68;
  pcVar4 = *(char **)(param_2 + 8);
  __n = strlen(PTR_s_data___047d8b68);
  iVar3 = strncmp(pcVar4,__s2,__n);
  if (iVar3 == 0) {
    FUN_0110ef4c(&local_40,&local_38,&DAT_03c886bc);
  }
  else {
    FUN_010726c8(&local_40,PTR_s_data___047d8b68,&local_38,&DAT_03c886bc);
  }
  plVar2 = local_40;
  local_40 = (long *)0x0;
  *param_1 = plVar2;
  plVar6 = (long *)PTR_DAT_047d8b70;
  if (plVar2 != (long *)0x0) {
    plVar6 = plVar2 + 6;
  }
  plVar1 = (long *)PTR_PTR_047d4508;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 7;
  }
  lVar7 = *plVar1;
  if (plVar2 == (long *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = plVar2[8];
  }
  param_1[1] = *plVar6;
  param_1[2] = lVar7;
  param_1[3] = lVar8;
  param_1[4] = 0;
  plVar6 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    plVar6 = plVar2;
  }
  param_1[4] = plVar6;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_00d0c0a4(param_1);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  return;
}


