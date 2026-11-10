/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e6bc8; name: FUN_004e6bc8
 */


long FUN_004e6bc8(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,0xa8);
    if (lVar1 != 0) {
      FUN_004db000(lVar1,0);
    }
    return lVar1;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_00520d08(param_1,0,0xa8);
  }
  lVar1 = FUN_00520c00(param_1,0xa8);
  FUN_004db000(lVar1,param_1);
  return lVar1;
}


