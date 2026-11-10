/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028f3d94; name: FUN_028f3d94
 */


void FUN_028f3d94(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != puVar3) {
    uVar5 = *(ulong *)(param_1 + 0x40);
    plVar8 = (long *)((long)puVar3 + (uVar5 >> 2 & 0x3ffffffffffffff8));
    uVar2 = *(long *)(param_1 + 0x48) + uVar5;
    lVar6 = *plVar8 + (uVar5 & 0x1f) * 0x80;
    lVar1 = *(long *)((long)puVar3 + (uVar2 >> 2 & 0x3ffffffffffffff8)) + (uVar2 & 0x1f) * 0x80;
    if (lVar1 != lVar6) {
      do {
        FUN_012c5b38(lVar6 + 0x38);
        FUN_012c5b38(lVar6);
        lVar6 = lVar6 + 0x80;
        if (lVar6 - *plVar8 == 0x1000) {
          plVar8 = plVar8 + 1;
          lVar6 = *plVar8;
        }
      } while (lVar1 != lVar6);
      puVar3 = *(undefined8 **)(param_1 + 8);
      puVar4 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  lVar6 = (long)puVar4 - (long)puVar3;
  while (uVar2 = lVar6 >> 3, 2 < uVar2) {
    plVar8 = *(long **)(param_1 + 0x50);
    uVar7 = *puVar3;
    uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar2 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar7,0x1000,8);
    }
    else {
      FUN_00c48fe8(plVar8,uVar7,0x1000,8);
    }
    puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar3;
    lVar6 = *(long *)(param_1 + 0x10) - (long)puVar3;
  }
  if (uVar2 == 1) {
    uVar7 = 0x10;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    uVar7 = 0x20;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  return;
}


