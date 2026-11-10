/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011a6b30; name: FUN_011a6b30
 */


void FUN_011a6b30(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *__s2;
  long *plVar3;
  int iVar4;
  size_t __n;
  long *plVar5;
  long lVar6;
  long lVar7;
  char *__s1;
  long *local_28;
  
  __s2 = PTR_s_data___047d8b68;
  plVar5 = (long *)PTR_PTR_047d4508;
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_2 != 0) {
    puVar1 = (undefined8 *)(*param_2 + 0x38);
  }
  __s1 = (char *)*puVar1;
  __n = strlen(PTR_s_data___047d8b68);
  iVar4 = strncmp(__s1,__s2,__n);
  if (iVar4 == 0) {
    FUN_011a6eb8(&local_28,param_2);
  }
  else {
    FUN_01221998(&local_28,PTR_s_data___047d8b68,param_2);
  }
  plVar3 = local_28;
  local_28 = (long *)0x0;
  *param_1 = plVar3;
  plVar2 = (long *)PTR_DAT_047d8b70;
  if (plVar3 != (long *)0x0) {
    plVar5 = plVar3 + 7;
    plVar2 = plVar3 + 6;
  }
  lVar6 = *plVar5;
  if (plVar3 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = plVar3[8];
  }
  param_1[1] = *plVar2;
  param_1[2] = lVar6;
  param_1[3] = lVar7;
  param_1[4] = 0;
  plVar5 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    plVar5 = plVar3;
  }
  param_1[4] = plVar5;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_00d0c0a4(param_1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


