/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea4cbc; name: FUN_01ea4cbc
 */


void FUN_01ea4cbc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    FUN_015bc5f4(lVar1 + -0x80);
    FUN_015bca58(lVar1 + -0x128);
    FUN_01836250(lVar1 + -0x1c8);
    lVar1 = lVar1 + -0x1c8;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


