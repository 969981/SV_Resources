/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a7248; name: FUN_024a7248
 */


void FUN_024a7248(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + 0x100);
  if (lVar1 != 0) {
    FUN_024a737c(param_1,lVar1,auStack_28);
    *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) - lVar1;
  }
  return;
}


