/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00353230; name: FUN_00353230
 */


long FUN_00353230(undefined8 param_1,undefined4 param_2)

{
  double dVar1;
  undefined1 auVar2 [12];
  
  auVar2 = FUN_0038e1e0(param_1,param_2,DAT_047ef5f8._4_4_);
  auVar2 = FUN_0038dfd0(auVar2._0_8_,auVar2._8_4_,DAT_047ef5f0,
                        CONCAT44(DAT_047ef5f8._4_4_,(undefined4)DAT_047ef5f8));
  dVar1 = (double)auVar2._0_8_ * 1000.0 + (double)auVar2._8_4_ / 1000000.0 + 0.999999999;
  if (dVar1 < 0.0) {
    return 0;
  }
  if (9.223372036854776e+18 < dVar1) {
    return 0x7fffffffffffffff;
  }
  return (long)dVar1;
}


