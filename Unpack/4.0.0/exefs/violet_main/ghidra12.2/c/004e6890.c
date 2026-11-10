/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e6890; name: FUN_004e6890
 */


long FUN_004e6890(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x70);
    if (lVar1 != 0) {
      FUN_004d6220(lVar1,0);
    }
    return lVar1;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_00520d08(param_1,0,0x70);
  }
  lVar1 = FUN_00520c00(param_1,0x70);
  FUN_004d6220(lVar1,param_1);
  return lVar1;
}


