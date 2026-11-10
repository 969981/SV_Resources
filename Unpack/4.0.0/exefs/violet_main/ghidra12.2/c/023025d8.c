/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023025d8; name: FUN_023025d8
 */


void FUN_023025d8(undefined8 *param_1,undefined1 *param_2)

{
  switch(*param_2) {
  case 0:
    FUN_023027e4(*(undefined8 *)(param_2 + 8));
    return;
  case 1:
    FUN_02302850(param_2 + 8);
    return;
  case 2:
    FUN_023028c0(param_2 + 8);
    return;
  case 3:
    FUN_0230293c(param_2 + 8);
    return;
  default:
    *param_1 = 0x40490fdb00000000;
    param_1[1] = 0x40490fdb40490fdb;
    param_1[2] = 0x40490fdb;
    return;
  }
}


