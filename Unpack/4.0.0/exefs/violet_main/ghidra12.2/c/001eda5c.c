/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001eda5c; name: FUN_001eda5c
 */


void FUN_001eda5c(long param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) < 1) {
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 4) < 0x101) {
      return;
    }
    uVar1 = 0x100;
  }
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}


