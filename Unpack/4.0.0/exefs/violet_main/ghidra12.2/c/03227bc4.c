/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03227bc4; name: FUN_03227bc4
 */


void FUN_03227bc4(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_2 + 0x28) = 0;
  plVar1 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x40))();
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x58))();
    *(undefined8 *)(param_2 + 0x28) = uVar2;
  }
  return;
}


