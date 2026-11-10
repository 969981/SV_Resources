/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c229c8; name: FUN_01c229c8
 */


undefined8 FUN_01c229c8(undefined1 *param_1)

{
  undefined8 uVar1;
  
  switch(*param_1) {
  case 0:
    uVar1 = FUN_01c22bd0(*(undefined8 *)(param_1 + 8));
    break;
  case 1:
    uVar1 = FUN_01c22c08(param_1 + 8);
    break;
  case 2:
    uVar1 = FUN_01c22c48(param_1 + 8);
    break;
  case 3:
    uVar1 = FUN_01c22c94(param_1 + 8);
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}


