/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ee948; name: FUN_008ee948
 */


void FUN_008ee948(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = *(ushort *)(param_1 + 0xdc);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_008eeb64(*(long *)(param_1 + 0x28) + lVar2,param_2);
      lVar2 = lVar2 + 0x78;
    } while ((ulong)uVar1 * 0x78 != lVar2);
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    lVar2 = *(long *)(param_1 + 0xa8);
    if (*(char *)(lVar2 + 0x110) != '\0') {
      FUN_00e5c07c(lVar2,param_2);
      FUN_01327a58(lVar2);
      return;
    }
  }
  return;
}


