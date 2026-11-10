/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf95c4; name: FUN_00cf95c4
 */


void FUN_00cf95c4(undefined8 *param_1,long *param_2)

{
  char *__s1;
  long *plVar1;
  undefined *__s2;
  long *plVar2;
  int iVar3;
  size_t __n;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *local_38;
  
  __s2 = PTR_s_data___047d8b68;
  __s1 = (char *)0x0;
  if (*param_2 != 0) {
    __s1 = (char *)(*param_2 + 4);
  }
  __n = strlen(PTR_s_data___047d8b68);
  iVar3 = strncmp(__s1,__s2,__n);
  if (iVar3 == 0) {
    FUN_00d06410(&local_38,param_2);
  }
  else {
    FUN_00cf96e4(&local_38,PTR_s_data___047d8b68,param_2);
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


