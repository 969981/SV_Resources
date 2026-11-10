/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008bdd9c; name: FUN_008bdd9c
 */


void FUN_008bdd9c(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(param_1 + 0x40);
  if (param_1 + 0x38 != lVar3) {
    iVar4 = 0;
    do {
      lVar1 = *(long *)(param_2 + 0x20);
      if (param_2 + 0x18 == lVar1) {
LAB_008bddd4:
        lVar1 = 0;
      }
      else if (iVar4 != 0) {
        iVar2 = iVar4;
        do {
          lVar1 = *(long *)(lVar1 + 8);
          if (param_2 + 0x18 == lVar1) goto LAB_008bddd4;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_008bd710(param_1,lVar3,lVar1);
      lVar3 = *(long *)(lVar3 + 8);
      iVar4 = iVar4 + 1;
    } while (param_1 + 0x38 != lVar3);
  }
  return;
}


