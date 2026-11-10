/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020dae40; name: FUN_020dae40
 */


void FUN_020dae40(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  uVar2 = *(ulong *)(param_1 + 0x70);
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  puVar5 = *(undefined8 **)(param_1 + 0x40);
  plVar8 = (long *)((long)puVar1 + (uVar2 >> 4 & 0xffffffffffffff8));
  if (puVar5 == puVar1) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar8 + (uVar2 & 0x7f) * 0x20;
  }
  while( true ) {
    lVar3 = *(long *)(param_1 + 0x78);
    if (puVar5 == puVar1) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)((long)puVar1 + (lVar3 + uVar2 >> 4 & 0xffffffffffffff8)) +
              (lVar3 + uVar2 & 0x7f) * 0x20;
    }
    if (lVar4 == lVar6) break;
    *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + -1;
    lVar4 = lVar4 + 0x20;
    if (lVar4 - *plVar8 == 0x1000) {
      plVar8 = plVar8 + 1;
      lVar4 = *plVar8;
    }
    uVar2 = *(ulong *)(param_1 + 0x70);
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    puVar5 = *(undefined8 **)(param_1 + 0x40);
  }
  while ((lVar3 != 0 &&
         (*(int *)(*(long *)((long)puVar1 + (uVar2 >> 4 & 0xffffffffffffff8)) +
                   (uVar2 & 0x7f) * 0x20 + 0x14) < 1))) {
    uVar2 = uVar2 + 1;
    lVar3 = lVar3 + -1;
    *(ulong *)(param_1 + 0x70) = uVar2;
    *(long *)(param_1 + 0x78) = lVar3;
    if (0xff < uVar2) {
      plVar8 = *(long **)(param_1 + 0x80);
      uVar7 = *puVar1;
      uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,uVar7,0x1000,0x10);
      }
      else {
        FUN_00c48fe8(plVar8,uVar7,0x1000,0x10);
      }
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      lVar3 = *(long *)(param_1 + 0x78);
      uVar2 = *(long *)(param_1 + 0x70) - 0x80;
      *(undefined8 **)(param_1 + 0x38) = puVar1;
      *(ulong *)(param_1 + 0x70) = uVar2;
    }
  }
  return;
}


