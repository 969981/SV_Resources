/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c00b98; name: FUN_01c00b98
 */


undefined1  [16] FUN_01c00b98(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_var;
  undefined8 extraout_var_03;
  undefined1 auVar3 [16];
  undefined4 extraout_var_00;
  undefined8 extraout_var_04;
  undefined1 auVar4 [16];
  undefined4 extraout_var_01;
  undefined8 extraout_var_05;
  undefined1 auVar5 [16];
  undefined4 extraout_var_02;
  undefined8 extraout_var_06;
  undefined1 auVar6 [16];
  
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) != 0) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x01c00bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      auVar3._4_4_ = extraout_var;
      auVar3._0_4_ = extraout_s0;
      auVar3._8_8_ = extraout_var_03;
      return auVar3;
    }
    break;
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x01c00bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      auVar4._4_4_ = extraout_var_00;
      auVar4._0_4_ = extraout_s0_00;
      auVar4._8_8_ = extraout_var_04;
      return auVar4;
    }
    break;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar2 != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar2 + lVar1 + -0x28))
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x01c00c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      auVar5._4_4_ = extraout_var_01;
      auVar5._0_4_ = extraout_s0_01;
      auVar5._8_8_ = extraout_var_05;
      return auVar5;
    }
    break;
  case 3:
    FUN_01c011f8(param_1 + 8);
    auVar6._4_4_ = extraout_var_02;
    auVar6._0_4_ = extraout_s0_02;
    auVar6._8_8_ = extraout_var_06;
    return auVar6;
  }
  return ZEXT816(0);
}


