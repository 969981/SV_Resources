/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e8f54; name: FUN_002e8f54
 */


void FUN_002e8f54(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10) - (long)puVar2;
  if (lVar4 != 0) {
    uVar6 = *(ulong *)(param_1 + 0x20);
    uVar1 = *(long *)(param_1 + 0x28) + uVar6;
    lVar5 = puVar2[uVar6 / 0x55] + (uVar6 % 0x55) * 0x30;
    lVar7 = puVar2[uVar1 / 0x55] + (uVar1 % 0x55) * 0x30;
    if (lVar7 != lVar5) {
      plVar8 = puVar2 + uVar6 / 0x55;
      do {
        lVar5 = lVar5 + 0x30;
        if (lVar5 - *plVar8 == 0xff0) {
          plVar8 = plVar8 + 1;
          lVar5 = *plVar8;
        }
      } while (lVar7 != lVar5);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  while (uVar1 = lVar4 >> 3, 2 < uVar1) {
    operator_delete((void *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar2;
    lVar4 = *(long *)(param_1 + 0x10) - (long)puVar2;
  }
  if (uVar1 == 1) {
    uVar3 = 0x2a;
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    uVar3 = 0x55;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  return;
}


