/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018ca8b8; name: FUN_018ca8b8
 */


void FUN_018ca8b8(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != puVar2) {
    uVar6 = *(ulong *)(param_1 + 0x40);
    lVar10 = puVar2[uVar6 / 0x38];
    uVar11 = uVar6 % 0x38;
    uVar5 = *(long *)(param_1 + 0x48) + uVar6;
    lVar9 = lVar10 + uVar11 * 0x48;
    lVar7 = puVar2[uVar5 / 0x38] + (uVar5 % 0x38) * 0x48;
    if (lVar7 != lVar9) {
      plVar8 = puVar2 + uVar6 / 0x38;
      plVar1 = *(long **)(lVar10 + uVar11 * 0x48 + 0x38);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))();
      }
      plVar1 = *(long **)(lVar10 + uVar11 * 0x48 + 0x18);
      while( true ) {
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x20))();
        }
        lVar9 = lVar9 + 0x48;
        if (lVar9 - *plVar8 == 0xfc0) {
          plVar8 = plVar8 + 1;
          lVar9 = *plVar8;
        }
        if (lVar7 == lVar9) break;
        if (*(long **)(lVar9 + 0x38) != (long *)0x0) {
          (**(code **)(**(long **)(lVar9 + 0x38) + 0x20))();
        }
        plVar1 = *(long **)(lVar9 + 0x18);
      }
      puVar2 = *(undefined8 **)(param_1 + 8);
      puVar4 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  uVar5 = (long)puVar4 - (long)puVar2 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar5) {
    plVar8 = *(long **)(param_1 + 0x50);
    uVar3 = *puVar2;
    uVar5 = FUN_00c4e564(plVar8);
    if ((uVar5 & 1) == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar3,0xfc0,8);
    }
    else {
      FUN_00c48fe8(plVar8,uVar3,0xfc0,8);
    }
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar2;
    lVar9 = *(long *)(param_1 + 0x10) - (long)puVar2;
    while (uVar5 = lVar9 >> 3, 2 < uVar5) {
      plVar8 = *(long **)(param_1 + 0x50);
      uVar3 = *puVar2;
      uVar5 = FUN_00c4e564(plVar8);
      if ((uVar5 & 1) == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8,uVar3,0xfc0,8);
      }
      else {
        FUN_00c48fe8(plVar8,uVar3,0xfc0,8);
      }
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      *(undefined8 **)(param_1 + 8) = puVar2;
      lVar9 = *(long *)(param_1 + 0x10) - (long)puVar2;
    }
  }
  if (uVar5 == 1) {
    uVar3 = 0x1c;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    uVar3 = 0x38;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  return;
}


