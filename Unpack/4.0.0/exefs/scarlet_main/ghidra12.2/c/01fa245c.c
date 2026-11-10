/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fa245c; name: FUN_01fa245c
 */


void FUN_01fa245c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x200);
  *(undefined1 *)(param_1 + 0x250) = 0;
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x40) != '\0') {
      lVar3 = *(long *)(lVar2 + 0x78);
      FUN_00d66fec(lVar3 + 0x170);
      plVar1 = *(long **)(lVar3 + 0x488);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,lVar3 + 0x30);
      }
    }
    *(undefined2 *)(lVar2 + 0x40) = 0x100;
  }
  return;
}


