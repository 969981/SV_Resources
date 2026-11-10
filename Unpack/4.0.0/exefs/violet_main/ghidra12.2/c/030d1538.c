/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d1538; name: FUN_030d1538
 */


void FUN_030d1538(long param_1,uint param_2,int param_3,int param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  
  iVar5 = (int)param_5[1];
  if (iVar5 < param_3) {
    iVar2 = *(int *)(param_1 + 0x20);
    iVar3 = iVar5;
    if (0 < iVar2) {
      lVar6 = 0;
      do {
        lVar1 = *(long *)(*(long *)(param_1 + 0x18) + lVar6 * 8);
        if ((lVar1 != 0) && ((param_2 >> (ulong)((uint)lVar6 & 0x1f) & 1) != 0)) {
          FUN_030cff68(lVar1,param_3);
          iVar2 = *(int *)(param_1 + 0x20);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar2);
      iVar3 = (int)param_5[1];
    }
    iVar2 = (iVar3 - iVar5) + -1;
    if (iVar2 != 0 && 0 < iVar3 - iVar5) {
      FUN_030d2cc0(*param_5 + (long)iVar5 * 0x10,0,iVar2);
      iVar3 = (int)param_5[1];
    }
    if (param_3 < iVar3) {
      lVar6 = (long)param_3;
      piVar4 = (int *)(*param_5 + (long)param_3 * 0x10 + 0xc);
      do {
        if (*piVar4 < param_4) {
          iVar5 = (int)lVar6;
          if ((int)(*(uint *)((long)param_5 + 0xc) & 0x7fffffff) < iVar5) {
            FUN_030d252c(param_5,PTR_PTR_047d1a50,lVar6);
            iVar3 = (int)param_5[1];
          }
          if ((iVar3 < iVar5) || (iVar5 < iVar3)) {
            *(int *)(param_5 + 1) = iVar5;
            return;
          }
          return;
        }
        lVar6 = lVar6 + 1;
        piVar4 = piVar4 + 4;
      } while (iVar3 != lVar6);
    }
  }
  return;
}


