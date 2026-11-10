/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00140f60; name: FUN_00140f60
 */


long FUN_00140f60(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  if (param_3 + 1 < 2) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00125b90(param_1,"attempt to perform \'n%%0\'");
    }
  }
  else {
    lVar1 = 0;
    if (param_3 != 0) {
      lVar1 = param_2 / (long)param_3;
    }
    uVar2 = param_2 - lVar1 * param_3;
    if (uVar2 != 0) {
      return (param_3 & (long)(uVar2 ^ param_3) >> 0x3f) + uVar2;
    }
  }
  return 0;
}


