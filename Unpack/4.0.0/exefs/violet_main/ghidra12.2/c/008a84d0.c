/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a84d0; name: FUN_008a84d0
 */


long FUN_008a84d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if (*(int *)(param_1 + 0x60) == 0) {
      return lVar1 + 0xc;
    }
    if (*(short *)(lVar1 + 8) != 1) {
      return lVar1 + 0x18;
    }
  }
  return 0;
}


