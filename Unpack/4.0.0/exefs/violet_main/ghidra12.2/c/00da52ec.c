/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00da52ec; name: FUN_00da52ec
 */


void FUN_00da52ec(undefined8 *param_1,char *param_2)

{
  long *plVar1;
  undefined *__s2;
  long *plVar2;
  int iVar3;
  size_t __n;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *local_18;
  
  __s2 = PTR_s_data___047d8b68;
  __n = strlen(PTR_s_data___047d8b68);
  iVar3 = strncmp(param_2,__s2,__n);
  if (iVar3 == 0) {
    FUN_00da5f9c(&local_18,param_2);
  }
  else {
    FUN_00da53e8(param_2);
  }
  plVar2 = local_18;
  local_18 = (long *)0x0;
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
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


