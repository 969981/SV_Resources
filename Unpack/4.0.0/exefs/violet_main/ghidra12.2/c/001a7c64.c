/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001a7c64; name: FUN_001a7c64
 */


void FUN_001a7c64(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_PTR_047cb898;
  plVar2 = *(long **)(param_1 + 0x400);
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    (**(code **)puVar1)();
  }
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0xff;
  return;
}


