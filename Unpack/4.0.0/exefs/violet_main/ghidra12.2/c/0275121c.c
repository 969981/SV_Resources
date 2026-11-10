/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0275121c; name: FUN_0275121c
 */


void FUN_0275121c(long param_1)

{
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x80));
  FUN_027542e8(param_1 + 8);
  return;
}


