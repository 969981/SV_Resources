/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f8d80; name: FUN_001f8d80
 */


long FUN_001f8d80(byte *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    lVar1 = -1;
  }
  else {
    lVar1 = 0;
    do {
      if (0xccccccccccccccc < lVar1) {
        return -1;
      }
      if (9 < (*param_1 - 0x30 & 0xff)) {
        return -1;
      }
      uVar2 = (ulong)(*param_1 - 0x30);
      if ((long)(uVar2 ^ 0x7fffffffffffffff) < lVar1 * 10) {
        return -1;
      }
      lVar1 = uVar2 + lVar1 * 10;
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return lVar1;
}


