/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017b6e50; name: FUN_017b6e50
 */


int FUN_017b6e50(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x88);
  if (lVar4 != 0) {
    plVar3 = *(long **)(lVar4 + 0x210);
    if (plVar3 != *(long **)(lVar4 + 0x218)) {
      iVar2 = 0;
      while( true ) {
        plVar1 = (long *)PTR_DAT_047d8b70;
        if (*plVar3 != 0) {
          plVar1 = (long *)(*plVar3 + 0x30);
        }
        if (*plVar1 == *param_2) break;
        plVar3 = plVar3 + 1;
        iVar2 = iVar2 + 1;
        if (*(long **)(lVar4 + 0x218) == plVar3) {
          return -1;
        }
      }
      return iVar2;
    }
  }
  return -1;
}


