/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d50e4; name: FUN_021d50e4
 */


void FUN_021d50e4(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_021d5124();
  if ((uVar1 & 1) == 0) {
    FUN_0112e684(param_1,0);
    return;
  }
  FUN_011e0898(param_1,0);
  return;
}


