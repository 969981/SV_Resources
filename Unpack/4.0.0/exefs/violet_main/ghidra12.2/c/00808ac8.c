/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00808ac8; name: FUN_00808ac8
 */


void FUN_00808ac8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x1418);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    FUN_0080cfe0(*(undefined8 *)(param_1 + 0x1418));
  }
  plVar1 = *(long **)(param_1 + 0x1420);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    FUN_0080e77c(*(undefined8 *)(param_1 + 0x1420));
  }
  FUN_007fd1a0(param_1);
  return;
}


