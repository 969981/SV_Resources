/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001eecb4; name: FUN_001eecb4
 */


undefined8 FUN_001eecb4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *(uint *)(param_1 + 0x988);
  if (*(uint *)(param_1 + 0x9a0) <= *(uint *)(param_1 + 0x988)) {
    uVar4 = *(uint *)(param_1 + 0x9a0);
  }
  if (99 < uVar4) {
    uVar4 = 100;
  }
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  if ((ulong)uVar4 < *(ulong *)(param_1 + 0x910)) {
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x8d0) + 0x98);
      uVar2 = FUN_001eebbc(param_1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *(long *)(param_1 + 0x8d0) = lVar5;
      puVar1 = (undefined8 *)(param_1 + 0x8d8);
      if (lVar5 != 0) {
        puVar1 = (undefined8 *)(lVar5 + 0x90);
      }
      *puVar1 = 0;
      uVar3 = *(long *)(param_1 + 0x910) - 1;
      *(ulong *)(param_1 + 0x910) = uVar3;
    } while (uVar4 < uVar3);
  }
  return 0;
}


