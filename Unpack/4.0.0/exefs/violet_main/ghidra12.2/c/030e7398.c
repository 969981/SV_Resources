/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030e7398; name: FUN_030e7398
 */


void FUN_030e7398(long param_1,long param_2,uint *param_3,long *param_4)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  undefined1 uVar19;
  uint uVar20;
  int *piVar21;
  long lVar22;
  long lVar23;
  short sVar24;
  uint local_68 [2];
  
  piVar21 = (int *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)(int)*param_3 * 0x10);
  sVar10 = (short)piVar21[2];
  sVar24 = *(short *)((long)piVar21 + 10);
  iVar3 = (int)sVar24 + (int)sVar10;
  if (0 < iVar3) {
    iVar14 = (int)sVar10;
    uVar20 = 0;
    do {
      if ((int)uVar20 < (int)sVar10) {
        iVar11 = *piVar21;
      }
      else {
        iVar11 = piVar21[1] - (int)sVar10;
      }
      lVar17 = *(long *)(*(long *)(param_1 + 8) + 0x28);
      iVar6 = *(int *)(lVar17 + (long)(int)(iVar11 + uVar20) * 0x14 + 8);
      if (iVar6 != -1) {
        uVar12 = *(uint *)(lVar17 + (long)(int)(iVar11 + uVar20) * 0x14 + 0xc);
        lVar17 = *(long *)(*(long *)(param_1 + 8) + 0x18);
        piVar1 = (int *)(lVar17 + (long)(int)uVar12 * 0x10);
        uVar18 = (uint)(short)piVar1[2];
        uVar15 = iVar6 - *piVar1;
        if (uVar18 <= (uint)(iVar6 - *piVar1)) {
          uVar15 = uVar18 + (iVar6 - piVar1[1]);
        }
        uVar18 = *param_3;
        if (uVar12 == uVar18) {
          if ((uVar15 & 0xffff) <= (uVar20 & 0xffff)) goto LAB_030e760c;
          iVar11 = (int)param_4[1];
          lVar17 = (long)iVar11 + 1;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar11) {
            FUN_030e84cc(param_4,lVar17);
            iVar11 = (int)param_4[1];
          }
          puVar13 = (uint *)(*param_4 + (long)iVar11 * 0x10);
          *puVar13 = uVar12;
          puVar13[1] = uVar12;
          *(short *)(puVar13 + 2) = (short)uVar20;
          *(short *)((long)puVar13 + 10) = (short)uVar15;
          *(undefined1 *)(puVar13 + 3) = 2;
        }
        else {
          uVar7 = uVar12;
          uVar8 = uVar18;
          if ((int)uVar12 <= (int)uVar18) {
            uVar7 = uVar18;
            uVar8 = uVar12;
          }
          uVar5 = uVar15;
          uVar9 = uVar20;
          if ((int)uVar12 <= (int)uVar18) {
            uVar5 = uVar20;
            uVar9 = uVar15;
          }
          if ((*(uint *)(*(long *)(param_2 + 8) + (ulong)(uVar20 >> 5) * 4) >>
               (ulong)(uVar20 & 0x1f) & 1) == 0) {
            local_68[0] = uVar12;
            if ((int)*(short *)(lVar17 + (long)(int)uVar12 * 0x10 + 10) + (int)(short)piVar1[2] <
                0x17) {
              lVar17 = FUN_030e7a5c(param_1 + 0x10);
              if (lVar17 != 0) {
                uVar15 = *(uint *)(lVar17 + 4);
                iVar11 = (int)*(undefined8 *)(param_1 + 0x20);
                goto LAB_030e7594;
              }
LAB_030e75a0:
              uVar12 = 0;
              uVar15 = 0xffffffff;
            }
            else {
              lVar17 = FUN_030e7e50(param_1 + 0x30,local_68);
              if (lVar17 == 0) goto LAB_030e75a0;
              uVar15 = *(uint *)(lVar17 + 4);
              iVar11 = (int)*(undefined8 *)(param_1 + 0x40);
LAB_030e7594:
              uVar12 = ((int)lVar17 - iVar11) * 0x20000000;
            }
            uVar19 = 1;
            if (-1 < (int)(uVar15 | uVar12)) {
              uVar19 = 2;
            }
          }
          else {
            uVar19 = 2;
          }
          iVar11 = (int)param_4[1];
          lVar17 = (long)iVar11 + 1;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar11) {
            FUN_030e84cc(param_4,lVar17);
            iVar11 = (int)param_4[1];
          }
          puVar13 = (uint *)(*param_4 + (long)iVar11 * 0x10);
          *puVar13 = uVar8;
          puVar13[1] = uVar7;
          *(short *)(puVar13 + 2) = (short)uVar9;
          *(short *)((long)puVar13 + 10) = (short)uVar5;
          *(undefined1 *)(puVar13 + 3) = uVar19;
        }
        *(int *)(param_4 + 1) = (int)lVar17;
      }
