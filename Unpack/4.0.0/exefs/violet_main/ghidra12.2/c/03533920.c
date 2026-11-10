/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03533920; name: FUN_03533920
 */


void FUN_03533920(long param_1,int param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  puVar4 = PTR_DAT_047e2fd0;
  lVar10 = *(long *)(param_1 + 0x88);
  while( true ) {
    if (lVar10 == 0) {
      return;
    }
    if (*(long *)(lVar10 + 0x10) == param_3) break;
    lVar10 = *(long *)(lVar10 + 0x30);
  }
  plVar9 = (long *)(param_1 + 0x70);
  plVar8 = (long *)*plVar9;
  if (plVar8 != (long *)0x0) {
    plVar11 = (long *)0x0;
    do {
      iVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
      if (((iVar5 == 2) && (param_2 <= (int)plVar8[2])) && (plVar8[3] == lVar10)) {
        plVar12 = (long *)plVar8[1];
        plVar1 = plVar9;
        if (*(long **)(param_1 + 0x70) != plVar8) {
          plVar1 = plVar11 + 1;
        }
        *plVar1 = (long)plVar12;
        if (*(long **)(param_1 + 0x68) == plVar8) {
          *(long **)(param_1 + 0x68) = plVar11;
        }
        (**(code **)*plVar8)(plVar8);
        (**(code **)(puVar4 + 0x30))(0,plVar8);
        plVar8 = plVar12;
      }
      else {
        plVar11 = plVar8;
        plVar8 = (long *)plVar8[1];
      }
    } while (plVar8 != (long *)0x0);
  }
  FUN_03531af4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x80));
  puVar6 = (undefined8 *)(**(code **)(puVar4 + 0x10))(0,0x28);
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  uVar2 = *(undefined4 *)(lVar10 + 0x28);
  uVar3 = *(undefined4 *)(lVar10 + 0x2c);
  *(int *)(puVar6 + 2) = param_2;
  *puVar6 = &PTR_LAB_047c9368;
  puVar6[3] = lVar10;
  *(undefined4 *)(puVar6 + 4) = uVar3;
  *(undefined4 *)((long)puVar6 + 0x24) = uVar2;
  lVar10 = *(long *)(param_1 + 0x70);
  if (lVar10 != 0) {
    if (param_2 < *(int *)(lVar10 + 0x10)) {
      puVar6[1] = lVar10;
      *plVar9 = (long)puVar6;
      return;
    }
    while (lVar7 = lVar10, lVar10 = *(long *)(lVar7 + 8), lVar10 != 0) {
      if (param_2 < *(int *)(lVar10 + 0x10)) {
        puVar6[1] = lVar10;
        *(undefined8 **)(lVar7 + 8) = puVar6;
        return;
      }
    }
  }
  puVar6[1] = 0;
  if (*plVar9 != 0) {
    plVar9 = (long *)(*(long *)(param_1 + 0x68) + 8);
  }
  *plVar9 = (long)puVar6;
  *(undefined8 **)(param_1 + 0x68) = puVar6;
  return;
}


