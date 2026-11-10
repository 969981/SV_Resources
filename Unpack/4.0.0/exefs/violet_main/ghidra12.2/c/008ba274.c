/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ba274; name: FUN_008ba274
 */


void FUN_008ba274(long *param_1,long param_2)

{
  FUN_008a5dd0();
  *param_1 = (long)(PTR_DAT_047d24b0 + 0x10);
  *(undefined4 *)((long)param_1 + 0xd4) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x58);
  *(undefined1 *)((long)param_1 + 0xdc) = *(undefined1 *)(param_2 + 0x5c);
  *(undefined1 *)((long)param_1 + 0xdd) = 0;
  *(byte *)((long)param_1 + 0xdd) = (*(byte *)(param_2 + 0x5d) & 1) << 1 | 1;
  return;
}


