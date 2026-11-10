/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001a7ef8; name: FUN_001a7ef8
 */


void FUN_001a7ef8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)PTR_PTR_047cb890)(0x3fe08,0x10);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_0015ed40(0x3fe08);
  }
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *puVar1 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined8 **)(param_1 + 0x1c0) = puVar1;
  return;
}


