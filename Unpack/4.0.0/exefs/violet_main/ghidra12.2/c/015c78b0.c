/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c78b0; name: FUN_015c78b0
 */


undefined4 FUN_015c78b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0xe0);
  if (lVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(lVar1 + 0xc);
}


