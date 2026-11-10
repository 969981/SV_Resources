/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02357a7c; name: FUN_02357a7c
 */


void FUN_02357a7c(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
    FUN_02357ccc(*(undefined8 *)(param_1 + 8));
    return;
  case 1:
    FUN_02357d88(param_1 + 8);
    return;
  case 2:
    FUN_02357e48(param_1 + 8);
    return;
  case 3:
    FUN_02357f14(param_1 + 8);
    return;
  default:
    return;
  }
}


