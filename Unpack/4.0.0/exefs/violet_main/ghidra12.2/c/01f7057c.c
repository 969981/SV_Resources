/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7057c; name: FUN_01f7057c
 */


undefined8 FUN_01f7057c(long *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(*param_1 + 0x60) == 0) {
    return 0;
  }
  uVar1 = FUN_01f65db0(*param_1 + 0x70);
  return uVar1;
}


