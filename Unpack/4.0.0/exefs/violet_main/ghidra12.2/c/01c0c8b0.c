/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c0c8b0; name: FUN_01c0c8b0
 */


bool FUN_01c0c8b0(undefined1 *param_1)

{
  bool bVar1;
  
  switch(*param_1) {
  case 0:
  case 1:
    bVar1 = *(long *)(param_1 + 8) == 0;
    break;
  case 2:
  case 3:
    if (*(long *)(param_1 + 8) == 0) {
      return true;
    }
    bVar1 = *(short *)(*(long *)(param_1 + 8) + 0x1a) == 0;
    break;
  default:
    return true;
  }
  return bVar1;
}


