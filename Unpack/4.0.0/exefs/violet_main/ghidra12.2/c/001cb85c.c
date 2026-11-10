/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001cb85c; name: FUN_001cb85c
 */


void FUN_001cb85c(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  FUN_001cb8ac();
  while (lVar1 = *(long *)(param_1 + 0x10), lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
    FUN_001cb790(lVar1);
    FUN_001ec308(lVar1);
  }
  FUN_001ec308(param_1);
  return;
}


