/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014608b0; name: FUN_014608b0
 */


void FUN_014608b0(long param_1,long param_2)

{
  if ((param_2 == 0) || (*(char *)(param_2 + 0x44) == '\0')) {
    return;
  }
  if (*(char *)(param_2 + 0x3f) == '\0') {
    FUN_014608e0(*(undefined8 *)(*(long *)(param_1 + 8) + 0xd0));
    return;
  }
  FUN_01460cdc(param_2,1);
  return;
}


