/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015813cc; name: FUN_015813cc
 */


void FUN_015813cc(long param_1)

{
  if (*(code **)(param_1 + 0x410) != (code *)0x0) {
    (**(code **)(param_1 + 0x410))(param_1 + 0x430,param_1 + 0x360);
  }
  FUN_01581408(param_1);
  FUN_0172bf50(param_1);
  return;
}


