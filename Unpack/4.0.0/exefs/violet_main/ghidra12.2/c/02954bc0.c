/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02954bc0; name: FUN_02954bc0
 */


undefined4 FUN_02954bc0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0xb0);
  if (lVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(lVar1 + 0xc);
}


