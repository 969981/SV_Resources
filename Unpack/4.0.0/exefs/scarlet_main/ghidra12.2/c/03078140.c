/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03078140; name: FUN_03078140
 */


void FUN_03078140(long param_1,int param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  iVar3 = *(int *)PTR_DAT_047e4f38;
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x1000b8);
  if (lVar4 == 0) {
    lVar4 = FUN_00e5d3b4();
    *(long *)(lVar2 + 0x1000b8) = lVar4;
  }
  if (*(long *)(lVar4 + (long)iVar3 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  *(undefined4 *)(param_3 + 1) = 0;
  fVar7 = *(float *)(param_1 + 0x18);
  fVar8 = *(float *)(param_1 + 0x1c);
  if (((fVar8 + 0.001 < fVar7) && (0 < param_2)) &&
     (*(int *)(param_1 + 0x70) < *(int *)(param_1 + 0x30))) {
    iVar3 = 0;
    uVar6 = 0;
    lVar4 = (long)*(int *)(param_1 + 0x70);
    while( true ) {
      if ((fVar8 + 0.001 < fVar7) && (*(int *)(*(long *)(param_1 + 0x28) + lVar4 * 4) == -1)) {
        iVar1 = iVar3 + 1;
        if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar3) {
          FUN_03078498(param_3,PTR_PTR_047d1a50,(long)iVar1);
          iVar3 = (int)param_3[1];
        }
        *(int *)(*param_3 + (long)iVar3 * 4) = (int)lVar4;
        *(int *)(param_3 + 1) = iVar1;
        iVar3 = iVar1;
      }
      if (0xffec56d5 < uVar6) {
        iVar3 = *(int *)PTR_DAT_047e4f38;
        lVar5 = *(long *)(lVar2 + 0x1000b8);
        if (lVar5 == 0) {
          lVar5 = FUN_00e5d3b4();
          *(long *)(lVar2 + 0x1000b8) = lVar5;
        }
        if (*(long *)(lVar5 + (long)iVar3 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        iVar3 = (int)param_3[1];
      }
      if ((param_2 <= iVar3) || (lVar4 = lVar4 + 1, *(int *)(param_1 + 0x30) <= lVar4)) break;
      fVar7 = *(float *)(param_1 + 0x18);
      fVar8 = *(float *)(param_1 + 0x1c);
      uVar6 = uVar6 + 0x13a92a;
    }
  }
  return;
}


