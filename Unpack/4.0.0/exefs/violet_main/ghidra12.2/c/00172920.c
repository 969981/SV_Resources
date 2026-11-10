/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00172920; name: FUN_00172920
 */


void FUN_00172920(long param_1)

{
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if ((*(long *)(param_1 + 0x60) != 0) && (*(int *)(param_1 + 0x70) != 0)) {
    (**(code **)PTR_PTR_047cb898)();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(long *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}


