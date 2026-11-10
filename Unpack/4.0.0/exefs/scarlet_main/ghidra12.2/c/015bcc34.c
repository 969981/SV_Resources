/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015bcc34; name: FUN_015bcc34
 */


void FUN_015bcc34(long param_1)

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
    lVar7 = puVar1[uVar5 / 0x5d] + (uVar5 % 0x5d) * 0x2c;
    uVar3 = *(long *)(param_1 + 0x48) + uVar5;
    lVar6 = puVar1[uVar3 / 0x5d] + (uVar3 % 0x5d) * 0x2c;
    if (lVar6 != lVar7) {
      plVar8 = puVar1 + uVar5 / 0x5d;
      do {
        lVar7 = lVar7 + 0x2c;
        if (lVar7 - *plVar8 == 0xffc) {
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
    uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar2,0xffc,4);
    }
    else {
      FUN_00c48fe8(plVar8,uVar2,0xffc,4);
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar1;
    lVar4 = *(long *)(param_1 + 0x10) - (long)puVar1;
    while (uVar3 = lVar4 >> 3, 2 < uVar3) {
      plVar8 = *(long **)(param_1 + 0x50);
      uVar2 = *puVar1;
      uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,uVar2,0xffc,4);
      }
      else {
        FUN_00c48fe8(plVar8,uVar2,0xffc,4);
      }
      puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      *(undefined8 **)(param_1 + 8) = puVar1;
      lVar4 = *(long *)(param_1 + 0x10) - (long)puVar1;
    }
  }
  if (uVar3 == 1) {
    uVar2 = 0x2e;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    uVar2 = 0x5d;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  return;
}


