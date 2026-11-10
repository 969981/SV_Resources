/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00494ee0; name: FUN_00494ee0
 */


undefined8 FUN_00494ee0(int *param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (param_2 == (int *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 != *param_2) {
    return 0xffffffff;
  }
  switch(*param_1) {
  case 0:
    puVar5 = *(undefined8 **)(param_1 + 2);
    if (puVar5 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    puVar7 = *(undefined8 **)(param_2 + 2);
    if (puVar7 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    uVar2 = FUN_0045d160(*puVar5,*puVar7);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = puVar5[1];
    uVar4 = puVar7[1];
    break;
  case 1:
  case 2:
  case 6:
    lVar1 = *(long *)(param_1 + 2);
    lVar3 = *(long *)(param_2 + 2);
    goto LAB_00494f34;
  case 3:
    uVar2 = *(undefined8 *)(param_1 + 2);
    uVar4 = *(undefined8 *)(param_2 + 2);
    break;
  case 4:
    uVar2 = FUN_00483880(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
    return uVar2;
  case 5:
    plVar6 = *(long **)(param_1 + 2);
    if (plVar6 == (long *)0x0) {
      return 0xffffffff;
    }
    plVar8 = *(long **)(param_2 + 2);
    if (plVar8 == (long *)0x0) {
      return 0xffffffff;
    }
    if (*plVar6 == 0) {
      if (*plVar8 != 0) {
        return 0xffffffff;
      }
    }
    else {
      if (*plVar8 == 0) {
        return 1;
      }
      uVar2 = FUN_003df4b0();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    lVar1 = plVar6[1];
    if (lVar1 == 0) {
      return 0xffffffff;
    }
    lVar3 = plVar8[1];
    if (lVar3 == 0) {
      return 0xffffffff;
    }
LAB_00494f34:
    uVar2 = FUN_003df4b0(lVar1,lVar3);
    return uVar2;
  case 7:
    uVar2 = thunk_FUN_003df4b0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
    return uVar2;
  case 8:
    uVar2 = FUN_0045d160(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
    return uVar2;
  default:
    return 0xffffffff;
  }
  uVar2 = FUN_003de440(uVar2,uVar4);
  return uVar2;
}


