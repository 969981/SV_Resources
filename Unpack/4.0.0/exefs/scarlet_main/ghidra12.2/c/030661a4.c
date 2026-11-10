/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030661a4; name: FUN_030661a4
 */


void FUN_030661a4(long param_1,int param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  
  *(undefined4 *)(param_3 + 1) = 0;
  plVar9 = (long *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x18);
  uVar3 = *(uint *)(plVar9 + 1);
  lVar6 = 0;
  iVar7 = 1;
  do {
    if ((long)(int)((uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) - 1) * 0x18 + 0x18 == lVar6) {
      return;
    }
    lVar10 = *plVar9;
    lVar8 = lVar10 + lVar6;
    lVar6 = lVar6 + 0x18;
    iVar7 = iVar7 + -1;
  } while (*(float *)(lVar8 + 8) < 0.0);
  if (iVar7 != 1) {
    iVar5 = 0;
    while( true ) {
      iVar11 = -iVar7;
      iVar1 = iVar5 + 1;
      lVar6 = (long)iVar11;
      if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar5) {
        FUN_03066834(param_3,PTR_PTR_047d1a50,(long)iVar1);
        iVar5 = (int)param_3[1];
      }
      piVar2 = (int *)(*param_3 + (long)iVar5 * 0x20);
      lVar8 = lVar10 + lVar6 * 0x18;
      *(int *)(param_3 + 1) = iVar1;
      piVar2[0] = -1;
      piVar2[1] = -1;
      piVar2[2] = -1;
      iVar5 = *(int *)(lVar8 + 0x10);
      *piVar2 = param_2;
      piVar2[1] = iVar11;
      piVar2[2] = iVar5;
      *(undefined8 *)(piVar2 + 4) = *(undefined8 *)(lVar10 + (long)iVar11 * 0x18);
      piVar2[6] = *(int *)(lVar8 + 8);
      lVar8 = lVar6 * 0x18 + 0x20;
      do {
        lVar6 = lVar6 + 1;
        if ((int)*(uint *)(plVar9 + 1) <= lVar6) {
          return;
        }
        lVar10 = *plVar9;
        iVar7 = iVar7 + -1;
        pfVar4 = (float *)(lVar10 + lVar8);
        lVar8 = lVar8 + 0x18;
      } while (*pfVar4 < 0.0);
      if (iVar7 == 1) break;
      iVar5 = (int)param_3[1];
    }
  }
  return;
}


