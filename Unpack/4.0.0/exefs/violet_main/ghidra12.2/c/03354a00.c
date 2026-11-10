/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03354a00; name: FUN_03354a00
 */


int FUN_03354a00(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_047d1a50;
  if (*(int *)(param_1 + 0x138) == 0) {
    iVar5 = 0;
  }
  else {
    plVar6 = *(long **)(param_1 + 0x130);
    iVar5 = 0;
    lVar7 = (long)*(int *)(param_1 + 0x138) << 3;
    do {
      lVar8 = *plVar6;
      lVar2 = *(long *)(lVar8 + 0x50);
      if (lVar2 != 0) {
        iVar3 = (int)param_2[1];
        lVar4 = (long)iVar3;
        if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar3) {
          FUN_031bc928(param_2,puVar1,lVar4 + 1);
          iVar3 = (int)param_2[1];
          lVar2 = *(long *)(lVar8 + 0x50);
        }
        iVar5 = iVar5 + 1;
        *(long *)(*param_2 + (long)iVar3 * 8) = lVar2;
        *(int *)(param_2 + 1) = (int)(lVar4 + 1);
      }
      plVar6 = plVar6 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  return iVar5;
}


