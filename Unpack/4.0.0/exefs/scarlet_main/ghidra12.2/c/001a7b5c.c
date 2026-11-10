/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001a7b5c; name: FUN_001a7b5c
 */


void FUN_001a7b5c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_PTR_047cb898;
  plVar2 = *(long **)(param_1 + 0x28);
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    (**(code **)puVar1)();
  }
  *(long *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x1995;
  return;
}


