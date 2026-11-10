/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033f8820; name: FUN_033f8820
 */


undefined8 FUN_033f8820(long param_1)

{
  void *pvVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x2c);
  if (uVar2 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      pvVar1 = *(void **)(*(long *)(param_1 + 0x20) + lVar3);
      if (pvVar1 != (void *)0x0) {
        memset(pvVar1,0,(ulong)*(uint *)(*(long *)(param_1 + 0x20) + lVar3 + 8));
        uVar2 = *(ushort *)(param_1 + 0x2c);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x20;
    } while (uVar4 < uVar2);
  }
  uVar2 = *(ushort *)(param_1 + 0x3c);
  if (uVar2 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      pvVar1 = *(void **)(*(long *)(param_1 + 0x30) + lVar3);
      if (pvVar1 != (void *)0x0) {
        memset(pvVar1,0,(ulong)*(uint *)(*(long *)(param_1 + 0x30) + lVar3 + 8));
        uVar2 = *(ushort *)(param_1 + 0x3c);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x20;
    } while (uVar4 < uVar2);
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar3) = 0;
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0xc;
    } while (uVar4 < *(uint *)(param_1 + 0x104));
  }
  return 1;
}


