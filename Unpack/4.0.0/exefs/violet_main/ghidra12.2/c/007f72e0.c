/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f72e0; name: FUN_007f72e0
 */


void FUN_007f72e0(long param_1)

{
  long *plVar1;
  undefined1 auStack_20 [16];
  
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (plVar1 = *(long **)(*(long *)(param_1 + 0x70) + 0x10), plVar1 != (long *)0x0)) {
    (**(code **)(**(long **)(*(long *)PTR_DAT_047d0860 + 0x60) + 0x98))();
    (**(code **)(*plVar1 + 0x10))(auStack_20,plVar1);
  }
  return;
}


