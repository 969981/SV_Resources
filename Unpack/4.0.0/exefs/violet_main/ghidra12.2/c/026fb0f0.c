/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fb0f0; name: FUN_026fb0f0
 */


undefined1  [16] FUN_026fb0f0(void)

{
  float __x;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  __x = (float)FUN_026fb1fc();
  if (NAN(SQRT(__x))) {
    auVar1._0_4_ = sqrtf(__x);
    auVar1._4_4_ = extraout_var;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT416((uint)SQRT(__x));
}


