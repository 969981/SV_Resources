/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0069b544; name: FUN_0069b544
 */


void FUN_0069b544(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    do {
      puVar1 = puVar1 + 1;
      FUN_00267fcc(*puVar1);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4 & 1;
  puVar3 = (ulong *)(uVar4 & 0xfffffffffffffffe);
  if ((uVar4 & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if ((puVar3 == (ulong *)0x0) && (lVar5 = *(long *)(param_1 + 0x28), lVar5 != 0)) {
    FUN_00513c68(lVar5);
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
    uVar4 = *(ulong *)(param_1 + 8);
    uVar2 = uVar4 & 1;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (uVar2 != 0) {
    uVar4 = uVar4 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar4 + 8) & 1) != 0) {
      **(undefined1 **)(uVar4 + 0x18) = 0;
      *(undefined8 *)(uVar4 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar4 + 8) = 0;
  }
  return;
}


