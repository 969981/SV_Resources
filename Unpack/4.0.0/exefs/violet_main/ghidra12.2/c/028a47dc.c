/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a47dc; name: FUN_028a47dc
 */


void FUN_028a47dc(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10) - (long)puVar1;
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x40);
    plVar7 = (long *)((long)puVar1 + (uVar5 >> 6 & 0x3fffffffffffff8));
    uVar2 = *(long *)(param_1 + 0x48) + uVar5;
    lVar4 = *plVar7 + (uVar5 & 0x1ff) * 8;
    while (*(long *)((long)puVar1 + (uVar2 >> 6 & 0x3fffffffffffff8)) + (uVar2 & 0x1ff) * 8 != lVar4
          ) {
      lVar4 = lVar4 + 8;
      if (lVar4 - *plVar7 == 0x1000) {
        plVar7 = plVar7 + 1;
        lVar4 = *plVar7;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    plVar7 = *(long **)(param_1 + 0x50);
    uVar6 = *puVar1;
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,uVar6,0x1000,8);
    }
    else {
      FUN_00c48fe8(plVar7,uVar6,0x1000,8);
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar1;
    lVar3 = *(long *)(param_1 + 0x10) - (long)puVar1;
  }
  if (uVar2 == 1) {
    uVar6 = 0x100;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    uVar6 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  return;
}


