/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0105016c; name: FUN_0105016c
 */


void FUN_0105016c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined *__s2;
  long *plVar2;
  int iVar3;
  size_t __n;
  long *plVar4;
  long lVar5;
  long lVar6;
  char *__s1;
  long *local_38;
  
  __s2 = PTR_s_data___047d8b68;
  __s1 = *(char **)(param_2 + 8);
  __n = strlen(PTR_s_data___047d8b68);
  iVar3 = strncmp(__s1,__s2,__n);
  if (iVar3 == 0) {
    FUN_01050714(&local_38,param_2);
  }
  else {
    FUN_01050280(&local_38,PTR_s_data___047d8b68,param_2);
  }
  plVar2 = local_38;
  local_38 = (long *)0x0;
  *param_1 = plVar2;
  plVar4 = (long *)PTR_DAT_047d8b70;
  if (plVar2 != (long *)0x0) {
    plVar4 = plVar2 + 6;
  }
  plVar1 = (long *)PTR_PTR_047d4508;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 7;
  }
  lVar5 = *plVar1;
  if (plVar2 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = plVar2[8];
  }
  param_1[1] = *plVar4;
  param_1[2] = lVar5;
  param_1[3] = lVar6;
  param_1[4] = 0;
  plVar4 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    plVar4 = plVar2;
  }
  param_1[4] = plVar4;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_00d0c0a4(param_1);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


