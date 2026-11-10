/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00122420; name: FUN_00122420
 */


void FUN_00122420(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_0012dc70(param_2,*(undefined8 *)(param_1 + 0x10));
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  }
  return;
}


