/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d13234; name: FUN_01d13234
 */


void FUN_01d13234(undefined8 param_1,undefined1 *param_2)

{
  switch(*param_2) {
  case 0:
    FUN_01d13428(*(undefined8 *)(param_2 + 8));
    return;
  case 1:
    FUN_01d1344c(param_2 + 8);
    return;
  case 2:
    FUN_01d13474(param_2 + 8);
    return;
  case 3:
    FUN_01d134a8(param_2 + 8);
    return;
  default:
    FUN_01d132d4(param_1,1);
    return;
  }
}


