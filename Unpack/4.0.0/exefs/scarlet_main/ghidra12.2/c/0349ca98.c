/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0349ca98; name: FUN_0349ca98
 */


int * FUN_0349ca98(long param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  uint uVar13;
  
  puVar4 = PTR_DAT_047e2fd0;
  piVar8 = *(int **)(param_1 + 0xe8);
  uVar7 = *(uint *)(param_1 + 0xf0);
  uVar12 = (ulong)uVar7;
  if ((uVar7 == 0) || (*piVar8 == param_2)) {
    piVar9 = piVar8;
  }
  else {
    lVar10 = uVar12 * 0x18;
    piVar11 = piVar8;
    do {
      lVar10 = lVar10 + -0x18;
      if (lVar10 == 0) goto LAB_0349cb7c;
      piVar9 = piVar11 + 6;
      piVar1 = piVar11 + 6;
      piVar11 = piVar9;
    } while (*piVar1 != param_2);
  }
  if (piVar9 == piVar8 + uVar12 * 6) {
LAB_0349cb7c:
    uVar13 = *(uint *)(param_1 + 0xf4);
    if (uVar13 <= uVar7) {
      iVar5 = uVar13 + (uVar13 >> 1);
      if (uVar13 == 0) {
        iVar5 = 1;
      }
      uVar13 = iVar5 + uVar13;
      lVar10 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)uVar13 * 0x18);
      if (lVar10 == 0) {
        return (int *)0x0;
      }
      lVar6 = *(long *)(param_1 + 0xe8);
      if ((lVar6 != 0) && (lVar6 != lVar10)) {
        if (uVar7 != 0) {
          lVar6 = 0;
          do {
            puVar2 = (undefined4 *)(lVar10 + lVar6);
            *(undefined8 *)(puVar2 + 2) = 0;
            *(undefined8 *)(puVar2 + 4) = 0;
            puVar3 = (undefined4 *)(*(long *)(param_1 + 0xe8) + lVar6);
            lVar6 = lVar6 + 0x18;
            *puVar2 = *puVar3;
            *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar3 + 2);
            puVar2[4] = puVar3[4];
            puVar2[5] = puVar3[5];
            *(undefined8 *)(puVar3 + 2) = 0;
            *(undefined8 *)(puVar3 + 4) = 0;
          } while (uVar12 * 0x18 != lVar6);
          lVar6 = *(long *)(param_1 + 0xe8);
        }
        (**(code **)(puVar4 + 0x30))(0,lVar6);
      }
      *(long *)(param_1 + 0xe8) = lVar10;
      *(uint *)(param_1 + 0xf4) = uVar13;
    }
    if (uVar13 <= uVar7) {
      return (int *)0x0;
    }
    uVar7 = *(uint *)(param_1 + 0xf0);
    *(uint *)(param_1 + 0xf0) = uVar7 + 1;
    if (*(long *)(param_1 + 0xe8) == 0) {
      return (int *)0x0;
    }
    piVar8 = (int *)(*(long *)(param_1 + 0xe8) + (ulong)uVar7 * 0x18);
    piVar9 = piVar8 + 2;
    piVar9[0] = 0;
    piVar9[1] = 0;
    piVar8[4] = 0;
    piVar8[5] = 0;
    *piVar8 = param_2;
  }
  else {
    piVar9 = piVar9 + 2;
  }
  iVar5 = FUN_034ce1bc(*(undefined4 *)(param_1 + 0x74),param_2,piVar9);
  puVar4 = PTR_DAT_047e2fd0;
  if (iVar5 == 1) {
    return piVar9;
  }
  piVar8 = *(int **)(param_1 + 0xe8);
  uVar7 = *(uint *)(param_1 + 0xf0);
  piVar9 = piVar8 + (ulong)uVar7 * 6;
  if ((uVar7 != 0) && (*piVar8 != param_2)) {
    lVar10 = (ulong)uVar7 * 0x18;
    do {
      lVar10 = lVar10 + -0x18;
      if (lVar10 == 0) {
        piVar8 = piVar9;
        goto LAB_0349cc70;
      }
      piVar11 = piVar8 + 6;
      piVar8 = piVar8 + 6;
    } while (*piVar11 != param_2);
  }
LAB_0349cc70:
  if (piVar9 == piVar8) {
    return (int *)0x0;
  }
  if (piVar8 < piVar9 + -6) {
    do {
      piVar11 = piVar8 + 6;
      *piVar8 = *piVar11;
      if (*(long *)(piVar8 + 2) != 0) {
        piVar8[4] = 0;
        (**(code **)(puVar4 + 0x30))(0);
        piVar8[2] = 0;
        piVar8[3] = 0;
        piVar8[5] = 0;
      }
      piVar8[4] = piVar8[10];
      piVar8[5] = piVar8[0xb];
      *(undefined8 *)(piVar8 + 2) = *(undefined8 *)(piVar8 + 8);
      piVar8[8] = 0;
      piVar8[9] = 0;
      piVar8[10] = 0;
      piVar8[0xb] = 0;
      piVar8 = piVar11;
    } while (piVar11 < piVar9 + -6);
    uVar7 = *(uint *)(param_1 + 0xf0);
  }
  *(uint *)(param_1 + 0xf0) = uVar7 - 1;
  return (int *)0x0;
}


