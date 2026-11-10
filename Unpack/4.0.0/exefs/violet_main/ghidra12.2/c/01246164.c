/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01246164; name: FUN_01246164
 */


void FUN_01246164(long param_1,void *param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 0x2420);
  if (((ulong)*pbVar1 < 0x42) && (*(int *)((long)param_2 + 4) != 0)) {
    memcpy((void *)(param_1 + (ulong)*pbVar1 * 0x8c + 8),param_2,0x8c);
    *pbVar1 = *pbVar1 + 1;
  }
  return;
}


