/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019b12e4; name: FUN_019b12e4
 */


bool FUN_019b12e4(long *param_1,char *param_2)

{
  if (((*param_2 == '\x01') || (*param_2 == '\0')) && (*(long *)(param_2 + 8) != 0)) {
    return *(char *)(*(long *)(param_2 + 8) + *param_1) != '\0';
  }
  return false;
}


