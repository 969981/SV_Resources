/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d71d0; name: FUN_007d71d0
 */


void FUN_007d71d0(long param_1,uint param_2)

{
  if ((param_2 & 0xff) < (uint)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50)) {
    *(undefined1 *)(*(long *)(param_1 + 0x788) + ((ulong)param_2 & 0xff)) = 1;
  }
  return;
}


