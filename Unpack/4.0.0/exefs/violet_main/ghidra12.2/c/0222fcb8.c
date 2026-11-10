/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0222fcb8; name: FUN_0222fcb8
 */


void FUN_0222fcb8(undefined4 param_1,long param_2,uint param_3)

{
  if ((-1 < (int)param_3) &&
     ((int)param_3 <
      (int)((ulong)(*(long *)(param_2 + 0x2a8) - *(long *)(param_2 + 0x2a0)) >> 4) * -0x3030303)) {
    *(undefined4 *)(*(long *)(param_2 + 0x2a0) + (ulong)param_3 * 0x550 + 0x58) = param_1;
  }
  return;
}


