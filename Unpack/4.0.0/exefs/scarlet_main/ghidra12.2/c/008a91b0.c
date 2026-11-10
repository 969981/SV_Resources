/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a91b0; name: FUN_008a91b0
 */


void FUN_008a91b0(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  FUN_00896e98(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar1 = *(long **)(param_1 + 0x20);
  while ((long *)(param_1 + 0x18) != plVar1) {
    plVar4 = (long *)plVar1[1];
    if ((long *)(param_1 + 0x18) != plVar1) {
      lVar2 = *plVar4;
      *(long **)(*plVar1 + 8) = plVar4;
      *plVar4 = *plVar1;
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
    }
    iVar3 = (int)plVar1[2];
    lVar2 = plVar1[3];
    if (0 < iVar3) {
      lVar5 = 0;
      lVar6 = 8;
      do {
        if (*(long *)(lVar2 + lVar6) != 0) {
          FUN_00896e98(*(long *)(lVar2 + lVar6));
          iVar3 = (int)plVar1[2];
          lVar2 = plVar1[3];
        }
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 0x10;
      } while (lVar5 < iVar3);
    }
    if (lVar2 != 0) {
      FUN_00896e98();
    }
    FUN_00896e98(plVar1);
    plVar1 = plVar4;
  }
  return;
}


