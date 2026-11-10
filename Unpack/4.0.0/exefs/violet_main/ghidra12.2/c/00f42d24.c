/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f42d24; name: FUN_00f42d24
 */


undefined8 FUN_00f42d24(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    return 0;
  }
  uVar1 = FUN_014c27b0(param_1 + 0x68);
  return uVar1;
}


