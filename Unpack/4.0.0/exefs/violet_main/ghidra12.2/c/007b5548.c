/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b5548; name: FUN_007b5548
 */


void FUN_007b5548(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x48) = 1;
    FUN_00792f30(lVar1,2);
    FUN_007b5ad8(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x14c) = 0;
  return;
}


