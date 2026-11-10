/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e1f1dc; name: FUN_01e1f1dc
 */


void FUN_01e1f1dc(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    lVar2 = *(long *)(param_1 + 0x78);
    FUN_00d66fec(lVar2 + 0x170);
    plVar1 = *(long **)(lVar2 + 0x488);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,lVar2 + 0x30);
    }
  }
  *(undefined2 *)(param_1 + 0x40) = 0x100;
  return;
}


