/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a48df4; name: FUN_01a48df4
 */


void FUN_01a48df4(long param_1)

{
  undefined8 local_8;
  
  if (*(long **)(param_1 + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x100) + 0x70))();
    local_8 = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x100) = 0;
    FUN_019dde4c(&local_8);
  }
  return;
}


