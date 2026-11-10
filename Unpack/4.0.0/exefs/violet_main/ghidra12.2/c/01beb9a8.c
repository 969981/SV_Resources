/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01beb9a8; name: FUN_01beb9a8
 */


bool FUN_01beb9a8(char *param_1)

{
  long lVar1;
  
  lVar1 = -1;
  if (DAT_0480f4c8 != '\0') {
    lVar1 = 1;
  }
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    return *(char *)(*(long *)(param_1 + 8) + lVar1) != '\0';
  }
  return false;
}


