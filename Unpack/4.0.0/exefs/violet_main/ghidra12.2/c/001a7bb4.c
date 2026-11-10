/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001a7bb4; name: FUN_001a7bb4
 */


void FUN_001a7bb4(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_PTR_047cb898;
  plVar2 = *(long **)(param_1 + 0x50);
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    (**(code **)puVar1)();
  }
  *(long *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xcca;
  return;
}


