/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0055b77c; name: FUN_0055b77c
 */


undefined8 FUN_0055b77c(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0xd8) != 0) {
    uVar1 = 2;
  }
  FUN_005577ac(*(undefined8 *)(param_1 + 200),uVar1);
  return 1;
}


