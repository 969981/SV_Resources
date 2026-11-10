/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02477b3c; name: FUN_02477b3c
 */


bool FUN_02477b3c(char *param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  if (DAT_0484c078 == '\0') {
    lVar1 = -1;
  }
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    return *(char *)(*(long *)(param_1 + 8) + lVar1) != '\0';
  }
  return false;
}


