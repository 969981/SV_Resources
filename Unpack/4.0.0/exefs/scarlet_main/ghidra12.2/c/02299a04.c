/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02299a04; name: FUN_02299a04
 */


undefined1  [16] FUN_02299a04(undefined1 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  switch(*param_1) {
  case 0:
    auVar1 = FUN_02299c10(*(undefined8 *)(param_1 + 8));
    break;
  case 1:
    auVar1 = FUN_02299c4c(param_1 + 8);
    break;
  case 2:
    auVar1 = FUN_02299c8c(param_1 + 8);
    break;
  case 3:
    auVar1 = FUN_02299cd8(param_1 + 8);
    break;
  default:
    auVar1._8_8_ = 0xffffffff;
    auVar1._0_8_ = 0xffffffffffffffff;
  }
  auVar2._0_8_ = auVar1._0_8_;
  auVar2._8_8_ = auVar1._8_8_ & 0xffffffff;
  return auVar2;
}


