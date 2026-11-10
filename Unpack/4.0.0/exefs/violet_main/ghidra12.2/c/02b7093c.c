/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b7093c; name: FUN_02b7093c
 */


undefined4 FUN_02b7093c(long param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 8) == 0) {
    return 0;
  }
  if (*(short *)(param_1 + 10) == 0) {
    return 1;
  }
  if (*(short *)(param_1 + 0xc) == 0) {
    return 2;
  }
  uVar1 = 3;
  if (*(short *)(param_1 + 0xe) != 0) {
    uVar1 = 4;
  }
  return uVar1;
}


