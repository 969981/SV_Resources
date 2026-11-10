/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e64b4; name: FUN_004e64b4
 */


long FUN_004e64b4(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,0xe8);
    if (lVar1 != 0) {
      FUN_004cf958(lVar1,0);
    }
    return lVar1;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_00520d08(param_1,0,0xe8);
  }
  lVar1 = FUN_00520c00(param_1,0xe8);
  FUN_004cf958(lVar1,param_1);
  return lVar1;
}


