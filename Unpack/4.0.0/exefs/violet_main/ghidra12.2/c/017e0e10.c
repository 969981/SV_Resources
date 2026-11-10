/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e0e10; name: FUN_017e0e10
 */


void FUN_017e0e10(long param_1)

{
  ulong uVar1;
  
  FUN_015c96b8(param_1 + 0x188);
  uVar1 = FUN_015c967c(param_1 + 0x120);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_017e182c(param_1);
  FUN_017e0e58(param_1);
  return;
}


