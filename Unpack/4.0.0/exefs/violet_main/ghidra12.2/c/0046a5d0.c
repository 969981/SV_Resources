/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0046a5d0; name: FUN_0046a5d0
 */


undefined4 FUN_0046a5d0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x400) {
    return 2;
  }
  if (param_1 < 0x1000) {
    return 3;
  }
  uVar1 = 4;
  if (0x1fff < param_1) {
    uVar1 = 5;
  }
  return uVar1;
}


