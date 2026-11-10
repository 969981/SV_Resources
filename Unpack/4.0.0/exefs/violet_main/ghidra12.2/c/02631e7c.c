/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02631e7c; name: FUN_02631e7c
 */


void FUN_02631e7c(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
    FUN_0263207c(*(undefined8 *)(param_1 + 8));
    break;
  case 1:
    FUN_02632100(param_1 + 8);
    break;
  case 2:
    FUN_02632188(param_1 + 8);
    break;
  case 3:
    FUN_0263221c(param_1 + 8);
  }
  return;
}


