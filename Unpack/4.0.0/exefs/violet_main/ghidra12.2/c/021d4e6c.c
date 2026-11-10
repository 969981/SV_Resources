/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d4e6c; name: FUN_021d4e6c
 */


bool FUN_021d4e6c(long param_1,uint param_2)

{
  long lVar1;
  undefined1 auStack_8 [8];
  
  lVar1 = FUN_00efcb90(param_1 + 0x108,auStack_8);
  if (lVar1 != 0) {
    FUN_01293f20(lVar1,param_2 & 1);
  }
  return lVar1 != 0;
}


