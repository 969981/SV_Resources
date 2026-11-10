/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322bf04; name: FUN_0322bf04
 */


undefined1 FUN_0322bf04(long param_1)

{
  undefined1 uVar1;
  
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x38))();
  }
  return uVar1;
}


