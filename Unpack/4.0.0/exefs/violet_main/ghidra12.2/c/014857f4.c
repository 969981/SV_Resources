/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014857f4; name: FUN_014857f4
 */


void FUN_014857f4(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar7 = *(ulong *)(param_1 + 0x40);
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  plVar8 = (long *)((long)puVar2 + (uVar7 >> 2 & 0x3ffffffffffffff8));
  if (puVar5 == puVar2) {
    puVar10 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(long *)(param_1 + 0x48) + uVar7;
    puVar10 = (undefined8 *)(*plVar8 + (uVar7 & 0x1f) * 0x80);
    puVar9 = (undefined8 *)
             (*(long *)((long)puVar2 + (uVar1 >> 2 & 0x3ffffffffffffff8)) + (uVar1 & 0x1f) * 0x80);
  }
  if (puVar9 != puVar10) {
    do {
      pcVar4 = (code *)puVar10[1];
      if (pcVar4 != (code *)0x0) {
        puVar10[2] = 0;
        puVar10[3] = 0;
        *puVar10 = 0;
        puVar10[1] = 0;
        (*pcVar4)(puVar10 + 4);
      }
      puVar10 = puVar10 + 0x10;
      if ((long)puVar10 - *plVar8 == 0x1000) {
        plVar8 = plVar8 + 1;
        puVar10 = (undefined8 *)*plVar8;
      }
    } while (puVar9 != puVar10);
    puVar2 = *(undefined8 **)(param_1 + 8);
    puVar5 = *(undefined8 **)(param_1 + 0x10);
  }
  uVar7 = (long)puVar5 - (long)puVar2 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar7) {
    plVar8 = *(long **)(param_1 + 0x50);
    uVar3 = *puVar2;
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar3,0x1000,0x10);
    }
    else {
      FUN_00c48fe8(plVar8,uVar3,0x1000,0x10);
    }
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar2;
    lVar6 = *(long *)(param_1 + 0x10) - (long)puVar2;
    while (uVar7 = lVar6 >> 3, 2 < uVar7) {
      plVar8 = *(long **)(param_1 + 0x50);
      uVar3 = *puVar2;
      uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,uVar3,0x1000,0x10);
      }
      else {
        FUN_00c48fe8(plVar8,uVar3,0x1000,0x10);
      }
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      *(undefined8 **)(param_1 + 8) = puVar2;
      lVar6 = *(long *)(param_1 + 0x10) - (long)puVar2;
    }
  }
  if (uVar7 == 1) {
    uVar3 = 0x10;
  }
  else {
    if (uVar7 != 2) {
      return;
    }
    uVar3 = 0x20;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  return;
}


