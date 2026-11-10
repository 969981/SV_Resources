/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018d4848; name: FUN_018d4848
 */


undefined1  [16] FUN_018d4848(undefined1 *param_1)

{
  undefined1 auVar1 [16];
  
  switch(*param_1) {
  case 0:
    auVar1 = FUN_018d4b38(*(undefined8 *)(param_1 + 8));
    break;
  case 1:
    auVar1 = FUN_018d4c50(param_1 + 8);
    break;
  case 2:
    auVar1 = FUN_018d48b8(param_1 + 8);
    break;
  case 3:
    auVar1 = FUN_018d4f14(param_1 + 8);
    break;
  default:
    auVar1 = ZEXT816(0);
  }
  auVar1._8_8_ = auVar1._8_8_ & 0xffffffff;
  return auVar1;
}


