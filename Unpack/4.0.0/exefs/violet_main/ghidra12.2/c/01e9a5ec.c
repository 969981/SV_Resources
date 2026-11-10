/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9a5ec; name: FUN_01e9a5ec
 */


undefined8 FUN_01e9a5ec(long param_1)

{
  undefined8 uVar1;
  
  if (((*(char *)(param_1 + 0xc0) == '\0') || (*(long *)(param_1 + 200) == 0)) ||
     (*(char *)(param_1 + 0xd8) == '\0')) {
    uVar1 = 0;
  }
  else {
    FUN_01ea06c8(param_1 + 0xe0);
    uVar1 = 1;
  }
  return uVar1;
}


