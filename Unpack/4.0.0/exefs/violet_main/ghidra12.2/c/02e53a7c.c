/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e53a7c; name: FUN_02e53a7c
 */


undefined1  [16] FUN_02e53a7c(long *param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (((*param_1 == 0) || (param_1[1] == 0)) || (*(short *)(param_1[1] + 0x1a) == 0)) {
    return ZEXT816(0);
  }
                    /* WARNING: Could not recover jumptable at 0x02e53aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x90))();
  auVar1._4_4_ = extraout_var;
  auVar1._0_4_ = extraout_s0;
  auVar1._8_8_ = extraout_var_00;
  return auVar1;
}


