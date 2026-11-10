/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01855048; name: FUN_01855048
 */


int FUN_01855048(byte *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  
  bVar1 = *param_1;
  if (bVar1 == 0) {
    return 0;
  }
  iVar2 = 0;
  pbVar3 = param_1;
  do {
    if ((long)(ulong)param_2 <= (long)pbVar3 - (long)param_1) {
      return iVar2;
    }
    if ((char)bVar1 < '\0') {
      if ((byte)(bVar1 + 0x3e) < 0x1e) {
        lVar4 = 2;
      }
      else if ((bVar1 & 0xf0) == 0xe0) {
        lVar4 = 3;
      }
      else if ((bVar1 & 0xf8) == 0xf0) {
        lVar4 = 4;
      }
      else if ((bVar1 & 0xfc) == 0xf8) {
        lVar4 = 5;
      }
      else {
        if ((bVar1 & 0xfe) != 0xfc) {
          return iVar2;
        }
        lVar4 = 6;
      }
    }
    else {
      lVar4 = 1;
    }
    pbVar3 = pbVar3 + lVar4;
    bVar1 = *pbVar3;
    iVar2 = iVar2 + 1;
  } while (bVar1 != 0);
  return iVar2;
}


