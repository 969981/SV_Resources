/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ca690; name: FUN_018ca690
 */


void FUN_018ca690(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != puVar2) {
    uVar7 = *(ulong *)(param_1 + 0x40);
    lVar10 = puVar2[uVar7 / 0x33];
    uVar11 = uVar7 % 0x33;
    uVar5 = *(long *)(param_1 + 0x48) + uVar7;
    lVar6 = lVar10 + uVar11 * 0x50;
    lVar8 = puVar2[uVar5 / 0x33] + (uVar5 % 0x33) * 0x50;
    if (lVar8 != lVar6) {
      plVar9 = puVar2 + uVar7 / 0x33;
      plVar1 = *(long **)(lVar10 + uVar11 * 0x50 + 0x38);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))();
      }
      plVar1 = *(long **)(lVar10 + uVar11 * 0x50 + 0x18);
      while( true ) {
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x20))();
        }
        lVar6 = lVar6 + 0x50;
        if (lVar6 - *plVar9 == 0xff0) {
          plVar9 = plVar9 + 1;
          lVar6 = *plVar9;
        }
        if (lVar8 == lVar6) break;
        if (*(long **)(lVar6 + 0x38) != (long *)0x0) {
          (**(code **)(**(long **)(lVar6 + 0x38) + 0x20))();
        }
        plVar1 = *(long **)(lVar6 + 0x18);
      }
      puVar2 = *(undefined8 **)(param_1 + 8);
      puVar4 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  uVar5 = (long)puVar4 - (long)puVar2 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar5) {
    plVar9 = *(long **)(param_1 + 0x50);
    uVar3 = *puVar2;
    uVar5 = FUN_00c4e564(plVar9);
    if ((uVar5 & 1) == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9,uVar3,0xff0,0x10);
    }
    else {
      FUN_00c48fe8(plVar9,uVar3,0xff0,0x10);
    }
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar2;
    lVar6 = *(long *)(param_1 + 0x10) - (long)puVar2;
    while (uVar5 = lVar6 >> 3, 2 < uVar5) {
      plVar9 = *(long **)(param_1 + 0x50);
      uVar3 = *puVar2;
      uVar5 = FUN_00c4e564(plVar9);
      if ((uVar5 & 1) == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9,uVar3,0xff0,0x10);
      }
      else {
        FUN_00c48fe8(plVar9,uVar3,0xff0,0x10);
      }
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      *(undefined8 **)(param_1 + 8) = puVar2;
      lVar6 = *(long *)(param_1 + 0x10) - (long)puVar2;
    }
  }
  if (uVar5 == 1) {
    uVar3 = 0x19;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    uVar3 = 0x33;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  return;
}


