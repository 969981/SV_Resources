/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c36f4; name: FUN_012c36f4
 */


void FUN_012c36f4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10) - (long)puVar1;
  if (lVar4 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x40);
    plVar7 = (long *)((long)puVar1 + (uVar5 >> 6 & 0x3fffffffffffff8));
    uVar3 = *(long *)(param_1 + 0x48) + uVar5;
    lVar6 = *plVar7 + (uVar5 & 0x1ff) * 8;
    while (*(long *)((long)puVar1 + (uVar3 >> 6 & 0x3fffffffffffff8)) + (uVar3 & 0x1ff) * 8 != lVar6
          ) {
      lVar6 = lVar6 + 8;
      if (lVar6 - *plVar7 == 0x1000) {
        plVar7 = plVar7 + 1;
        lVar6 = *plVar7;
      }
    }
  }
  uVar3 = lVar4 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar3) {
    plVar7 = *(long **)(param_1 + 0x50);
    uVar2 = *puVar1;
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,uVar2,0x1000,8);
    }
    else {
      FUN_00c48fe8(plVar7,uVar2,0x1000,8);
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar1;
    lVar4 = *(long *)(param_1 + 0x10) - (long)puVar1;
    while (uVar3 = lVar4 >> 3, 2 < uVar3) {
      plVar7 = *(long **)(param_1 + 0x50);
      uVar2 = *puVar1;
      uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,uVar2,0x1000,8);
      }
      else {
        FUN_00c48fe8(plVar7,uVar2,0x1000,8);
      }
      puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      *(undefined8 **)(param_1 + 8) = puVar1;
      lVar4 = *(long *)(param_1 + 0x10) - (long)puVar1;
    }
  }
  if (uVar3 == 1) {
    uVar2 = 0x100;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    uVar2 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  return;
}


