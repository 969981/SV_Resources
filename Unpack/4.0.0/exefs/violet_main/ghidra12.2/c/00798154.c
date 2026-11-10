/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00798154; name: FUN_00798154
 */


void FUN_00798154(long param_1,long param_2)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x40))
            (*(long **)(param_1 + 8),*(undefined8 *)(param_2 + 8));
  memcpy((void *)(param_1 + 0x10),(void *)(param_2 + 0x10),0x10);
  return;
}


