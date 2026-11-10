/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c8938; name: FUN_001c8938
 */


void FUN_001c8938(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x18) != 0) {
    (**(code **)(param_1 + 0x18))();
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  FUN_001ec308(param_2);
  return;
}


