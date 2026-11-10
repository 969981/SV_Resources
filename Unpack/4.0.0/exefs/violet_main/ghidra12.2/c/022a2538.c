/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022a2538; name: FUN_022a2538
 */


bool FUN_022a2538(char *param_1)

{
  long lVar1;
  
  lVar1 = 0x18;
  if (DAT_04843b08 == '\0') {
    lVar1 = -1;
  }
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    return *(char *)(*(long *)(param_1 + 8) + lVar1) != '\0';
  }
  return false;
}


