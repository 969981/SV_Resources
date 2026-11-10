/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e53bb8; name: FUN_02e53bb8
 */


undefined1  [16] FUN_02e53bb8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  
  if ((((*param_1 != 0) && (param_1[1] != 0)) && (*(short *)(param_1[1] + 0x1a) != 0)) &&
     (plVar1 = (long *)(**(code **)(*(long *)*param_1 + 0x38))(), plVar1 != (long *)0x0)) {
    do {
      plVar2 = (long *)(**(code **)(*plVar1 + 0x60))(plVar1);
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02e53c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x30))();
        auVar3._4_4_ = extraout_var;
        auVar3._0_4_ = extraout_s0;
        auVar3._8_8_ = extraout_var_00;
        return auVar3;
      }
      plVar1 = (long *)(**(code **)(*plVar1 + 0x38))(plVar1);
    } while (plVar1 != (long *)0x0);
  }
  return ZEXT816(0);
}


