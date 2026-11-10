/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dd9680; name: FUN_00dd9680
 */


undefined4 FUN_00dd9680(int param_1,uint param_2)

{
  if (param_1 - 1U < 4) {
    return *(undefined4 *)((&PTR_DAT_045d6e40)[(int)(param_1 - 1U)] + (ulong)param_2 * 4);
  }
  return 0;
}


