/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e53ab4; name: FUN_02e53ab4
 */


undefined1  [16] FUN_02e53ab4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  
  if (((*param_1 == 0) || (param_1[1] == 0)) || (*(short *)(param_1[1] + 0x1a) == 0)) {
    return ZEXT816(0);
  }
  if (((*param_1 != 0) && (param_1[1] != 0)) &&
     ((*(short *)(param_1[1] + 0x1a) != 0 &&
      (plVar1 = (long *)(**(code **)(*(long *)*param_1 + 0x38))(), plVar1 != (long *)0x0)))) {
    do {
      plVar2 = (long *)(**(code **)(*plVar1 + 0x60))(plVar1);
      if (plVar2 != (long *)0x0) {
        param_1 = (long *)(**(code **)(*plVar2 + 0x80))();
        goto LAB_02e53b4c;
      }
      plVar1 = (long *)(**(code **)(*plVar1 + 0x38))(plVar1);
    } while (plVar1 != (long *)0x0);
  }
  param_1 = (long *)*param_1;
LAB_02e53b4c:
                    /* WARNING: Could not recover jumptable at 0x02e53b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))();
  auVar3._4_4_ = extraout_var;
  auVar3._0_4_ = extraout_s0;
  auVar3._8_8_ = extraout_var_00;
  return auVar3;
}


