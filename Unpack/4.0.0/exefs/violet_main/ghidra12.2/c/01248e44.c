/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01248e44; name: FUN_01248e44
 */


void FUN_01248e44(undefined8 param_1,undefined1 *param_2)

{
  switch(*param_2) {
  case 1:
    FUN_0124dbbc(param_1,*(undefined4 *)(param_2 + 4));
    return;
  case 2:
    FUN_01250e28(param_1,*(undefined4 *)(param_2 + 4));
    return;
  case 3:
    FUN_02986460();
    return;
  case 4:
    FUN_01251878(param_1,*(undefined4 *)(param_2 + 4));
    return;
  case 5:
    FUN_029864bc();
    return;
  default:
    return;
  }
}


