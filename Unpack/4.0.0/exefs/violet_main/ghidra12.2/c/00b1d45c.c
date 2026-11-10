/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b1d45c; name: FUN_00b1d45c
 */


void FUN_00b1d45c(long *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    lVar2 = param_1[2];
    bVar1 = *(byte *)(*param_1 + lVar2);
    param_1[2] = lVar2 + 1;
    if (((bVar1 == 0x84) || (-1 < (char)bVar1)) || (0xbf < bVar1)) {
      if (bVar1 == 0x84) {
        bVar1 = *(byte *)(*param_1 + lVar2 + 1);
        param_1[2] = lVar2 + 2;
      }
      *param_2 = bVar1;
      return;
    }
  }
  return;
}


