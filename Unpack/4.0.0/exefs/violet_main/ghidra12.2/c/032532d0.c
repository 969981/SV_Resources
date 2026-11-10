/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032532d0; name: FUN_032532d0
 */


void FUN_032532d0(long param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar16;
  undefined8 uVar15;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar12 = param_1 + -0x10;
  do {
    puVar3 = (undefined8 *)(param_1 + (long)(param_2 + param_3 >> 1) * 0x10);
    uVar18 = puVar3[1];
    uVar14 = *puVar3;
    iVar13 = (int)uVar14;
    iVar17 = (int)uVar18;
    iVar16 = (int)((ulong)uVar14 >> 0x20);
    iVar11 = param_2;
    iVar4 = param_3;
    do {
      if (param_4 == 0) {
        piVar5 = (int *)(lVar12 + (long)iVar11 * 0x10);
        iVar11 = iVar11 + -1;
        do {
          piVar5 = piVar5 + 4;
          iVar11 = iVar11 + 1;
        } while (*piVar5 < iVar13);
      }
      else if (param_4 == 1) {
        lVar1 = (long)iVar11;
        iVar11 = iVar11 + -1;
        piVar7 = (int *)(lVar12 + lVar1 * 0x10);
        do {
          piVar5 = piVar7 + 4;
          piVar9 = piVar7 + 5;
          iVar11 = iVar11 + 1;
          piVar7 = piVar5;
        } while (*piVar9 < iVar16);
      }
      else if (param_4 == 2) {
        lVar1 = (long)iVar11;
        iVar11 = iVar11 + -1;
        piVar7 = (int *)(lVar12 + lVar1 * 0x10);
        do {
          piVar5 = piVar7 + 4;
          piVar9 = piVar7 + 6;
          iVar11 = iVar11 + 1;
          piVar7 = piVar5;
        } while (*piVar9 < iVar17);
      }
      else {
        piVar5 = (int *)(param_1 + (long)iVar11 * 0x10);
      }
      if (param_4 == 0) {
        piVar7 = (int *)(param_1 + 0x10 + (long)iVar4 * 0x10);
        iVar6 = iVar4 + 1;
        do {
          piVar7 = piVar7 + -4;
          iVar6 = iVar6 + -1;
        } while (iVar13 < *piVar7);
      }
      else if (param_4 == 1) {
        iVar6 = iVar4 + 1;
        piVar9 = (int *)(param_1 + 0x10 + (long)iVar4 * 0x10);
        do {
          piVar7 = piVar9 + -4;
          piVar2 = piVar9 + -3;
          iVar6 = iVar6 + -1;
          piVar9 = piVar7;
        } while (iVar16 < *piVar2);
      }
      else {
        iVar8 = iVar4;
        for (piVar7 = (int *)(param_1 + (long)iVar4 * 0x10);
            ((iVar10 = iVar17, param_4 == 2 ||
             (iVar10 = (int)((ulong)uVar18 >> 0x20), iVar6 = iVar4, param_4 == 3)) &&
            (iVar6 = iVar8, iVar10 < piVar7[param_4])); piVar7 = piVar7 + -4) {
          iVar8 = iVar8 + -1;
        }
      }
      if (iVar11 == iVar6 || iVar11 < iVar6) {
        if (iVar11 != iVar6) {
          uVar19 = *(undefined8 *)(piVar7 + 2);
          uVar15 = *(undefined8 *)piVar7;
          uVar14 = *(undefined8 *)(piVar5 + 2);
          *(undefined8 *)piVar7 = *(undefined8 *)piVar5;
          *(undefined8 *)(piVar7 + 2) = uVar14;
          *(undefined8 *)(piVar5 + 2) = uVar19;
          *(undefined8 *)piVar5 = uVar15;
        }
        iVar6 = iVar6 + -1;
        iVar11 = iVar11 + 1;
      }
      iVar4 = iVar6;
    } while (iVar11 <= iVar6);
    if (param_2 < iVar6) {
      FUN_032532d0(param_1,param_2,iVar6,param_4);
    }
    param_2 = iVar11;
  } while (iVar11 < param_3);
  return;
}


