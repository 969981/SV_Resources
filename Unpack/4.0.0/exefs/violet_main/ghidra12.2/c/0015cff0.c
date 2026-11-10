/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0015cff0; name: FUN_0015cff0
 */


undefined8 FUN_0015cff0(byte *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  
  if (param_2 < 0x11) {
    if (1 < param_2) {
      bVar1 = *param_1;
      param_2 = param_2 + -1;
      do {
        param_1 = param_1 + 1;
        if (*param_1 != bVar1) {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    return 1;
  }
  pbVar3 = (byte *)((ulong)(param_1 + 7) & 0xfffffffffffffff8);
  bVar1 = *pbVar3;
  if (param_1 < pbVar3) {
    do {
      if (bVar1 != *param_1) {
        return 0;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (pbVar3 != param_1);
    param_1 = pbVar3;
  }
  if (*(long *)param_1 == (ulong)bVar1 * 0x101010101010101) {
    lVar4 = param_2 + 7;
    if (-1 < param_2) {
      lVar4 = param_2;
    }
    lVar4 = lVar4 >> 3;
    lVar2 = lVar4;
    pbVar3 = param_1;
    if (param_2 < 8) {
LAB_0015d0a8:
      if (param_2 <= lVar4) {
        return 1;
      }
      param_2 = param_2 - lVar4;
      param_1 = param_1 + lVar4;
      do {
        if (*param_1 != bVar1) {
          return 0;
        }
        param_2 = param_2 + -1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
      return 1;
    }
    do {
      pbVar3 = pbVar3 + 8;
      if (lVar2 + -1 == 0) goto LAB_0015d0a8;
      lVar2 = lVar2 + -1;
    } while (*(long *)pbVar3 == (ulong)bVar1 * 0x101010101010101);
  }
  return 0;
}


