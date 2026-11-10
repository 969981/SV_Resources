/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00133af0; name: FUN_00133af0
 */


void FUN_00133af0(long *param_1,int *param_2)

{
  if (*param_2 == 0x13) {
    *(undefined1 *)(*(long *)(*param_1 + 0x40) + (long)param_2[2] * 4 + 3) = 2;
    *param_2 = 0x11;
  }
  else if (*param_2 == 0x12) {
    *param_2 = 8;
    param_2[2] = *(uint *)(*(long *)(*param_1 + 0x40) + (long)param_2[2] * 4) >> 7 & 0xff;
    return;
  }
  return;
}


