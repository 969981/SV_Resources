/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025325ac; name: FUN_025325ac
 */


bool FUN_025325ac(char *param_1)

{
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    return *(char *)(*(long *)(param_1 + 8) - ((ulong)~(uint)DAT_04850a18 & 1)) != '\0';
  }
  return false;
}


