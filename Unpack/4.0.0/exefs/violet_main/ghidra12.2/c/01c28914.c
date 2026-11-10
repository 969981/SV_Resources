/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c28914; name: FUN_01c28914
 */


void FUN_01c28914(undefined8 *param_1,undefined1 *param_2)

{
  switch(*param_2) {
  case 0:
    FUN_01c289b8(*(undefined8 *)(param_2 + 8));
    return;
  case 1:
    FUN_01c289e4(param_2 + 8);
    return;
  case 2:
    FUN_01c28a14(param_2 + 8);
    return;
  case 3:
    FUN_01c28a50(param_2 + 8);
    return;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
}


