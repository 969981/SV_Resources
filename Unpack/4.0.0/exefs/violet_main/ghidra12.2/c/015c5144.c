/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c5144; name: FUN_015c5144
 */


void FUN_015c5144(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10) - (long)puVar1;
  if (lVar4 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x40);
    uVar3 = *(long *)(param_1 + 0x48) + uVar5;
    lVar7 = puVar1[uVar5 / 0xaa] + (uVar5 % 0xaa) * 0x18;
    lVar6 = puVar1[uVar3 / 0xaa] + (uVar3 % 0xaa) * 0x18;
    if (lVar6 != lVar7) {
      plVar8 = puVar1 + uVar5 / 0xaa;
      do {
        lVar7 = lVar7 + 0x18;
        if (lVar7 - *plVar8 == 0xff0) {
          plVar8 = plVar8 + 1;
          lVar7 = *plVar8;
        }
      } while (lVar6 != lVar7);
    }
  }
  uVar3 = lVar4 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar3) {
    plVar8 = *(long **)(param_1 + 0x50);
    uVar2 = *puVar1;
    uVar3 = FUN_00c4e564(plVar8);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar2,0xff0,8);
    }
    else {
      FUN_00c48fe8(plVar8,uVar2,0xff0,8);
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar1;
    lVar4 = *(long *)(param_1 + 0x10) - (long)puVar1;
    while (uVar3 = lVar4 >> 3, 2 < uVar3) {
      plVar8 = *(long **)(param_1 + 0x50);
      uVar2 = *puVar1;
      uVar3 = FUN_00c4e564(plVar8);
      if ((uVar3 & 1) == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8,uVar2,0xff0,8);
      }
      else {
        FUN_00c48fe8(plVar8,uVar2,0xff0,8);
      }
      puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      *(undefined8 **)(param_1 + 8) = puVar1;
      lVar4 = *(long *)(param_1 + 0x10) - (long)puVar1;
    }
  }
  if (uVar3 == 1) {
    uVar2 = 0x55;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    uVar2 = 0xaa;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  return;
}


