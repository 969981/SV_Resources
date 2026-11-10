/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02751294; name: FUN_02751294
 */


void FUN_02751294(long param_1)

{
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x80));
  FUN_0275414c(param_1 + 8);
  return;
}


