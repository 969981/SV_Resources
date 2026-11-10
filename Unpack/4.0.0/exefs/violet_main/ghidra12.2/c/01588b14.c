/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01588b14; name: FUN_01588b14
 */


void FUN_01588b14(long param_1)

{
  if (*(code **)(param_1 + 0x410) != (code *)0x0) {
    (**(code **)(param_1 + 0x410))(param_1 + 0x430,param_1 + 0x360);
  }
  FUN_01588b50(param_1);
  FUN_0172bf50(param_1);
  return;
}


