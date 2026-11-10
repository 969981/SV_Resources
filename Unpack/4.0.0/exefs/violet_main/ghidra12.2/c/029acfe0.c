/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029acfe0; name: FUN_029acfe0
 */


undefined8 FUN_029acfe0(uint param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  if ((param_1 < DAT_048af950) &&
     (plVar2 = *(long **)(DAT_048af948 + (ulong)param_1 * 8), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2);
    uVar1 = 1;
    *(undefined8 *)(DAT_048af948 + (ulong)param_1 * 8) = 0;
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}


