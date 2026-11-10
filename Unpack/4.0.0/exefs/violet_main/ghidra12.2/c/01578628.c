/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01578628; name: FUN_01578628
 */


void FUN_01578628(byte *param_1)

{
  size_t sVar1;
  
  for (sVar1 = strlen((char *)param_1); sVar1 != 0; sVar1 = sVar1 - 1) {
    if (*param_1 - 0x41 < 0x1a) {
      *param_1 = *param_1 + 0x20;
    }
    param_1 = param_1 + 1;
  }
  return;
}


