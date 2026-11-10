/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c6f8f4; name: FUN_01c6f8f4
 */


bool FUN_01c6f8f4(short param_1,char param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_016a48e4();
  bVar1 = false;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x40);
    lVar2 = *(long *)(lVar2 + 0x48);
    if (lVar3 != lVar2) {
      do {
        if (((*(short *)(lVar3 + 0x20) == param_1) && (*(char *)(lVar3 + 0x26) == param_2)) &&
           (*(long *)(lVar3 + 0x28) == param_3)) goto LAB_01c6f958;
        lVar3 = lVar3 + 0x40;
      } while (lVar2 != lVar3);
      lVar3 = lVar2;
    }
LAB_01c6f958:
    bVar1 = lVar2 != lVar3;
  }
  return bVar1;
}


