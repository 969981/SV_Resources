/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c6f7b4; name: FUN_01c6f7b4
 */


undefined1 FUN_01c6f7b4(short param_1,char param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_016a48e4();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x40);
    lVar1 = *(long *)(lVar1 + 0x48);
    if (lVar2 == lVar1) {
LAB_01c6f818:
      if (lVar2 != lVar1) {
        return *(undefined1 *)(lVar2 + 0x24);
      }
    }
    else {
      do {
        if (((*(short *)(lVar2 + 0x20) == param_1) && (*(char *)(lVar2 + 0x26) == param_2)) &&
           (*(long *)(lVar2 + 0x28) == param_3)) goto LAB_01c6f818;
        lVar2 = lVar2 + 0x40;
      } while (lVar1 != lVar2);
    }
  }
  return 0;
}


