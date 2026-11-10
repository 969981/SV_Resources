/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0347ddb4; name: FUN_0347ddb4
 */


undefined4 FUN_0347ddb4(int param_1,int param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  
  uVar7 = DAT_048afd68;
  uVar13 = (ulong)DAT_048afd68;
  iVar2 = (param_1 << 4 | 1U) + param_2 * 0x10000;
  piVar8 = DAT_048afd60;
  if ((DAT_048afd68 != 0) && (*DAT_048afd60 != iVar2)) {
    lVar11 = uVar13 * 0x28;
    piVar12 = DAT_048afd60;
    do {
      lVar11 = lVar11 + -0x28;
      if (lVar11 == 0) goto LAB_0347de48;
      piVar8 = piVar12 + 10;
      piVar1 = piVar12 + 10;
      piVar12 = piVar8;
    } while (*piVar1 != iVar2);
  }
  if (piVar8 != DAT_048afd60 + uVar13 * 10) {
    return 2;
  }
LAB_0347de48:
  if ((*param_3 == 0) || (param_3[1] == 0)) {
    return 0x1f;
  }
  piVar8 = DAT_048afd60;
  if ((DAT_048afd68 != 0) && (*DAT_048afd60 != iVar2)) {
    lVar11 = uVar13 * 0x28;
    piVar12 = DAT_048afd60;
    do {
      lVar11 = lVar11 + -0x28;
      if (lVar11 == 0) goto LAB_0347dec8;
      piVar8 = piVar12 + 10;
      piVar1 = piVar12 + 10;
      piVar12 = piVar8;
    } while (*piVar1 != iVar2);
  }
  if (piVar8 != DAT_048afd60 + uVar13 * 10) {
    lVar11 = *param_3;
    lVar5 = param_3[1];
    plVar10 = (long *)(piVar8 + 2);
    lVar6 = param_3[3];
    *(long *)(piVar8 + 6) = param_3[2];
    *(long *)(piVar8 + 8) = lVar6;
    *plVar10 = lVar11;
    *(long *)(piVar8 + 4) = lVar5;
    goto LAB_0347df54;
  }
LAB_0347dec8:
  if (DAT_048afd68 < DAT_048afd6c) {
LAB_0347df10:
    if (uVar7 < DAT_048afd6c) {
      uVar13 = (ulong)DAT_048afd68;
      DAT_048afd68 = DAT_048afd68 + 1;
      if (DAT_048afd60 != (int *)0x0) {
        piVar8 = DAT_048afd60 + uVar13 * 10;
        *piVar8 = iVar2;
        lVar5 = param_3[1];
        lVar11 = param_3[2];
        lVar6 = param_3[3];
        plVar10 = (long *)(piVar8 + 2);
        *plVar10 = *param_3;
        *(long *)(piVar8 + 6) = lVar11;
        *(long *)(piVar8 + 8) = lVar6;
        *(long *)(piVar8 + 4) = lVar5;
        goto LAB_0347df54;
      }
    }
  }
  else {
    iVar3 = DAT_048afd6c + (DAT_048afd6c >> 1);
    if (DAT_048afd6c == 0) {
      iVar3 = 1;
    }
    uVar4 = iVar3 + DAT_048afd6c;
    piVar8 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,DAT_048afd60,(ulong)uVar4 * 0x28);
    if (piVar8 != (int *)0x0) {
      DAT_048afd60 = piVar8;
      DAT_048afd6c = uVar4;
      goto LAB_0347df10;
    }
  }
  plVar10 = (long *)0x0;
LAB_0347df54:
  uVar9 = 1;
  if (plVar10 == (long *)0x0) {
    uVar9 = 2;
  }
  return uVar9;
}


