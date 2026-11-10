/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029be5c0; name: FUN_029be5c0
 */


undefined8 FUN_029be5c0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  while( true ) {
    if (puVar1 == puVar2) {
      return 1;
    }
    plVar3 = (long *)FUN_00d2b5d0(*(undefined8 *)(param_1 + 0x30),*puVar1);
    if (plVar3 == (long *)0x0) break;
    uVar4 = (**(code **)(*plVar3 + 0x28))();
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    puVar1 = puVar1 + 5;
  }
  return 0;
}


