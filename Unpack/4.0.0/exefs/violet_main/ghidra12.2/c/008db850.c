/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008db850; name: FUN_008db850
 */


void FUN_008db850(long param_1,long param_2)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}


