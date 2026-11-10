/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080ef14; name: FUN_0080ef14
 */


uint FUN_0080ef14(long param_1)

{
  uint uVar1;
  
  if ((*(char *)(param_1 + 0xae0) != '\0') || (*(long *)(param_1 + 0xac8) == 0)) {
    return 0;
  }
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return (uVar1 ^ 1) & 1;
}


