/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344ca4c; name: FUN_0344ca4c
 */


void FUN_0344ca4c(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  plVar5 = (long *)(param_1 + 0x20);
  plVar6 = (long *)*plVar5;
  plVar7 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    do {
      (**(code **)(*(long *)plVar6[2] + 0x30))();
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
    plVar7 = (long *)*plVar5;
  }
  puVar2 = PTR_DAT_047e2fd0;
  if (plVar7 == (long *)0x0) {
    plVar6 = (long *)*(long *)(param_1 + 0x30);
    goto joined_r0x0344cadc;
  }
  do {
    plVar6 = plVar7;
    *(long *)(param_1 + 0x20) = *plVar6;
    if (*(long **)(param_1 + 0x28) == plVar6) {
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    *plVar6 = *(long *)(param_1 + 0x30);
    *(long **)(param_1 + 0x30) = plVar6;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
    plVar7 = *(long **)(param_1 + 0x20);
  } while (*(long **)(param_1 + 0x20) != (long *)0x0);
  do {
    plVar7 = (long *)*plVar6;
    if ((plVar6 < *(long **)(param_1 + 0x38)) ||
       (bVar1 = *(long **)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x40) * 4 <= plVar6,
       plVar6 = plVar7, bVar1)) {
      (**(code **)(puVar2 + 0x30))(0);
      plVar6 = plVar7;
    }
joined_r0x0344cadc:
  } while (plVar6 != (long *)0x0);
  if (*(long *)(param_1 + 0x38) != 0) {
    (**(code **)(puVar2 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *plVar5 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  plVar7 = *(long **)(param_1 + 0x48);
  if (plVar7 == (long *)0x0) {
    plVar5 = (long *)*(long *)(param_1 + 0x58);
    goto joined_r0x0344cb88;
  }
  do {
    plVar5 = plVar7;
    *(long *)(param_1 + 0x48) = *plVar5;
    if (*(long **)(param_1 + 0x50) == plVar5) {
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    *plVar5 = *(long *)(param_1 + 0x58);
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
    *(long **)(param_1 + 0x58) = plVar5;
    plVar7 = *(long **)(param_1 + 0x48);
  } while (*(long **)(param_1 + 0x48) != (long *)0x0);
  do {
    plVar7 = (long *)*plVar5;
    if ((plVar5 < *(long **)(param_1 + 0x60)) ||
       (bVar1 = *(long **)(param_1 + 0x60) + (ulong)*(uint *)(param_1 + 0x68) * 3 <= plVar5,
       plVar5 = plVar7, bVar1)) {
      (**(code **)(puVar2 + 0x30))(0);
      plVar5 = plVar7;
    }
joined_r0x0344cb88:
  } while (plVar5 != (long *)0x0);
  if (*(long *)(param_1 + 0x60) != 0) {
    (**(code **)(puVar2 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  puVar4 = *(ulong **)(param_1 + 0x70);
  if (puVar4 == (ulong *)0x0) {
    puVar3 = *(ulong **)(param_1 + 0x80);
    if (puVar3 == (ulong *)0x0) goto LAB_0344cc74;
  }
  else {
    do {
      puVar3 = puVar4;
      *(ulong *)(param_1 + 0x70) = *puVar3;
      if (*(ulong **)(param_1 + 0x78) == puVar3) {
        *(undefined8 *)(param_1 + 0x78) = 0;
      }
      *puVar3 = *(ulong *)(param_1 + 0x80);
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -1;
      *(ulong **)(param_1 + 0x80) = puVar3;
      puVar4 = *(ulong **)(param_1 + 0x70);
    } while (*(ulong **)(param_1 + 0x70) != (ulong *)0x0);
  }
  do {
    uVar8 = *puVar3;
    if ((puVar3 < *(ulong *)(param_1 + 0x88)) ||
       (*(ulong *)(param_1 + 0x88) + (ulong)*(uint *)(param_1 + 0x90) * 0x18 <= puVar3)) {
      (**(code **)(puVar2 + 0x30))(0);
    }
    puVar3 = (ulong *)uVar8;
  } while (uVar8 != 0);
LAB_0344cc74:
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(puVar2 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}


