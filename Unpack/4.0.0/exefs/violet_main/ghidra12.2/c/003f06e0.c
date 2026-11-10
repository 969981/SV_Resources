/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f06e0; name: FUN_003f06e0
 */


undefined8 FUN_003f06e0(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  
  uVar14 = *(uint *)(param_2 + 2);
  if (uVar14 == *(uint *)(param_3 + 2)) {
    iVar6 = FUN_003ebf10(param_2,param_3);
    if (0 < iVar6) {
      uVar14 = *(uint *)(param_2 + 2);
      uVar8 = FUN_003f05a0(param_1,param_2,param_3);
      goto LAB_003f0830;
    }
    if (iVar6 < 0) {
      uVar14 = (uint)((int)param_3[2] == 0);
      uVar8 = FUN_003f05a0(param_1,param_3,param_2);
      goto LAB_003f0830;
    }
    FUN_003eb9f0(param_1,0);
    uVar14 = 0;
  }
  else {
    plVar3 = param_3;
    if ((int)param_3[1] <= (int)param_2[1]) {
      plVar3 = param_2;
      param_2 = param_3;
    }
    iVar6 = (int)plVar3[1];
    iVar5 = (int)param_2[1];
    lVar9 = FUN_003eb9a0(param_1,iVar6 + 1);
    uVar8 = 0;
    if (lVar9 == 0) goto LAB_003f0830;
    *(int *)(param_1 + 1) = iVar6;
    lVar9 = *plVar3;
    lVar13 = *param_1;
    iVar15 = iVar6 - iVar5;
    uVar7 = FUN_003ee580(lVar13,lVar9,*param_2,iVar5);
    puVar11 = (uint *)(lVar13 + (long)iVar5 * 4);
    if (iVar15 != 0) {
      piVar2 = (int *)(lVar9 + (long)iVar5 * 4);
      piVar12 = piVar2;
      if ((iVar6 - iVar5 & 1U) != 0) {
        piVar12 = piVar2 + 1;
        iVar4 = *piVar2;
        *puVar11 = iVar4 + uVar7;
        iVar15 = iVar15 + -1;
        uVar7 = uVar7 & iVar4 + uVar7 == 0;
        puVar11 = puVar11 + 1;
      }
      puVar10 = puVar11;
      if (iVar6 != iVar5 + 1) {
        do {
          iVar6 = *piVar12;
          *puVar10 = iVar6 + uVar7;
          uVar7 = uVar7 & iVar6 + uVar7 == 0;
          uVar1 = piVar12[1] + uVar7;
          puVar11 = puVar10 + 2;
          iVar15 = iVar15 + -2;
          piVar12 = piVar12 + 2;
          uVar7 = uVar7 & uVar1 == 0;
          puVar10[1] = uVar1;
          puVar10 = puVar11;
        } while (iVar15 != 0);
      }
    }
    *puVar11 = uVar7;
    *(uint *)(param_1 + 1) = (int)param_1[1] + uVar7;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  uVar8 = 1;
LAB_003f0830:
  *(uint *)(param_1 + 2) = uVar14;
  return uVar8;
}


