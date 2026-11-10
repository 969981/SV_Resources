/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d4fa3c; name: FUN_01d4fa3c
 */


void FUN_01d4fa3c(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
    FUN_01d4fb54(*(undefined8 *)(param_1 + 8));
    return;
  case 1:
    FUN_01d4fb70(param_1 + 8);
    return;
  case 2:
    FUN_01d4fb90(param_1 + 8);
    return;
  case 3:
    FUN_01d4fbbc(param_1 + 8);
    return;
  default:
    FUN_01d4beb0();
    return;
  }
}


