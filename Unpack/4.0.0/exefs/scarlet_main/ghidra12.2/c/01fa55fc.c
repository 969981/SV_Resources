/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


