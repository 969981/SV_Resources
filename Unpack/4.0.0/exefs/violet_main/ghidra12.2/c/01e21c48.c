/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e21c48; name: FUN_01e21c48
 */


void FUN_01e21c48(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((param_3 >> (ulong)((uint)lVar1 & 0x1f) & 1) != 0) {
      *(uint *)(param_1 + 0xa0 + lVar1 * 4) = *(uint *)(param_1 + 0xa0 + lVar1 * 4) | param_2;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x20);
  return;
}


