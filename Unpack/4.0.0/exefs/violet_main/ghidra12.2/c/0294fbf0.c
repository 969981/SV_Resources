/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294fbf0; name: FUN_0294fbf0
 */


undefined4 FUN_0294fbf0(byte param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = 3;
  }
  if (param_1 == 7) {
    uVar2 = 1;
  }
  uVar1 = 2;
  if (param_1 < 8) {
    uVar1 = uVar2;
  }
  return uVar1;
}


