/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c2c044; name: FUN_01c2c044
 */


undefined8 FUN_01c2c044(undefined1 *param_1)

{
  undefined8 uVar1;
  
  switch(*param_1) {
  case 0:
    uVar1 = FUN_01c2c24c(*(undefined8 *)(param_1 + 8));
    break;
  case 1:
    uVar1 = FUN_01c2c284(param_1 + 8);
    break;
  case 2:
    uVar1 = FUN_01c2c2c4(param_1 + 8);
    break;
  case 3:
    uVar1 = FUN_01c2c310(param_1 + 8);
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}


