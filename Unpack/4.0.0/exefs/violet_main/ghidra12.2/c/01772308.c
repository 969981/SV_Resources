/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01772308; name: FUN_01772308
 */


void FUN_01772308(undefined8 *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  
  if (param_2 != 0) {
    iVar13 = *(int *)*param_1;
    if (iVar13 < 1) {
      iVar11 = 0;
    }
    else {
      iVar8 = 0;
      iVar11 = 0;
      uVar7 = 0;
      do {
        iVar16 = (int)uVar7 + (int)(uVar7 / 3) * -3;
        sVar6 = 0;
        if (iVar16 == 0) {
LAB_01772370:
          *(short *)(param_2 + (long)iVar11 * 2) = sVar6;
          iVar11 = iVar11 + 1;
        }
        else {
          if (iVar16 == 1) {
            sVar6 = (short)iVar8 + 1;
            goto LAB_01772370;
          }
          if (iVar16 == 2) {
            uVar9 = iVar8 + 2;
            iVar8 = iVar8 + 1;
            if (iVar13 < (int)uVar9) {
              uVar9 = (uint)*(ushort *)(param_2 + 2);
            }
            sVar6 = (short)uVar9;
            goto LAB_01772370;
          }
        }
        uVar9 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar9;
        iVar13 = *(int *)*param_1;
      } while ((int)uVar9 < iVar13 * 3);
    }
    if (0 < *(int *)param_1[1]) {
      uVar15 = *(int *)param_1[1] * 3;
      uVar3 = *(ushort *)(param_2 + 2);
      uVar9 = (uint)uVar3;
      uVar1 = uVar15;
      if ((int)uVar15 < 2) {
        uVar1 = 1;
      }
      iVar16 = *(int *)*param_1;
      iVar8 = iVar11 + 1;
      *(ushort *)(param_2 + (long)iVar11 * 2) = uVar3;
      iVar11 = iVar8;
      if (1 < (int)uVar15) {
        iVar16 = (uint)uVar3 + iVar16 + -1;
        iVar13 = iVar13 * 6;
        uVar15 = 1;
        iVar8 = 1;
        uVar10 = uVar9;
        do {
          iVar14 = 0;
          if (iVar13 != 0) {
            iVar14 = (int)uVar15 / iVar13;
          }
          if (uVar15 == iVar14 * iVar13) {
            iVar8 = iVar8 + 1;
            iVar16 = uVar9 + *(int *)*param_1 + -1;
            uVar10 = uVar9;
          }
          sVar6 = (short)uVar10;
          sVar4 = (short)uVar9;
          switch(uVar15 % 6) {
          case 0:
          case 3:
            *(short *)(param_2 + (long)iVar11 * 2) = sVar4;
            break;
          case 1:
            sVar6 = (short)*(undefined4 *)*param_1 + sVar4;
            goto LAB_01772480;
          case 2:
          case 4:
            iVar2 = iVar8 * iVar13 + -2;
            iVar14 = 0;
            if (iVar2 != 0) {
              iVar14 = (int)uVar15 / iVar2;
            }
            if (uVar15 != iVar14 * iVar2) {
              iVar2 = iVar8 * iVar13 + -4;
              iVar14 = 0;
              if (iVar2 != 0) {
                iVar14 = (int)uVar15 / iVar2;
              }
              if (uVar15 != iVar14 * iVar2) {
                sVar6 = (short)*(undefined4 *)*param_1 + sVar4 + 1;
                goto LAB_01772480;
              }
            }
            *(short *)(param_2 + (long)iVar11 * 2) = (short)iVar16;
            break;
          case 5:
            iVar2 = iVar8 * iVar13 + -1;
            iVar14 = 0;
            if (iVar2 != 0) {
              iVar14 = (int)uVar15 / iVar2;
            }
            if (uVar15 != iVar14 * iVar2) {
              sVar6 = sVar4 + 1;
            }
            uVar9 = uVar9 + 1;
LAB_01772480:
            *(short *)(param_2 + (long)iVar11 * 2) = sVar6;
            break;
          default:
            goto switchD_01772440_default;
          }
          iVar11 = iVar11 + 1;
switchD_01772440_default:
          uVar15 = uVar15 + 1;
        } while (uVar1 != uVar15);
      }
      iVar13 = *(int *)*param_1;
    }
    if (0 < iVar13) {
      puVar12 = (undefined2 *)(param_2 + (long)iVar11 * 2);
      iVar2 = *(int *)param_1[2];
      iVar11 = iVar2 * iVar13 + 1;
      iVar8 = (iVar11 - iVar13) + 1;
      iVar16 = iVar13 * 3 + 1;
      iVar14 = iVar8;
      do {
        iVar5 = (iVar16 + -2) % 3;
        if (iVar5 == 0) {
          *puVar12 = (short)iVar11;
          iVar14 = iVar14 + 1;
        }
        else if (iVar5 == 1) {
          *puVar12 = (short)iVar14;
        }
        else {
          iVar5 = iVar8;
          if (iVar14 < iVar2 * iVar13) {
            iVar5 = iVar14 + 1;
          }
          *puVar12 = (short)iVar5;
        }
        iVar16 = iVar16 + -1;
        puVar12 = puVar12 + 1;
      } while (1 < iVar16);
    }
  }
  return;
}


