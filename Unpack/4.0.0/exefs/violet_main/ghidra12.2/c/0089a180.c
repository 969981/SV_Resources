/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089a180; name: FUN_0089a180
 */


long FUN_0089a180(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  char *__s1;
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  __s1 = (char *)param_3[2];
  if (*(int *)(param_1 + 0x48) != 0) {
    plVar4 = (long *)(param_1 + 0x40);
    do {
      lVar3 = *plVar4;
      if (lVar3 == param_1 + 0x38) goto LAB_0089a1e8;
      lVar6 = *(long *)(lVar3 + -0x20);
      plVar4 = (long *)(lVar3 + 8);
      iVar1 = strcmp(__s1,*(char **)(lVar6 + 0x10));
    } while (iVar1 != 0);
    if (lVar6 != 0) {
      return lVar6;
    }
  }
LAB_0089a1e8:
  lVar3 = (**(code **)PTR_DAT_047d2258)(0x70,0x10,*(undefined8 *)PTR_DAT_047d2268);
  if (lVar3 != 0) {
    FUN_00896078(lVar3,__s1);
  }
  lVar2 = (**(code **)(*param_3 + 0x30))(param_3);
  plVar4 = *(long **)(param_1 + 0x30);
  lVar6 = plVar4[1];
  *(int *)(plVar4 + 1) = (int)lVar6 + 1;
  plVar4 = (long *)(*plVar4 + (long)(int)lVar6 * 0x30);
  *plVar4 = lVar3;
  plVar4[1] = 0;
  plVar4[2] = (long)param_3;
  plVar4[3] = lVar2 + 0xb0;
  plVar4 = plVar4 + 4;
  lVar6 = *plVar4;
  plVar5 = (long *)(param_1 + 0x38);
  *plVar4 = *plVar5;
  *(long **)(lVar6 + 8) = plVar5;
  *(long **)(*plVar5 + 8) = plVar4;
  *plVar5 = lVar6;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  *(char *)(lVar3 + 0x18) = (char)param_3[3];
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 1;
  }
  return lVar3;
}


