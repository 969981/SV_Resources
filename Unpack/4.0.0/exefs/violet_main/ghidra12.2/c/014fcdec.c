/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014fcdec; name: FUN_014fcdec
 */


void FUN_014fcdec(long param_1,uint param_2)

{
  long lVar1;
  undefined1 auStack_8 [8];
  
  lVar1 = FUN_0120fc08(param_1 + 0x108,auStack_8);
  if (lVar1 != 0) {
    FUN_014fce20(lVar1,param_2 & 1);
  }
  return;
}


