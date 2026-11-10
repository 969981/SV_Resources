/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0255a2b4; name: FUN_0255a2b4
 */


undefined1  [16] FUN_0255a2b4(undefined1 *param_1)

{
  undefined4 extraout_s0;
  undefined4 uVar1;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 uVar4;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined1 auVar2 [16];
  
  switch(*param_1) {
  case 0:
    FUN_0255a350(*(undefined8 *)(param_1 + 8));
    uVar1 = extraout_s0;
    uVar3 = extraout_var;
    uVar4 = extraout_var_03;
    break;
  case 1:
    FUN_0255a38c(param_1 + 8);
    uVar1 = extraout_s0_00;
    uVar3 = extraout_var_00;
    uVar4 = extraout_var_04;
    break;
  case 2:
    FUN_0255a3cc(param_1 + 8);
    uVar1 = extraout_s0_01;
    uVar3 = extraout_var_01;
    uVar4 = extraout_var_05;
    break;
  case 3:
    FUN_0255a41c(param_1 + 8);
    uVar1 = extraout_s0_02;
    uVar3 = extraout_var_02;
    uVar4 = extraout_var_06;
    break;
  default:
    uVar1 = 0xbf800000;
    uVar3 = 0;
    uVar4 = 0;
  }
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = uVar1;
  auVar2._8_8_ = uVar4;
  return auVar2;
}


