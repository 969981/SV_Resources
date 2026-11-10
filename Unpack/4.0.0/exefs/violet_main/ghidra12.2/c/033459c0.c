/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033459c0; name: FUN_033459c0
 */


int FUN_033459c0(int param_1,long *param_2,long *param_3,int param_4,long *param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  int local_64;
  
  if (*(int *)(*param_2 + (long)param_1 * 4) == -1) {
    *(undefined4 *)(*param_2 + (long)param_1 * 4) = 0xfffffffe;
    iVar4 = (int)param_5[1];
    uVar8 = (long)iVar4 + 1;
    local_64 = param_1;
    if ((int)(*(uint *)((long)param_5 + 0xc) & 0x7fffffff) <= iVar4) {
      FUN_0133bb88(param_5,PTR_PTR_047d1a50,uVar8);
      iVar4 = (int)param_5[1];
    }
    *(int *)(*param_5 + (long)iVar4 * 4) = param_1;
    *(int *)(param_5 + 1) = (int)uVar8;
    lVar3 = FUN_0334896c(param_3,&local_64);
    puVar2 = PTR_PTR_047d1a50;
    if (lVar3 == 0) {
      uVar7 = 0;
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = *(uint *)(lVar3 + 4);
      uVar7 = ((int)lVar3 - (int)param_3[2]) * 0x20000000;
    }
    if (-1 < (int)(uVar5 | uVar7)) {
      lVar3 = *param_3 + (long)(int)(uVar5 | uVar7) * 0x18;
      iVar4 = *(int *)(lVar3 + 0x10);
      if (iVar4 != 0) {
        piVar9 = *(int **)(lVar3 + 8);
        lVar3 = (long)iVar4 << 2;
        do {
          iVar1 = *piVar9;
          iVar4 = *(int *)(*param_2 + (long)iVar1 * 4);
          if (iVar4 == -2) {
            iVar4 = (int)param_5[1];
            iVar6 = iVar4;
            if ((int)(*(uint *)((long)param_5 + 0xc) & 0x7fffffff) <= iVar4) {
              FUN_0133bb88(param_5,puVar2,(long)iVar4 + 1);
              iVar6 = (int)param_5[1];
            }
            *(int *)(*param_5 + (long)iVar6 * 4) = iVar1;
            *(int *)(param_5 + 1) = iVar4;
          }
          else if (iVar4 == -1) {
            param_4 = FUN_033459c0(iVar1,param_2,param_3,param_4,param_5);
          }
          piVar9 = piVar9 + 1;
          lVar3 = lVar3 + -4;
        } while (lVar3 != 0);
        uVar8 = (ulong)*(uint *)(param_5 + 1);
      }
    }
    *(int *)(param_5 + 1) = (int)uVar8 + -1;
    *(int *)(*param_2 + (long)param_1 * 4) = param_4;
    param_4 = param_4 + 1;
  }
  return param_4;
}


