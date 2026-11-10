/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e74c3c; name: FUN_00e74c3c
 */


bool FUN_00e74c3c(long param_1)

{
  if (*(char *)(param_1 + 0x440) == '\x02') {
    return *(short *)(param_1 + 0x420) == 0;
  }
  return false;
}


