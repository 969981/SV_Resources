/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019bdde4; name: FUN_019bdde4
 */


void FUN_019bdde4(ulong *param_1,long *param_2)

{
  FUN_019bde54();
  if (((((char)param_2[3] == '\0') && ((*param_2 == 0 || (*(short *)(*param_2 + 0x1a) == 0)))) ||
      (param_2[2] == 0)) || (*param_1 <= param_1[6])) {
    return;
  }
  FUN_01a40a28(param_1 + 1,param_2);
  return;
}


