/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001a7e30; name: FUN_001a7e30
 */


void FUN_001a7e30(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)PTR_PTR_047cb890)(0x3ff50,0x10);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_0015ed40(0x3ff50);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *puVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x28) = puVar1;
  return;
}


