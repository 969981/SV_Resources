/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02355f80; name: FUN_02355f80
 */


void FUN_02355f80(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
    FUN_02356194(*(undefined8 *)(param_1 + 8));
    return;
  case 1:
    FUN_02356250(param_1 + 8);
    return;
  case 2:
    FUN_02356310(param_1 + 8);
    return;
  case 3:
    FUN_023563dc(param_1 + 8);
    return;
  default:
    return;
  }
}


