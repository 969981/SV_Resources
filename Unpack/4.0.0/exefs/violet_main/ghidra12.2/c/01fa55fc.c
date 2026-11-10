/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fa55fc; name: FUN_01fa55fc
 */


void FUN_01fa55fc(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x158);
  plVar2 = *(long **)(param_1 + 0x160);
  *(undefined1 *)(param_1 + 0x100) = 0;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 4) {
    if (*(char *)(*(long *)(*plVar1 + 0x10) + 0x430) != '\0') {
      FUN_00f740a4();
    }
  }
  return;
}


