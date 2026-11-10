/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01855d6c; name: FUN_01855d6c
 */


long FUN_01855d6c(long param_1,int param_2)

{
  long lVar1;
  
  if ((ulong)*(byte *)(param_1 + 0x2420) != 0) {
    lVar1 = 0;
    do {
      if (*(int *)(param_1 + 8 + lVar1) == param_2) {
        lVar1 = param_1 + lVar1 + 8;
        do {
          if (*(int *)(lVar1 + 4) != 7) {
            return lVar1;
          }
          lVar1 = FUN_01248948(param_1,lVar1,param_2);
        } while (lVar1 != 0);
        return 0;
      }
      lVar1 = lVar1 + 0x8c;
    } while ((ulong)*(byte *)(param_1 + 0x2420) * 0x8c != lVar1);
  }
  return 0;
}


