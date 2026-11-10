/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020a6424; name: FUN_020a6424
 */


undefined4 FUN_020a6424(undefined8 param_1,int param_2)

{
  if (param_2 - 1U < 9) {
    return *(undefined4 *)(&DAT_03d30650 + (long)(int)(param_2 - 1U) * 4);
  }
  return 0;
}


