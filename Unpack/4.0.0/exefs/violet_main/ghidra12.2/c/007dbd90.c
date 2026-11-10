/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007dbd90; name: FUN_007dbd90
 */


void FUN_007dbd90(long param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  piVar1 = (int *)(param_1 + 0x78);
  if (*piVar1 == 1) {
    FUN_0078cc00(piVar1);
  }
  FUN_0078cac8(piVar1);
  return;
}


