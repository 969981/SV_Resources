/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029cacf8; name: FUN_029cacf8
 */


void FUN_029cacf8(long param_1)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x30); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    *(undefined1 *)((long)plVar1 + 0x84) = 0;
  }
  return;
}