LAB_030e760c:
      if ((iVar14 + sVar24) - 1U == uVar20) break;
      sVar10 = (short)piVar21[2];
      uVar20 = uVar20 + 1;
    } while( true );
  }
  if (*(char *)(param_2 + 5) != '\0') {
    lVar17 = FUN_030e94b4((long *)(param_1 + 0x50),param_3);
    if (lVar17 == 0) {
      uVar15 = 0;
      uVar20 = 0xffffffff;
    }
    else {
      uVar20 = *(uint *)(lVar17 + 4);
      uVar15 = ((int)lVar17 - (int)*(undefined8 *)(param_1 + 0x60)) * 0x20000000;
    }
    lVar17 = *(long *)(param_1 + 0x50);
    piVar21 = (int *)(lVar17 + (long)(int)(uVar20 | uVar15) * 0x18 + 0x10);
    if (0 < *piVar21) {
      lVar22 = 0;
      lVar23 = 0;
      do {
        lVar16 = *(long *)(lVar17 + (long)(int)(uVar20 | uVar15) * 0x18 + 8);
        uVar12 = iVar3 + (int)lVar23;
        sVar10 = (short)uVar12;
        uVar18 = *param_3;
        uVar7 = *(uint *)(lVar16 + lVar22);
        if (uVar7 == uVar18) {
          iVar14 = *(int *)(lVar16 + lVar22 + 4);
          if (lVar23 < iVar14) {
            uVar7 = iVar14 + iVar3;
            sVar2 = (short)uVar7;
            sVar24 = sVar2;
            if ((uVar7 & 0xffff) <= (uVar12 & 0xffff)) {
              sVar24 = sVar10;
              sVar10 = sVar2;
            }
            iVar14 = (int)param_4[1];
            lVar16 = (long)iVar14 + 1;
            if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar14) {
              FUN_030e84cc(param_4,lVar16);
              iVar14 = (int)param_4[1];
            }
            puVar13 = (uint *)(*param_4 + (long)iVar14 * 0x10);
            *puVar13 = uVar18;
            puVar13[1] = uVar18;
            *(short *)(puVar13 + 2) = sVar10;
            goto LAB_030e779c;
          }
        }
        else if (-1 < (int)uVar7) {
          uVar12 = uVar18;
          uVar8 = uVar7;
          if ((int)uVar7 <= (int)uVar18) {
            uVar12 = uVar7;
            uVar8 = uVar18;
          }
          lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (ulong)uVar7 * 0x10;
          sVar24 = *(short *)(lVar4 + 10) + *(short *)(lVar4 + 8) +
                   (short)*(undefined4 *)(lVar16 + lVar22 + 4);
          sVar2 = sVar10;
          if ((int)uVar7 <= (int)uVar18) {
            sVar2 = sVar24;
            sVar24 = sVar10;
          }
          iVar14 = (int)param_4[1];
          lVar16 = (long)iVar14 + 1;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar14) {
            FUN_030e84cc(param_4,lVar16);
            iVar14 = (int)param_4[1];
          }
          puVar13 = (uint *)(*param_4 + (long)iVar14 * 0x10);
          *puVar13 = uVar12;
          puVar13[1] = uVar8;
          *(short *)(puVar13 + 2) = sVar2;
LAB_030e779c:
          *(short *)((long)puVar13 + 10) = sVar24;
          *(undefined1 *)(puVar13 + 3) = 3;
          *(int *)(param_4 + 1) = (int)lVar16;
        }
        lVar23 = lVar23 + 1;
        lVar22 = lVar22 + 8;
      } while (lVar23 < *piVar21);
    }
  }
  return;
}


