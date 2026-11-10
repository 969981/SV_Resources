/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00811800; name: FUN_00811800
 */


undefined8 FUN_00811800(long param_1)

{
  ulong uVar1;
  
  do {
    if (*(int *)(param_1 + 0x40) == 0) {
      return 1;
    }
    uVar1 = FUN_00811834(param_1);
  } while ((uVar1 & 1) != 0);
  return 0;
}


