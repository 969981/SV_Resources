/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a37a94; name: FUN_00a37a94
 */


void FUN_00a37a94(long param_1,int param_2,byte param_3)

{
  *(byte *)(*(long *)(param_1 + 0x40) + (long)param_2 * 0x44 + 0xe0) = param_3 & 1;
  return;
}


