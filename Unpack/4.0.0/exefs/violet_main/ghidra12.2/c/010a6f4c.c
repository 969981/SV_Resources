/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010a6f4c; name: FUN_010a6f4c
 */


bool FUN_010a6f4c(undefined1 param_1,uint param_2)

{
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
    break;
  case 4:
    goto LAB_010a6f84;
  case 5:
    param_2 = param_2 & 0xfffffffd;
LAB_010a6f84:
    return param_2 != 0;
  case 6:
    if (3 < param_2) {
      return true;
    }
    param_2 = param_2 & 0xf;
    break;
  default:
    return false;
  }
  return param_2 == 1;
}


