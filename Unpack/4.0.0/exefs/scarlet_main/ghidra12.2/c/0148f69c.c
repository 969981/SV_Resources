/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0148f69c; name: FUN_0148f69c
 */


void FUN_0148f69c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != puVar2) {
    uVar7 = *(ulong *)(param_1 + 0x40);
    plVar8 = (long *)((long)puVar2 + (uVar7 >> 4 & 0xffffffffffffff8));
    uVar5 = *(long *)(param_1 + 0x48) + uVar7;
    lVar6 = *plVar8 + (uVar7 & 0x7f) * 0x20;
    lVar1 = *(long *)((long)puVar2 + (uVar5 >> 4 & 0xffffffffffffff8)) + (uVar5 & 0x7f) * 0x20;
    if (lVar1 != lVar6) {
      if (*(long **)(lVar6 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(lVar6 + 0x18) + 0x20))();
      }
      lVar6 = lVar6 + 0x20;
      if (lVar6 - *plVar8 == 0x1000) {
        plVar8 = plVar8 + 1;
        lVar6 = *plVar8;
      }
      if (lVar1 != lVar6) {
        if (*(long **)(lVar6 + 0x18) != (long *)0x0) {
          (**(code **)(**(long **)(lVar6 + 0x18) + 0x20))();
        }
        while( true ) {
          lVar6 = lVar6 + 0x20;
          if (lVar6 - *plVar8 == 0x1000) {
            plVar8 = plVar8 + 1;
            lVar6 = *plVar8;
          }
          if (lVar1 == lVar6) break;
          if (*(long **)(lVar6 + 0x18) != (long *)0x0) {
            (**(code **)(**(long **)(lVar6 + 0x18) + 0x20))();
          }
        }
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
    uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar3,0x1000,8);
    }
    else {
      FUN_00c48fe8(plVar8,uVar3,0x1000,8);
    }
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar2;
    lVar6 = *(long *)(param_1 + 0x10) - (long)puVar2;
    while (uVar5 = lVar6 >> 3, 2 < uVar5) {
      plVar8 = *(long **)(param_1 + 0x50);
      uVar3 = *puVar2;
      uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,uVar3,0x1000,8);
      }
      else {
        FUN_00c48fe8(plVar8,uVar3,0x1000,8);
      }
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      *(undefined8 **)(param_1 + 8) = puVar2;
      lVar6 = *(long *)(param_1 + 0x10) - (long)puVar2;
    }
  }
  if (uVar5 == 1) {
    uVar3 = 0x40;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    uVar3 = 0x80;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  return;
}


