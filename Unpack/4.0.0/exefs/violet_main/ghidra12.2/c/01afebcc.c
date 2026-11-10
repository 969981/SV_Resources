/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01afebcc; name: FUN_01afebcc
 */


bool FUN_01afebcc(char *param_1)

{
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    return *(char *)(*(long *)(param_1 + 8) - ((ulong)~(uint)DAT_04802a58 & 1)) != '\0';
  }
  return false;
}


