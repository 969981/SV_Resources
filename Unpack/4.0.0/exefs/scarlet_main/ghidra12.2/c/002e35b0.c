/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e35b0; name: FUN_002e35b0
 */


void FUN_002e35b0(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10) - (long)puVar2;
  if (lVar4 != 0) {
    uVar7 = *(ulong *)(param_1 + 0x20);
    plVar5 = (long *)((long)puVar2 + (uVar7 >> 4 & 0xffffffffffffff8));
    uVar1 = *(long *)(param_1 + 0x28) + uVar7;
    lVar6 = *plVar5 + (uVar7 & 0x7f) * 0x20;
    while (*(long *)((long)puVar2 + (uVar1 >> 4 & 0xffffffffffffff8)) + (uVar1 & 0x7f) * 0x20 !=
           lVar6) {
      lVar6 = lVar6 + 0x20;
      if (lVar6 - *plVar5 == 0x1000) {
        plVar5 = plVar5 + 1;
        lVar6 = *plVar5;
      }
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
    uVar3 = 0x40;
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    uVar3 = 0x80;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  return;
}


