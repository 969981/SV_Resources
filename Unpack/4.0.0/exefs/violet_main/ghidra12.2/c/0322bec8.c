/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322bec8; name: FUN_0322bec8
 */


undefined1 FUN_0322bec8(long param_1)

{
  undefined1 uVar1;
  
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    uVar1 = *(long *)(param_1 + 0x28) != *(long *)(param_1 + 0x30);
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  }
  return uVar1;
}


