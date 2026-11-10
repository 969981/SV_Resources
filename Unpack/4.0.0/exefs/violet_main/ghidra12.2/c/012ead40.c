/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012ead40; name: FUN_012ead40
 */


void FUN_012ead40(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_012eb2b0();
  if (lVar1 != 0) {
    *(ulong *)(lVar1 + 0x1b8) = *(ulong *)(lVar1 + 0x1b8) | 8;
  }
  FUN_012eae40(param_1);
  return;
}


