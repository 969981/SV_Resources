/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017d140c; name: FUN_017d140c
 */


void FUN_017d140c(long param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  if (*(long *)(param_1 + 0xf0) == *(long *)(param_1 + 0xe8)) {
    local_18 = param_2;
    FUN_017d1440((long *)(param_1 + 0xe8),&local_18);
  }
  return;
}


