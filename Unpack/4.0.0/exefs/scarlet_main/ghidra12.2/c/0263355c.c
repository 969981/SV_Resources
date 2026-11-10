/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0263355c; name: FUN_0263355c
 */


bool FUN_0263355c(undefined1 *param_1)

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


