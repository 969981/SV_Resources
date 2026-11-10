/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019b8380; name: FUN_019b8380
 */


undefined1  [16] FUN_019b8380(undefined1 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  switch(*param_1) {
  case 0:
    auVar1 = FUN_025a41e0(*(undefined8 *)(param_1 + 8));
    break;
  case 1:
    auVar1 = FUN_025a422c(param_1 + 8);
    break;
  case 2:
    auVar1 = FUN_019b83fc(param_1 + 8);
    break;
  case 3:
    auVar1 = FUN_025a427c(param_1 + 8);
    break;
  default:
    FUN_01667884(&local_40);
    auVar1._8_8_ = uStack_38;
    auVar1._0_8_ = local_40;
  }
  return auVar1;
}


