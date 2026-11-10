/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002abdf0; name: FUN_002abdf0
 */


void FUN_002abdf0(undefined8 param_1,double *param_2,undefined4 *param_3)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  double dVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long *plVar9;
  undefined8 local_38;
  
  switch(*param_3) {
  case 0:
    *(undefined4 *)(param_2 + 2) = 1;
    *(undefined4 *)param_2 = 0;
    break;
  case 1:
    *(undefined4 *)(param_2 + 2) = 4;
    *(undefined1 *)param_2 = 1;
    break;
  case 2:
    *(undefined4 *)(param_2 + 2) = 4;
    *(undefined1 *)param_2 = 0;
    break;
  case 3:
    pcVar1 = (char *)((long)param_3 + 9);
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      pcVar1 = *(char **)(param_3 + 6);
    }
    dVar6 = strtod(pcVar1,(char **)0x0);
    *(undefined4 *)(param_2 + 2) = 2;
    *param_2 = dVar6;
    break;
  case 4:
    pcVar1 = (char *)((long)param_3 + 9);
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      pcVar1 = *(char **)(param_3 + 6);
    }
    dVar6 = (double)strlen(pcVar1);
    *(undefined4 *)(param_2 + 2) = 3;
    *param_2 = (double)pcVar1;
    param_2[1] = dVar6;
    break;
  case 5:
    if (((*(int *)(param_2 + 2) != 5) || (dVar6 = *param_2, dVar6 == 0.0)) &&
       (dVar6 = (double)FUN_0038ad50(PTR_PTR_047cc6d0,param_1), dVar6 != 0.0)) {
      *(undefined4 *)(param_2 + 2) = 5;
      *param_2 = dVar6;
    }
    FUN_002abcb0(param_1,dVar6,param_3 + 8);
    return;
  case 6:
    if (((*(int *)(param_2 + 2) != 6) || (plVar9 = (long *)*param_2, plVar9 == (long *)0x0)) &&
       (plVar9 = (long *)FUN_0038ad50(PTR_PTR_047cc778,param_1), plVar9 != (long *)0x0)) {
      *(undefined4 *)(param_2 + 2) = 6;
      *param_2 = (double)plVar9;
    }
    puVar4 = PTR_PTR_047cc6d8;
    lVar3 = *(long *)(param_3 + 0x10);
    for (lVar2 = *(long *)(param_3 + 0xe); lVar2 != lVar3; lVar2 = lVar2 + 0x50) {
      local_38 = FUN_0038ad50(puVar4,param_1);
      puVar8 = (ulong *)*plVar9;
      if ((puVar8 == (ulong *)0x0) || (puVar8[1] == puVar8[2])) {
        uVar5 = FUN_0038afc0(plVar9,&local_38,6,param_1);
        if ((uVar5 & 1) != 0) goto LAB_002abf78;
        uVar7 = 0;
      }
      else {
        *(undefined8 *)((*puVar8 & 0xfffffffffffffff8) + puVar8[1] * 8) = local_38;
        puVar8[1] = puVar8[1] + 1;
LAB_002abf78:
        uVar7 = local_38;
      }
      FUN_002abdf0(param_1,uVar7,lVar2);
    }
  }
  return;
}


