/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dfd4e0; name: FUN_01dfd4e0
 */


undefined1  [16] FUN_01dfd4e0(long param_1,uint param_2)

{
  undefined1 (*pauVar1) [16];
  
  pauVar1 = (undefined1 (*) [16])(param_1 + 0x50);
  if ((param_2 & 1) == 0) {
    pauVar1 = (undefined1 (*) [16])(param_1 + 0x40);
  }
  return *pauVar1;
}


