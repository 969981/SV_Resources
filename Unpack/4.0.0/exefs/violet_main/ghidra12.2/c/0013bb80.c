/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013bb80; name: FUN_0013bb80
 */


void FUN_0013bb80(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  lVar1 = param_1 + 0x228;
  do {
    if ((*(byte *)(*(long *)(lVar1 + lVar2) + 9) & 0x18) != 0) {
      *(undefined8 *)(lVar1 + lVar2) = *(undefined8 *)(param_1 + 0x110);
    }
    if ((*(byte *)(*(long *)(lVar1 + lVar2 + 8) + 9) & 0x18) != 0) {
      *(undefined8 *)(lVar1 + lVar2 + 8) = *(undefined8 *)(param_1 + 0x110);
    }
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x350);
  return;
}


