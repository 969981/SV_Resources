/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033fc5b4; name: FUN_033fc5b4
 */


undefined8 FUN_033fc5b4(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_1 + 0xb8);
  lVar3 = *(long *)(param_1 + 8);
  if (uVar2 != 0 && lVar3 != 0) {
    if (*(void **)(lVar3 + 0x10) != (void *)0x0) {
      memset(*(void **)(lVar3 + 0x10),0,(ulong)(uint)(*(int *)(lVar3 + 8) << 2));
    }
    *(undefined4 *)(lVar3 + 0x18) = 0;
    if (uVar2 != 1) {
      lVar3 = 0;
      lVar4 = (ulong)uVar2 - 1;
      do {
        lVar1 = *(long *)(param_1 + 8) + lVar3;
        if (*(void **)(lVar1 + 0x48) != (void *)0x0) {
          memset(*(void **)(lVar1 + 0x48),0,(ulong)(uint)(*(int *)(lVar1 + 0x40) << 2));
        }
        lVar3 = lVar3 + 0x38;
        lVar4 = lVar4 + -1;
        *(undefined4 *)(lVar1 + 0x50) = 0;
      } while (lVar4 != 0);
    }
  }
  return 1;
}


