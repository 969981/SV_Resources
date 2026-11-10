/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e02e8; name: FUN_007e02e8
 */


undefined8 FUN_007e02e8(ushort *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  
  bVar3 = FUN_007df454(*(undefined8 *)(param_1 + 4));
  if (bVar3 == 0xff) {
    return 0;
  }
  if ((param_4 & 1) != 0) {
    *(byte *)(param_1 + 2) = bVar3;
  }
  uVar2 = *param_1;
  if (uVar2 != 0) {
    bVar4 = 0;
    do {
      if (bVar4 != bVar3) {
        lVar1 = *(long *)(*(long *)(param_1 + 4) + 8) + (ulong)bVar4 * 0x20;
        if ((*(long *)(lVar1 + 0x10) != 0) && (*(char *)(lVar1 + 0x1c) != -1)) {
          *(undefined1 *)(*(long *)(*(long *)(param_1 + 0xc) + (ulong)bVar3 * 8) + (ulong)bVar4) = 1
          ;
        }
      }
      bVar4 = bVar4 + 1;
    } while (bVar4 < uVar2);
  }
  return 1;
}


