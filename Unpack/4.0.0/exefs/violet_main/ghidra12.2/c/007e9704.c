/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e9704; name: FUN_007e9704
 */


void FUN_007e9704(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x78))();
  if ((uVar1 & 1) == 0) {
    FUN_007e9458(param_1);
    return;
  }
  return;
}


