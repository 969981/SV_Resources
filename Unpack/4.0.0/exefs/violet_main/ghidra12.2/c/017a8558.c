/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a8558; name: FUN_017a8558
 */


void FUN_017a8558(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x3ac) = param_2 & 1;
  return;
}


