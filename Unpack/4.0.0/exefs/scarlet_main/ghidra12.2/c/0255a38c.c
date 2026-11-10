/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0255a38c; name: FUN_0255a38c
 */


undefined1  [16] FUN_0255a38c(long *param_1,code *param_2,ulong param_3)

{
  undefined4 extraout_s0;
  undefined4 uVar1;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  undefined8 uVar4;
  
  if (*param_1 == 0) {
    uVar1 = 0xbf800000;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(*param_1 + ((long)param_3 >> 1)));
    }
    (*param_2)();
    uVar1 = extraout_s0;
    uVar3 = extraout_var;
    uVar4 = extraout_var_00;
  }
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = uVar1;
  auVar2._8_8_ = uVar4;
  return auVar2;
}


