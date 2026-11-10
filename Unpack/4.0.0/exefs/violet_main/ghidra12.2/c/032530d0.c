/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032530d0; name: FUN_032530d0
 */


void FUN_032530d0(long param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  int iVar18;
  undefined8 uVar17;
  
  lVar11 = param_1 + -0x10;
  do {
    puVar3 = (undefined8 *)(param_1 + (long)(param_2 + param_3 >> 1) * 0x10);
    uVar16 = puVar3[1];
    uVar13 = *puVar3;
    iVar12 = (int)uVar13;
    iVar18 = (int)((ulong)uVar16 >> 0x20);
    iVar15 = (int)uVar16;
    iVar14 = (int)((ulong)uVar13 >> 0x20);
    iVar9 = param_2;
    iVar4 = param_3;
    do {
      if (param_4 == 0) {
        piVar5 = (int *)(lVar11 + (long)iVar9 * 0x10);
        iVar9 = iVar9 + -1;
        do {
          piVar5 = piVar5 + 4;
          iVar9 = iVar9 + 1;
        } while (*piVar5 < iVar12);
LAB_032531a8:
        if (param_4 == 0) {
          iVar10 = iVar4 + 1;
          piVar6 = (int *)(param_1 + 0x10 + (long)iVar4 * 0x10);
          do {
            piVar6 = piVar6 + -4;
            iVar10 = iVar10 + -1;
          } while (iVar12 < *piVar6);
        }
        else {
          if (param_4 != 1) goto LAB_0325322c;
          iVar10 = iVar4 + 1;
          piVar6 = (int *)(param_1 + 0x10 + (long)iVar4 * 0x10);
          do {
            piVar2 = piVar6 + -3;
            piVar6 = piVar6 + -4;
            iVar10 = iVar10 + -1;
          } while (iVar14 < *piVar2);
        }
      }
      else {
        if (param_4 == 1) {
          lVar1 = (long)iVar9;
          iVar9 = iVar9 + -1;
          piVar6 = (int *)(lVar11 + lVar1 * 0x10);
          do {
            piVar5 = piVar6 + 4;
            piVar2 = piVar6 + 5;
            iVar9 = iVar9 + 1;
            piVar6 = piVar5;
          } while (*piVar2 < iVar14);
          goto LAB_032531a8;
        }
        if (param_4 == 2) {
          lVar1 = (long)iVar9;
          iVar9 = iVar9 + -1;
          piVar6 = (int *)(lVar11 + lVar1 * 0x10);
          do {
            piVar5 = piVar6 + 4;
            piVar2 = piVar6 + 6;
            iVar9 = iVar9 + 1;
            piVar6 = piVar5;
          } while (*piVar2 < iVar15);
          goto LAB_032531a8;
        }
        iVar10 = iVar9 + -1;
        piVar6 = (int *)(param_1 + (long)iVar9 * 0x10);
        do {
          piVar5 = piVar6;
          if (param_4 != 3) goto LAB_032531a8;
          iVar10 = iVar10 + 1;
          piVar6 = piVar5 + 4;
        } while (piVar5[3] < iVar18);
        iVar9 = iVar10;
LAB_0325322c:
        iVar7 = iVar4;
        for (piVar6 = (int *)(param_1 + (long)iVar4 * 0x10);
            ((iVar8 = iVar15, param_4 == 2 || (iVar8 = iVar18, iVar10 = iVar4, param_4 == 3)) &&
            (iVar10 = iVar7, iVar8 < piVar6[param_4])); piVar6 = piVar6 + -4) {
          iVar7 = iVar7 + -1;
        }
      }
      iVar4 = iVar10;
      if (iVar9 == iVar4 || iVar9 < iVar4) {
        if (iVar9 != iVar4) {
          uVar17 = *(undefined8 *)(piVar6 + 2);
          uVar16 = *(undefined8 *)piVar6;
          uVar13 = *(undefined8 *)(piVar5 + 2);
          *(undefined8 *)piVar6 = *(undefined8 *)piVar5;
          *(undefined8 *)(piVar6 + 2) = uVar13;
          *(undefined8 *)(piVar5 + 2) = uVar17;
          *(undefined8 *)piVar5 = uVar16;
        }
        iVar4 = iVar4 + -1;
        iVar9 = iVar9 + 1;
      }
    } while (iVar9 <= iVar4);
    if (param_2 < iVar4) {
      FUN_032530d0(param_1,param_2,iVar4,param_4);
    }
    param_2 = iVar9;
    if (param_3 <= iVar9) {
      return;
    }
  } while( true );
}


