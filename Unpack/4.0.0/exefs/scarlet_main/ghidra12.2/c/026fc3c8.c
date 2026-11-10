/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026fc3c8; name: FUN_026fc3c8
 */


undefined1  [16] FUN_026fc3c8(void)

{
  float __x;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  __x = (float)FUN_026fc438();
  if (NAN(SQRT(__x))) {
    auVar1._0_4_ = sqrtf(__x);
    auVar1._4_4_ = extraout_var;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT416((uint)SQRT(__x));
}


