/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d2d40; name: FUN_007d2d40
 */


void FUN_007d2d40(long param_1,uint param_2,undefined8 param_3)

{
  if ((-1 < (int)param_2) && ((int)param_2 < (int)(uint)*(ushort *)(param_1 + 10))) {
    *(undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 8) = param_3;
  }
  return;
}


