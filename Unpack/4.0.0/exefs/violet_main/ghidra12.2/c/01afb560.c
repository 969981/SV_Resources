/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01afb560; name: FUN_01afb560
 */


void FUN_01afb560(char *param_1)

{
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    FUN_011e0500(*(undefined8 *)(*(long *)(param_1 + 8) - ((ulong)~(uint)DAT_048024d8 & 1)));
    return;
  }
  FUN_011e0500(0);
  return;
}


