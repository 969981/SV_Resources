/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00140fb0; name: FUN_00140fb0
 */


undefined1  [16] FUN_00140fb0(double param_1,double param_2)

{
  double dVar1;
  undefined8 extraout_var;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2._0_8_ = fmod(param_1,param_2);
  dVar1 = param_2;
  if (((0.0 < auVar2._0_8_) || (dVar1 = auVar2._0_8_, 0.0 < param_2)) && (dVar1 < 0.0)) {
    auVar3._0_8_ = auVar2._0_8_ + param_2;
    auVar3._8_8_ = 0;
    return auVar3;
  }
  auVar2._8_8_ = extraout_var;
  return auVar2;
}


