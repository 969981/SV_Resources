/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c9634; name: FUN_015c9634
 */


void FUN_015c9634(long param_1)

{
  ulong uVar1;
  
  FUN_015c96b8(param_1 + 0x230);
  uVar1 = FUN_015c967c(param_1 + 0x120);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_015cae6c(param_1);
  FUN_015c99d4(param_1);
  return;
}


