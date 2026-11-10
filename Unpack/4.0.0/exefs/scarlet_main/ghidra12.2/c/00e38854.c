/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e38854; name: FUN_00e38854
 */


undefined8 FUN_00e38854(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x88);
  if (lVar5 != 0) {
    plVar4 = *(long **)(lVar5 + 0x210);
    if (plVar4 != *(long **)(lVar5 + 0x218)) {
      iVar3 = 0;
      do {
        plVar1 = (long *)PTR_DAT_047d8b70;
        if (*plVar4 != 0) {
          plVar1 = (long *)(*plVar4 + 0x30);
        }
        if (*plVar1 == *param_2) {
          uVar2 = FUN_00e388b8(param_1,iVar3);
          return uVar2;
        }
        plVar4 = plVar4 + 1;
        iVar3 = iVar3 + 1;
      } while (*(long **)(lVar5 + 0x218) != plVar4);
    }
  }
  return 0;
}


