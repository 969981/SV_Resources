/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014fb000; name: FUN_014fb000
 */


void FUN_014fb000(long param_1,int *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  int *piVar8;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  undefined8 *puStack_58;
  
  piVar8 = *(int **)(param_1 + 0x520);
  piVar6 = *(int **)(param_1 + 0x528);
  if ((piVar8 != piVar6) && (*piVar8 != *param_2)) {
    do {
      piVar8 = piVar8 + 4;
      if (piVar6 == piVar8) {
        piVar8 = piVar6;
        goto LAB_014fb044;
      }
    } while (*piVar8 != *param_2);
  }
LAB_014fb044:
  if (piVar6 != piVar8) {
    uVar7 = *(undefined8 *)param_2;
    *(undefined8 *)((long)piVar8 + 5) = *(undefined8 *)((long)param_2 + 5);
    *(undefined8 *)piVar8 = uVar7;
    return;
  }
  plVar1 = (long *)(param_1 + 0x520);
  lVar3 = *(long *)(param_1 + 0x528);
  if (lVar3 != *(long *)(param_1 + 0x530)) {
    FUN_014fb1f0(param_1 + 0x538,lVar3,param_2);
    *(long *)(param_1 + 0x528) = lVar3 + 0x10;
    return;
  }
  puVar2 = (undefined8 *)(param_1 + 0x538);
  lVar5 = FUN_014fb1a0(plVar1,(*(long *)(param_1 + 0x528) - *plVar1 >> 4) + 1);
  lVar3 = *plVar1;
  lVar4 = *(long *)(param_1 + 0x528);
  local_60 = 0;
  puStack_58 = puVar2;
  if (lVar5 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,lVar5 << 4,4);
    if (local_78 == 0) {
      (**(code **)(*(long *)*puVar2 + 0xe8))();
    }
  }
  lVar3 = local_78 + (lVar4 - lVar3);
  local_60 = local_78 + lVar5 * 0x10;
  lStack_70 = lVar3;
  FUN_014fb1f0(puVar2,lVar3,param_2);
  local_68 = lVar3 + 0x10;
  FUN_014fb2cc(plVar1,&local_78);
  FUN_014fb450(&local_78);
  return;
}


