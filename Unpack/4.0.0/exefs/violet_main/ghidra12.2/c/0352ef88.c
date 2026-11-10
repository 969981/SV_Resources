/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0352ef88; name: FUN_0352ef88
 */


void FUN_0352ef88(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  plVar5 = *(long **)(param_1 + 0x10);
  plVar6 = plVar5;
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      if (((long *)plVar6[2] != (long *)0x0) && ((*(uint *)(*plVar6 + 0x30) & 0xfffffffd) != 1)) {
        (**(code **)(*(long *)plVar6[2] + 0x10))();
      }
      plVar6[2] = 0;
      plVar5 = *(long **)(param_1 + 0x10);
      plVar6 = plVar6 + 3;
    } while (plVar6 != plVar5 + (ulong)*(uint *)(param_1 + 0x18) * 3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar3 = PTR_DAT_047e2fd0;
  if (plVar5 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    (**(code **)(puVar3 + 0x30))(0,plVar5);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  lVar7 = *(long *)(param_1 + 0x30);
  lVar8 = lVar7;
  if (*(int *)(param_1 + 0x38) != 0) {
    do {
      (**(code **)(**(long **)(lVar8 + 8) + 0x10))();
      lVar7 = *(long *)(param_1 + 0x30);
      lVar8 = lVar8 + 0x18;
    } while (lVar8 != lVar7 + (ulong)*(uint *)(param_1 + 0x38) * 0x18);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (lVar7 != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    (**(code **)(puVar3 + 0x30))(0,lVar7);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  lVar8 = 0;
  puVar9 = *(undefined8 **)(param_1 + 0x40);
  if (puVar9 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x48) != 0) {
      puVar1 = puVar9 + (ulong)*(uint *)(param_1 + 0x48) * 2;
      do {
        piVar4 = (int *)*puVar9;
        if ((piVar4 != (int *)0x0) && (iVar2 = *piVar4, *piVar4 = iVar2 + -1, iVar2 + -1 == 0)) {
          (**(code **)(puVar3 + 0x30))(*(undefined4 *)((long)puVar9 + 0xc),*puVar9);
        }
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        puVar9 = puVar9 + 2;
      } while (puVar9 != puVar1);
      puVar9 = *(undefined8 **)(param_1 + 0x40);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    (**(code **)(puVar3 + 0x30))(0,puVar9);
    lVar8 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  lVar7 = lVar8;
  if (*(int *)(param_1 + 0x38) != 0) {
    do {
      (**(code **)(**(long **)(lVar7 + 8) + 0x10))();
      lVar8 = *(long *)(param_1 + 0x30);
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != lVar8 + (ulong)*(uint *)(param_1 + 0x38) * 0x18);
  }
  if (lVar8 != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    (**(code **)(puVar3 + 0x30))(0,lVar8);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}


