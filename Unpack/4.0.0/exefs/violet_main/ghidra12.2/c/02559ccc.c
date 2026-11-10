/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02559ccc; name: FUN_02559ccc
 */


void FUN_02559ccc(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
    FUN_02559d38(*(undefined8 *)(param_1 + 8));
    break;
  case 1:
    FUN_02559d6c(param_1 + 8);
    break;
  case 2:
    FUN_02559da4(param_1 + 8);
    break;
  case 3:
    FUN_02559dec(param_1 + 8);
  }
  return;
}


