/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00264d88; name: FUN_00264d88
 */


long FUN_00264d88(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x38);
    if (lVar1 != 0) {
      FUN_00263cd4(lVar1,0);
    }
    return lVar1;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_00520d08(param_1,0,0x38);
  }
  lVar1 = FUN_00520c00(param_1,0x38);
  FUN_00263cd4(lVar1,param_1);
  return lVar1;
}


