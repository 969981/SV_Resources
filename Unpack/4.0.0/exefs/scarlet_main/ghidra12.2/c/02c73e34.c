/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c73e34; name: FUN_02c73e34
 */


void FUN_02c73e34(undefined8 *param_1,uint *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  size_t __n;
  long *plVar4;
  long lVar5;
  long lVar6;
  char *__s1;
  long *local_48;
  long *local_40 [2];
  
  __s1 = *(char **)(param_3 + 8);
  snprintf((char *)local_40,0xf,PTR_s_aoc_x___047e23a8,(ulong)*param_2);
  __n = strlen((char *)local_40);
  iVar3 = strncmp(__s1,(char *)local_40,__n);
  if (iVar3 == 0) {
    FUN_01050714(local_40,param_3);
    plVar2 = local_40[0];
    local_40[0] = (long *)0x0;
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
    *(undefined4 *)(param_1 + 5) = 4;
    FUN_00d0c0a4(param_1);
    plVar4 = local_40[0];
  }
  else {
    snprintf((char *)local_40,0xf,PTR_s_aoc_x___047e23a8,(ulong)*param_2);
    FUN_01050280(&local_48,local_40,param_3);
    plVar2 = local_48;
    local_48 = (long *)0x0;
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
    *(undefined4 *)(param_1 + 5) = 4;
    FUN_00d0c0a4(param_1);
    plVar4 = local_48;
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  return;
}


